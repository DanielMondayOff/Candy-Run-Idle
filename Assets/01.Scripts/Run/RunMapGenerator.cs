using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using Sirenix.OdinInspector;

public class RunMapGenerator : MonoBehaviour
{
    [BoxGroup("참조")][SerializeField] Transform mapParent;

    [BoxGroup("value")][SerializeField] Vector2 addCandyValue;
    [BoxGroup("currentValue")][SerializeField] int targetAddCandyPiller;
    [BoxGroup("currentValue")][SerializeField] int currentAddCandyPiller;
    [BoxGroup("currentValue")][SerializeField] bool tripleShot;


    [SerializeField] GameObject[] addCandyPillerPrefabs;
    [SerializeField] GameObject[] randomPillerPrefabs;
    [SerializeField] GameObject[] obstaclePrefabs;
    [SerializeField] GameObject[] randomObjectPrefabs;
    [SerializeField] GameObject[] tripleShotPillerPrefabs;


    [SerializeField] List<Transform> mapPoints = new List<Transform>();


    public void GenerateMap()
    {
        targetAddCandyPiller = (int)Random.Range(addCandyValue.x, addCandyValue.y);

        tripleShot = RandomBooleanGenerator.GenerateRandomBoolean();

        while (mapPoints.Count > 0)
        {
            Transform point = GetRandomPoint();

            if (tripleShot)
            {
                var prefab = Instantiate(randomPillerPrefabs[Random.Range(0, randomPillerPrefabs.Length)], point);

                var pillers = prefab.GetComponentsInChildren<Piller>();

                foreach (var piller in pillers)
                {
                    if (piller.value > 0)
                        piller.ChangeToTripleShot();
                    break;
                }

                tripleShot = false;
            }
            else if (currentAddCandyPiller < targetAddCandyPiller)
            {
                var prefab = Instantiate(randomPillerPrefabs[Random.Range(0, randomPillerPrefabs.Length)], point);

                var pillers = prefab.GetComponentsInChildren<Piller>();

                foreach (var piller in pillers)
                {
                    if (piller.value > 0)
                        piller.ChangeToAddCandy();

                    break;
                }

                currentAddCandyPiller++;

                continue;
            }
            else
            {
                var prefab = Instantiate(randomObjectPrefabs[Random.Range(0, randomObjectPrefabs.Length)], point);

                var pillers = prefab.GetComponentsInChildren<Piller>();

                foreach (var piller in pillers)
                {
                    piller.ChangeToNormalRandom();
                }
            }
        }

        MondayOFF.EventTracker.LogCustomEvent(
		"Run", 
		new Dictionary<string, string>{ {"RunMap", "RunMapRandomGenerated"} }
);
    }

    public Transform GetRandomPoint()
    {
        var num = Random.Range(0, mapPoints.Count);

        Transform point = mapPoints[num];

        mapPoints.RemoveAt(num);

        return point;
    }
}

public class RandomBooleanGenerator
{
    private static readonly System.Random random = new System.Random();

    public static bool GenerateRandomBoolean()
    {
        // 0부터 1까지의 무작위 정수를 생성합니다.
        int randomNumber = random.Next(0, 2);

        // randomNumber가 0일 때 false를 반환하고, 1일 때 true를 반환합니다.
        return randomNumber == 1;
    }
}
