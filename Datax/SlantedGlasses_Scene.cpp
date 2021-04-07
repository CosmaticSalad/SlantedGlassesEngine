#include "SlantedGlasses_Scene.h"



void Scene::Init()
{

    bFunctions.Init();

}

flag Scene::PrintScene(BasicFunctions* bFunctions, uint scene, uchar& userInput)
{

    bFunctions->bFlickerSleep();

    hasMenu = false;

    switch (scene)
    {

    case (uint)0:

        bUI.PrintScene_UI(bFunctions, scene);

        bFunctions->PrintBorder();

        hasMenu = bGameText.PrintScene_GameText(bFunctions, scene, userInput);

        break;

    case (uint)1:

        bUI.PrintScene_UI(bFunctions, scene);

        bFunctions->PrintBorder();

        hasMenu = bGameText.PrintScene_GameText(bFunctions, scene, userInput);

        break;

    case (uint)2:

        bUI.PrintScene_UI(bFunctions, scene);

        bFunctions->PrintBorder();

        hasMenu = bGameText.PrintScene_GameText(bFunctions, scene, userInput);

        break;

    default:

        break;
    }


    return hasMenu;
}
