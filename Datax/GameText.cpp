
#include"GameBaseData.h"

#include "GameText.h"



bool GameText::PrintScene_GameText(BasicFunctions* bFunctions, uint GTscene, uchar& pInput)
{

    testTest = new UCHAR[(uint)4];

    testTest[0] = 'A';
    testTest[1] = 'a';
    testTest[2] = 'B';
    testTest[3] = 'b';


    flag needMenu = false;


    switch (GTscene)
    {

    case (uint)0:

        needMenu = gtCase0(bFunctions);

        bFunctions->SetCursor_IncrementY();

        

        bFunctions->PrintText(testTest,(uint)4, true);


        break;

    case (uint)1:

        needMenu = gtCase1(bFunctions);

        bFunctions->PrintText(testTest, (uint)4, true);

        break;

    case (uint)2:


        needMenu = gtCase2(bFunctions);

        bFunctions->PrintText(testTest, (uint)4, true);

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

    bFunctions->PrintString("- Scene Two", true);

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
