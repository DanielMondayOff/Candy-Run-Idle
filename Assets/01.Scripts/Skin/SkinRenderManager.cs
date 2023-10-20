using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class SkinRenderManager : MonoBehaviour
{
    public static SkinRenderManager instance;

    public CutterSkin[] cutterskins;
    public IdlePlayerSkin_[] idlePlayerSkins;


    private void Awake()
    {
        instance = this;
    }

    public void ChangeSkinRender(SkinType type, int id)
    {
        switch (type)
        {
            case SkinType.Cutter:
                cutterskins.ToList().ForEach((n) => { n.gameObject.SetActive(false); if (n.id == id) n.gameObject.SetActive(true); });
                break;

            case SkinType.IdlePlayer:
                idlePlayerSkins.ToList().ForEach((n) => { n.gameObject.SetActive(false); if (n.id == id) n.gameObject.SetActive(true); });

                break;
        }
    }
}
