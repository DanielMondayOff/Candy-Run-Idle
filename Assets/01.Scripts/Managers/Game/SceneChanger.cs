using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Threading.Tasks;
using Unity.Services.RemoteConfig;
using Unity.Services.Authentication;
using Unity.Services.Core;
using UnityEngine.SceneManagement;

public class SceneChanger : MonoBehaviour
{

    public struct userAttributes { }
    public struct appAttributes { }



    public static SceneChanger instance;

    public static string Quality = "Balanced";

    private void Awake()
    {
        if (instance == null)
            instance = this;

        DontDestroyOnLoad(gameObject);
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

    void ApplyRemoteSettings(ConfigResponse configResponse)
    {
        var str = RemoteConfigService.Instance.appConfig.GetString("QualitySetting", "Balanced");

        Debug.Log("QualitySetting: " + str);

        switch (str)
        {
            case "Performant":
                SceneManager.LoadSceneAsync(3);
                break;

            case "Balanced":
                SceneManager.LoadSceneAsync(1);
                break;

            default:
                SceneManager.LoadSceneAsync(1);
                break;
        }
    }
}
