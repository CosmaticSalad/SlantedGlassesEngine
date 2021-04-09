#pragma once 


#include"windows.h"


#include<minwinbase.h>


#include<sysinfoapi.h>


#include<string>


#include<map>


#include <iostream>





typedef bool flag;

typedef bool FLAG;

typedef float floatyfloat;

typedef unsigned char uchar;

typedef unsigned char UCHAR;        //UCHAR Data Access Functions Do Not Exist

typedef unsigned int uint;

typedef unsigned int UINT;

typedef std::string string;
 //USE Init_String() to initialise your STRINGS  -   CALL  [BasicFunctions*]->Init_String()  [SemiColon]
typedef std::string STRING;


struct BasicFunctions
{

    HANDLE hstdOUT;

    COORD CursorPosition;

    SYSTEMTIME* pTime;

    UINT HelloWorld;

    UINT LocalRange;

    UINT LocalDomain;

    UINT FrameRateFluxuator;

    UINT RandomNumber(uint range, uint domain = (uint)0);

    STRING Init_String();

    STRING Init_String_Phrase();

    void Init();

    void PrintString(string phrase, FLAG skipLine = false, uint number = (uint)0);

    void PrintText(const UCHAR* phrase, uint size, flag skipLine = false);

    void PrintChar(uchar Character);

    void PrintBorder();

    void SeedTrueRandom();

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

struct CHARSTRING
{

    UCHAR* String;

};

