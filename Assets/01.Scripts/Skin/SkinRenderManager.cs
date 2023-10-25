using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using System.Linq;

public class SkinRenderManager : MonoBehaviour
{
    public static SkinRenderManager instance;

    [SerializeField] Transform parent;
    [SerializeField] GameObject cutterParent;
    [SerializeField] GameObject idlePlayerParent;

    public CutterSkin[] cutterskins;
    public IdlePlayerSkin_[] idlePlayerSkins;


    private void Awake()
    {
        instance = this;
    }

    public void ChangeSkinRender(SkinType type, int id)
    {
        cutterParent.SetActive(false);
        idlePlayerParent.SetActive(false);

        switch (type)
        {
            case SkinType.Cutter:
                cutterskins.ToList().ForEach((n) => { n.gameObject.SetActive(false); if (n.id == id) n.gameObject.SetActive(true); });
                cutterParent.SetActive(true);
                break;

            case SkinType.IdlePlayer:
                idlePlayerSkins.ToList().ForEach((n) => { n.gameObject.SetActive(false); if (n.id == id) n.gameObject.SetActive(true); });
                idlePlayerParent.SetActive(true);
                break;
        }
    }

    public void RotateDummy(Vector2 delta)
    {
        parent.Rotate(new Vector2(0, delta.x) * 1f);
    }
}
