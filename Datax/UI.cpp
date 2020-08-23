
#include"GameBaseData.h"

#include "UI.h"


void UI::PrintScene_UI(BasicFunctions* bFunctions, uint UIscene)
{

    switch (UIscene)
    {

    case (uint)0:

        uiCase0(bFunctions);

        break;

    case (uint)1:

        uiCase1(bFunctions);

        break;

    case (uint)2:

        uiCase2(bFunctions);

        break;


    default:

        break;

    }


}

void UI::uiCase0(BasicFunctions* bFunctions)
{

    bFunctions->SetCursor_UI_Left();

    bFunctions->PrintString("UI ONE");


    bFunctions->SetCursor_UI_Center();

    bFunctions->PrintString("UI TWO");

              
    bFunctions->SetCursor_UI_Right();

    bFunctions->PrintString("UI THREE");

}

void UI::uiCase1(BasicFunctions* bFunctions)
{

    bFunctions->SetCursor_UI_Left();

    bFunctions->PrintString("UI ONE");

              
    bFunctions->SetCursor_UI_Center();

    bFunctions->PrintString("UI TWO");

              
    bFunctions->SetCursor_UI_Right();

    bFunctions->PrintString("UI THREE");

}

void UI::uiCase2(BasicFunctions* bFunctions)
{

    bFunctions->SetCursor_UI_Left();

    bFunctions->PrintString("UI ONE");

              
    bFunctions->SetCursor_UI_Center();

    bFunctions->PrintString("UI TWO");

              
    bFunctions->SetCursor_UI_Right();

    bFunctions->PrintString("UI THREE");

}
