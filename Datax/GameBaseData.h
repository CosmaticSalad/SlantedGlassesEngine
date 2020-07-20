#pragma once



#include"windows.h"
#include<string>
#include<map>
#include <iostream>


class CrewMember;

typedef bool flag;

typedef float floatyfloat;

typedef unsigned char uchar;

typedef unsigned int uint;

typedef unsigned int UINT;

typedef std::string string;


struct BasicFunctions
{
    HANDLE hstdOUT;
    COORD CursorPosition;
 
    void Init();

    void PrintString(string phrase, flag skipLine = false, uint number = (uint)0);

    void PrintBorder();

    uint RandomNumber(uint range, uint domain = (uint)0);

    void bFlickerSleep();

    void bPause();

    void bClear();

    void bTitleSleep();

    void SetCursor(uint x, uint y);

    void SetCursor_IncrementY(uint yIncrement = (uint)2);

    void SetCursor_UI_Left();

    void SetCursor_UI_Center();

    void SetCursor_UI_Right();

    void SetCursor_MidLine();

    void SetCursor_GameText();

    void SetCursor_Pause();

    void SetCursor_SleepText();
};