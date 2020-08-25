#pragma once

struct BasicFunctions;

struct UI
{
    UCHAR* UItext_Text_ONE;

    UCHAR* UItext_Text_TWO;

    UCHAR* UItext_Text_THREE;

    void InitText();

    void PrintScene_UI(BasicFunctions* bFunctions, uint UIscene);

    void uiCase0(BasicFunctions* bFunctions);

    void uiCase1(BasicFunctions* bFunctions);

    void uiCase2(BasicFunctions* bFunctions);

};