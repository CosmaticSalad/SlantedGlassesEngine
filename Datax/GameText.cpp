#include"GameBaseData.h"
#include "GameText.h"



bool GameText::PrintScene_GameText(BasicFunctions* bFunctions, uint GTscene, uchar& pInput)
{

    flag needMenu = false;


    switch (GTscene)
    {
    case 0:

        needMenu = gtCase0(bFunctions);
        break;

    case 1:

        needMenu = gtCase1(bFunctions);
        break;

    case 2:


        needMenu = gtCase2(bFunctions);
        break;

    default:

        break;

    }

    return needMenu;

}


flag GameText::gtCase0(BasicFunctions* bFunctions )
{

    bFunctions->SetCursor_GameText();
    bFunctions->PrintString("- Scene One",true);
    bFunctions->PrintString("How Does Your Game Begin?");

    return false;

}

flag GameText::gtCase1(BasicFunctions* bFunctions)
{

    bFunctions->SetCursor_GameText();
    bFunctions->PrintString("- Scene One", true);
    bFunctions->PrintString("How Does Your Game Play?");

    return false;

}

flag GameText::gtCase2(BasicFunctions* bFunctions)
{

    bFunctions->SetCursor_GameText();
    bFunctions->PrintString("- Scene Three", true);
    bFunctions->PrintString("How Does Your Game End?");

    return false;

}
