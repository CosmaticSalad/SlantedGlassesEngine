
#pragma once


struct BasicFunctions;


struct GameText
{

    CHARSTRING Gametext_CASE_ZERO_Text_Zero;

    CHARSTRING Gametext_CASE_ZERO_Text_ONE;

    CHARSTRING Gametext_CASE_ONE_Text_Zero;

    CHARSTRING Gametext_CASE_ONE_Text_ONE;

    CHARSTRING Gametext_CASE_TWO_Text_Zero;

    CHARSTRING Gametext_CASE_TWO_Text_ONE;

    void InitText();

    FLAG PrintScene_GameText(BasicFunctions* bFunctions, uint GTscene, uchar& pInput);

    FLAG gtCase0(BasicFunctions* bFunctions);

    FLAG gtCase1(BasicFunctions* bFunctions);

    FLAG gtCase2(BasicFunctions* bFunctions);

};
