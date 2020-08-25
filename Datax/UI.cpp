
#include"GameBaseData.h"

#include "UI.h"


void UI::InitText()
{

    UItext_Text_ONE = new UCHAR[(uint)6];

    UItext_Text_ONE[0] = 'U';
    UItext_Text_ONE[1] = 'I';
    UItext_Text_ONE[2] = ' ';
    UItext_Text_ONE[3] = 'O';
    UItext_Text_ONE[4] = 'N';
    UItext_Text_ONE[5] = 'E';


    UItext_Text_TWO = new UCHAR[(uint)6];

    UItext_Text_TWO[0] = 'U';
    UItext_Text_TWO[1] = 'I';
    UItext_Text_TWO[2] = ' ';
    UItext_Text_TWO[3] = 'T';
    UItext_Text_TWO[4] = 'W';
    UItext_Text_TWO[5] = '0';


    UItext_Text_THREE = new UCHAR[(uint)8];

    UItext_Text_THREE[0] = 'U';
    UItext_Text_THREE[1] = 'I';
    UItext_Text_THREE[2] = ' ';
    UItext_Text_THREE[3] = 'T';
    UItext_Text_THREE[4] = 'H';
    UItext_Text_THREE[5] = 'R';
    UItext_Text_THREE[6] = 'E';
    UItext_Text_THREE[7] = 'E';

}

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

    bFunctions->PrintText(UItext_Text_ONE, (uint)6);

    bFunctions->SetCursor_UI_Center();

    bFunctions->PrintText(UItext_Text_TWO, (uint)6);
              
    bFunctions->SetCursor_UI_Right();

    bFunctions->PrintText(UItext_Text_THREE, (uint)8);

}

void UI::uiCase1(BasicFunctions* bFunctions)
{

    bFunctions->SetCursor_UI_Left();

    bFunctions->PrintText(UItext_Text_ONE, (uint)6);

    bFunctions->SetCursor_UI_Center();

    bFunctions->PrintText(UItext_Text_TWO, (uint)6);

    bFunctions->SetCursor_UI_Right();

    bFunctions->PrintText(UItext_Text_THREE, (uint)8);

}

void UI::uiCase2(BasicFunctions* bFunctions)
{

    bFunctions->SetCursor_UI_Left();

    bFunctions->PrintText(UItext_Text_ONE, (uint)6);

    bFunctions->SetCursor_UI_Center();

    bFunctions->PrintText(UItext_Text_TWO, (uint)6);

    bFunctions->SetCursor_UI_Right();

    bFunctions->PrintText(UItext_Text_THREE, (uint)8);

}
