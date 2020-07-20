
#include "Scene.h"

void Scene::Init()
{

    bFunctions.Init();

}

flag Scene::PrintScene(BasicFunctions* bFunctions, uint scene, uchar& userInput)
{

    hasMenu = false;

    switch (scene)
    {
    case 0:

        bUI.PrintScene_UI(bFunctions, scene);

        bFunctions->PrintBorder();

        hasMenu = bGameText.PrintScene_GameText(bFunctions, scene, userInput);

        break;

    case 1:

        bUI.PrintScene_UI(bFunctions, scene);

        bFunctions->PrintBorder();

        hasMenu = bGameText.PrintScene_GameText(bFunctions, scene, userInput);

        break;

    case 2:

        bUI.PrintScene_UI(bFunctions, scene);

        bFunctions->PrintBorder();

        hasMenu = bGameText.PrintScene_GameText(bFunctions, scene, userInput);

        break;
    default:

        break;
    }


    return hasMenu;
}
