
#include"Datax/SlantedGlasses_GameBaseData.h"

#include"Datax/SlantedGlasses_Scene.h"


BasicFunctions bFunctions;

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
    bFunctions.Init();

    //gScene.Init();

    gScene.bGameText.InitText();

    gScene.bUI.InitText();

    do
    {

        bFunctions.bClear();


        PrintScene(scene, MenuInput);


        if (isMenu)
        {

            HandleInput();

        }
        else
        {

           // bFunctions.bFlickerSleep();

            bFunctions.bPause();

        }

        scene++;

        if (loopGame)
        {

            scene %= c_numScenes;

        }

    } while (isGame);

    bFunctions.Delete_System_Time();

    return 0;

}










void PrintScene(uint scene, uchar& input)
{
    switch (scene)
    {

    case 0:
        isMenu = gScene.PrintScene(&bFunctions, scene, input);
        break;

    case 1:
        isMenu = gScene.PrintScene(&bFunctions, scene, input);
        break;
        
    case 2:
        isMenu = gScene.PrintScene(&bFunctions, scene, input);
        break;

    }

}

void HandleInput()
{
    bFunctions.SetCursor_Pause();
    std::cin >> MenuInput;
}
