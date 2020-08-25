
#include"GameBaseData.h"

#include "UI.h"


void UI::InitText()
{

    UItext_Text_ONE.String = new UCHAR[(uint)6];

    UItext_Text_ONE.String[0] = 'U';
    UItext_Text_ONE.String[1] = 'I';
    UItext_Text_ONE.String[2] = ' ';
    UItext_Text_ONE.String[3] = 'O';
    UItext_Text_ONE.String[4] = 'N';
    UItext_Text_ONE.String[5] = 'E';


    UItext_Text_TWO.String = new UCHAR[(uint)6];

    UItext_Text_TWO.String[0] = 'U';
    UItext_Text_TWO.String[1] = 'I';
    UItext_Text_TWO.String[2] = ' ';
    UItext_Text_TWO.String[3] = 'T';
    UItext_Text_TWO.String[4] = 'W';
    UItext_Text_TWO.String[5] = '0';


    UItext_Text_THREE.String = new UCHAR[(uint)8];

    UItext_Text_THREE.String[0] = 'U';
    UItext_Text_THREE.String[1] = 'I';
    UItext_Text_THREE.String[2] = ' ';
    UItext_Text_THREE.String[3] = 'T';
    UItext_Text_THREE.String[4] = 'H';
    UItext_Text_THREE.String[5] = 'R';
    UItext_Text_THREE.String[6] = 'E';
    UItext_Text_THREE.String[7] = 'E';

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

    bFunctions->PrintText(UItext_Text_ONE.String, (uint)6);

    bFunctions->SetCursor_UI_Center();

    bFunctions->PrintText(UItext_Text_TWO.String, (uint)6);
              
    bFunctions->SetCursor_UI_Right();

    bFunctions->PrintText(UItext_Text_THREE.String, (uint)8);

}

void UI::uiCase1(BasicFunctions* bFunctions)
{

    bFunctions->SetCursor_UI_Left();

    bFunctions->PrintText(UItext_Text_ONE.String, (uint)6);

    bFunctions->SetCursor_UI_Center();

    bFunctions->PrintText(UItext_Text_TWO.String, (uint)6);

    bFunctions->SetCursor_UI_Right();

    bFunctions->PrintText(UItext_Text_THREE.String, (uint)8);

}

void UI::uiCase2(BasicFunctions* bFunctions)
{

    bFunctions->SetCursor_UI_Left();

    bFunctions->PrintText(UItext_Text_ONE.String, (uint)6);

    bFunctions->SetCursor_UI_Center();

    bFunctions->PrintText(UItext_Text_TWO.String, (uint)6);

    bFunctions->SetCursor_UI_Right();

    bFunctions->PrintText(UItext_Text_THREE.String, (uint)8);

}
