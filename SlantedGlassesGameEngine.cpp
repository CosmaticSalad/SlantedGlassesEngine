
#include"Datax/GameBaseData.h"

#include"Datax/Scene.h"


Scene gScene;

flag isGame = true;

flag loopGame = true;

flag isMenu = false;


UINT c_numScenes = (uint)3;  //Default - KEEP TRACK OF YOUR SCENES

uint scene = (uint)0;

uchar MenuInput = '#';


void PrintScene(uint scene, uchar& input);

void HandleInput();




int main()
{

    gScene.Init();

    gScene.bGameText.InitText();

    gScene.bUI.InitText();

    do
    {

        gScene.bFunctions.bClear();


        PrintScene(scene, MenuInput);


        if (isMenu)
        {

            HandleInput();

        }
        else
        {

           // gScene.bFunctions.bFlickerSleep();

            gScene.bFunctions.bPause();

        }

        scene++;

        if (loopGame)
        {

            scene %= c_numScenes;

        }

    } while (isGame);

    return 0;

}










void PrintScene(uint scene, uchar& input)
{
    switch (scene)
    {

    case 0:
        isMenu = gScene.PrintScene(&gScene.bFunctions, scene, input);
        break;

    case 1:
        isMenu = gScene.PrintScene(&gScene.bFunctions, scene, input);
        break;
        
    case 2:
        isMenu = gScene.PrintScene(&gScene.bFunctions, scene, input);
        break;

    }

}

void HandleInput()
{
    gScene.bFunctions.SetCursor_Pause();
    std::cin >> MenuInput;
}
