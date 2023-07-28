#if FIREBASE_ENABLED && !UNITY_EDITOR
using System.Collections.Generic;
using UnityEngine;
using Firebase.Analytics;

namespace MondayOFF {
    public static class EventTracker {
        private static Firebase.FirebaseApp _app = null;
        private static bool _isInitialized = true;

        public static void TryStage(int stageNum, string stageName = "Stage") {
            if (!_isInitialized) { return; }

            FirebaseAnalytics.LogEvent("Try",
                new Parameter(stageName, $"{stageName} {stageNum:000}")
            );
        }

        public static void ClearStage(int stageNum, string stageName = "Stage") {
            // Send event regardless of initialization
            switch (stageNum) {
                case 10:
                case 20:
                case 30:
                    SingularSDK.Event($"Stage_{stageNum}");
                    break;
            }

            if (!_isInitialized) { return; }

            FirebaseAnalytics.LogEvent("Clear",
                new Parameter(stageName, $"{stageName} {stageNum:000}")
            );
        }

        // Stringify prameter values
        public static void LogCustomEvent(string eventName, Dictionary<string, string> parameters) {
            if (!_isInitialized) { return; }

            if (parameters == null) {
                FirebaseAnalytics.LogEvent(eventName);
            } else {
                var eventParams = new Parameter[parameters.Count];
                int i = 0;
                foreach (var item in parameters) {
                    eventParams[i++] = new Parameter(item.Key, item.Value);
                }
                FirebaseAnalytics.LogEvent(eventName, eventParams);
            }
        }

        private static void TrackInterstitialAdRevenue(string adUnitID, MaxSdkBase.AdInfo adInfo) {
            if (!_isInitialized) { return; }

            Parameter[] AdParameters = {
                new Parameter("ad_platform", "MAX"),
                new Parameter("ad_source", adInfo.NetworkName),
                new Parameter("ad_format", parameterValue: "Interstitial"),
                new Parameter("ad_placement", "IS"),
                new Parameter("currency","USD"),
                new Parameter("value", adInfo.Revenue)
            };
            Firebase.Analytics.FirebaseAnalytics.LogEvent("ad_impression", AdParameters);
        }

        private static void TrackRewardedAdRevenue(string adUnitID, MaxSdkBase.AdInfo adInfo) {
            if (!_isInitialized) { return; }

            Parameter[] AdParameters = {
                new Parameter("ad_platform", "MAX"),
                new Parameter("ad_source", adInfo.NetworkName),
                new Parameter("ad_format", "Rewarded Video"),
                new Parameter("ad_placement", "RV"),
                new Parameter("currency","USD"),
                new Parameter("value", adInfo.Revenue)
            };
            Firebase.Analytics.FirebaseAnalytics.LogEvent("ad_impression", AdParameters);
        }

        private static void TrackBannerAdRevenue(string adUnitID, MaxSdkBase.AdInfo adInfo) {
            if (!_isInitialized) { return; }

            Parameter[] AdParameters = {
                new Parameter("ad_platform", "MAX"),
                new Parameter("ad_source", adInfo.NetworkName),
                new Parameter("ad_format", "Banner"), // Setting Banner placement seem to work with delay
                new Parameter("currency","USD"),
                new Parameter("value", adInfo.Revenue)
            };
            Firebase.Analytics.FirebaseAnalytics.LogEvent("ad_impression", AdParameters);
        }

        [RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.AfterSceneLoad)]
        private static void AfterSceneLoad() {
            Initialize();
        }

        internal static void Initialize() {
            if (!EveryDay.isInitialized) {
                EveryDay.onEverydayInitialized += Initialize;
                return;
            }

            _isInitialized = false;
            Firebase.FirebaseApp.CheckAndFixDependenciesAsync().ContinueWith(task => {
                var dependencyStatus = task.Result;
                if (dependencyStatus == Firebase.DependencyStatus.Available) {
                    // Create and hold a reference to your FirebaseApp,
                    // where app is a Firebase.FirebaseApp property of your application class.
                    _app = Firebase.FirebaseApp.DefaultInstance;

                    // Set a flag here to indicate whether Firebase is ready to use by your app.
                    OnFirebaseInitialized();

                } else {
                    EverydayLogger.Error(System.String.Format(
                      "Could not resolve all Firebase dependencies: {0}", dependencyStatus));
                    // Firebase Unity SDK is NOT safe to use here.
                }
            });
        }

        private static void OnFirebaseInitialized() {
            _isInitialized = true;

            MaxSdkCallbacks.Interstitial.OnAdRevenuePaidEvent += TrackInterstitialAdRevenue;
            MaxSdkCallbacks.Rewarded.OnAdRevenuePaidEvent += TrackRewardedAdRevenue;
            MaxSdkCallbacks.Banner.OnAdRevenuePaidEvent += TrackBannerAdRevenue;

            FirebaseAnalytics.LogEvent(FirebaseAnalytics.EventAppOpen);
        }
    }
}
#endif