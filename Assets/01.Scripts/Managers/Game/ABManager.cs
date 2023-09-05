using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks;
using Unity.Services.RemoteConfig;
using Unity.Services.Authentication;
using Unity.Services.Core;

public class ABManager : MonoBehaviour
{

    public static ABManager instance;

    private void Awake()
    {
        instance = this;
    }

    public void SelectStart(string word)
    {
        if (ES3.KeyExists("NextStageEnable"))
            if (ES3.Load<bool>("NextStageEnable"))
            {
                print(1234555);
                return;
            }
            else
            {
                StartIdleFirst();

                return;
            }


        switch (word)
        {
            case "A":
                StartRunFirst();
                break;

            case "B":
                StartIdleFirst();
                break;

            default:

                break;

        }

        void StartRunFirst()
        {
            print("save");
            ES3.Save<string>("AB_Test", "A");

            IdleManager.instance.blackPanel.SetActive(false);
            RunManager.instance.blackPanel.SetActive(false);
        }

        void StartIdleFirst()
        {
            ES3.Save<string>("AB_Test", "B");

            if (!ES3.KeyExists("NextStageEnable"))
                ES3.Load<bool>("NextStageEnable", false);

            RunManager.instance.StartIdleFirst();

            this.TaskDelay(1f, () =>
            {
                IdleManager.instance.blackPanel.SetActive(false);
                RunManager.instance.blackPanel.SetActive(false);
            });

        }
    }

    public struct userAttributes { }
    public struct appAttributes { }

    async Task InitializeRemoteConfigAsync()
    {
        // initialize handlers for unity game services
        await UnityServices.InitializeAsync();

        // remote config requires authentication for managing environment information
        if (!AuthenticationService.Instance.IsSignedIn)
        {
            await AuthenticationService.Instance.SignInAnonymouslyAsync();
        }
    }

    async Task Start()
    {
        // initialize Unity's authentication and core services, however check for internet connection
        // in order to fail gracefully without throwing exception if connection does not exist
        if (Utilities.CheckForInternetConnection())
        {
            await InitializeRemoteConfigAsync();
        }

        RemoteConfigService.Instance.FetchCompleted += ApplyRemoteSettings;
        RemoteConfigService.Instance.FetchConfigs(new userAttributes(), new appAttributes());
    }

    void ApplyRemoteSettings(ConfigResponse configResponse)
    {
        Debug.Log("RemoteConfigService.Instance.appConfig fetched: " + RemoteConfigService.Instance.appConfig.config.ToString());

        // SelectStart(RemoteConfigService.Instance.appConfig.GetString("StartSelect"));
        SelectStart("A");
    }
}
