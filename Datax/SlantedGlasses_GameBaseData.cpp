#include "SlantedGlasses_GameBaseData.h"



uint BasicFunctions::RandomNumber(UINT range, UINT domain)
{

    HelloWorld = (uint)0;

    LocalRange = range;

    LocalDomain = domain;

    HelloWorld = rand() % LocalRange;

    HelloWorld += LocalDomain;

    return HelloWorld;

}

void BasicFunctions::bFlickerSleep()
{

    FrameRateFluxuator = (uint)0;

    FrameRateFluxuator += RandomNumber((uint)64, (uint)128);


    Sleep(FrameRateFluxuator);

}

void BasicFunctions::bPause()
{

    SetCursor_Pause();

    system("pause");

}

void BasicFunctions::bClear()
{

    system("CLS");

}

void BasicFunctions::bTitleSleep()
{

    Sleep((uint)4000);

}

STRING BasicFunctions::Init_String()
{
    return "---------------blanc---------------";
}

void BasicFunctions::Init()
{

    hstdOUT = GetStdHandle(STD_OUTPUT_HANDLE);

    pTime = new SYSTEMTIME;

}

void BasicFunctions::PrintString(string phrase, FLAG skipLine, uint number)
{

    if (number > 0)
    {

        std::cout << number;

    }
    else
    {

        std::cout << phrase;

    }

    if (skipLine)
    {

        SetCursor_IncrementY((uint)2);

    }
}

void BasicFunctions::PrintText(const UCHAR* phrase, UINT size, FLAG skipLine)
{

    for (uint i = (uint)0; i < (uint)size; i++)
    {

        std::cout << phrase[i];

    }


    if (skipLine)
    {

        SetCursor_IncrementY((uint)2);

    }

}

void BasicFunctions::PrintChar(UCHAR Character)
{

    std::cout << Character;

}

void BasicFunctions::PrintBorder()
{

    SetCursor_MidLine();


    for (uint i = (uint)0; i < (uint)116; i++)
    {

        PrintChar((uint)233);

    }

}

void BasicFunctions::SeedTrueRandom()
{

    GetLocalTime(pTime);

    srand((uint)pTime->wMilliseconds);

}

void BasicFunctions::SetCursor(UINT x, UINT y)
{

    CursorPosition.X = x;

    CursorPosition.Y = y;


    SetConsoleCursorPosition(hstdOUT, CursorPosition);

}

void BasicFunctions::SetCursor_IncrementY(UINT yIncrement)
{

    CursorPosition.Y += yIncrement;

    SetConsoleCursorPosition(hstdOUT, CursorPosition);

}

void BasicFunctions::SetCursor_UI_Left()
{

    CursorPosition.X = (uint)6;

    CursorPosition.Y = (uint)3;


    SetConsoleCursorPosition(hstdOUT, CursorPosition);

}

void BasicFunctions::SetCursor_UI_Center()
{

    CursorPosition.X = (uint)18;

    CursorPosition.Y = (uint)3;


    SetConsoleCursorPosition(hstdOUT, CursorPosition);

}

void BasicFunctions::SetCursor_UI_Right()
{

    CursorPosition.X = (uint)62;

    CursorPosition.Y = (uint)3;


    SetConsoleCursorPosition(hstdOUT, CursorPosition);

}

void BasicFunctions::SetCursor_MidLine()
{

    CursorPosition.X = (uint)2;

    CursorPosition.Y = (uint)12;


    SetConsoleCursorPosition(hstdOUT, CursorPosition);

}

void BasicFunctions::SetCursor_GameText()
{

    CursorPosition.X = (uint)18;

    CursorPosition.Y = (uint)18;


    SetConsoleCursorPosition(hstdOUT, CursorPosition);

}

void BasicFunctions::SetCursor_Pause()
{

    CursorPosition.X = (uint)0;

    CursorPosition.Y = (uint)30;


    SetConsoleCursorPosition(hstdOUT, CursorPosition);

}

void BasicFunctions::SetCursor_SleepText()
{

    CursorPosition.X = (uint)28;

    CursorPosition.Y = (uint)16;


    SetConsoleCursorPosition(hstdOUT, CursorPosition);

}


