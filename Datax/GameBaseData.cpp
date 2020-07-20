#include "GameBaseData.h"

uint BasicFunctions::RandomNumber(uint range, uint domain)
{
    uint HelloWorld = (uint)1000;

    uint LOCalRange = (uint)100;

    uint LocalDomain = domain * (uint)1000;



    do
    {
        HelloWorld = rand() % 1000;

        LOCalRange = 1000 / range;

        if (domain > 0)
        {
            LocalDomain = 1000 / domain;
        }

        HelloWorld /= LOCalRange;

        HelloWorld += LocalDomain;
    } while (HelloWorld >  ((range + domain) - (uint) 1) || HelloWorld < (uint) 0);

    if (domain == (uint)0)
    {
        while (HelloWorld >= range)
        {
            HelloWorld--;
        }

    }

    return HelloWorld;
}

void BasicFunctions::bFlickerSleep()
{
    uint FrameRateFluxuator = (uint)0;
    FrameRateFluxuator += RandomNumber((uint)64, (uint)128);


    Sleep(FrameRateFluxuator);
}

void BasicFunctions::bPause()
{

    SetCursor((uint)28, (uint)30);

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

void BasicFunctions::Init()
{
    hstdOUT = GetStdHandle(STD_OUTPUT_HANDLE);
}

void BasicFunctions::PrintString(string phrase, flag skipLine, uint number)
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

void BasicFunctions::PrintBorder()
{
    SetCursor_MidLine();


    for (uint i = (uint)0; i < (uint)116; i++)
    {
        PrintString("8");
    }

}

void BasicFunctions::SetCursor(uint x, uint y)
{
    CursorPosition.X = x;
    CursorPosition.Y = y;

    SetConsoleCursorPosition(hstdOUT, CursorPosition);
}

void BasicFunctions::SetCursor_IncrementY(uint yIncrement)
{
    CursorPosition.Y += yIncrement;

    SetConsoleCursorPosition(hstdOUT, CursorPosition);
}

void BasicFunctions::SetCursor_UI_Left()
{
    CursorPosition.X = (uint)3;
    CursorPosition.Y = (uint)3;

    SetConsoleCursorPosition(hstdOUT, CursorPosition);
}

void BasicFunctions::SetCursor_UI_Center()
{
    CursorPosition.X = (uint)30;
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
    CursorPosition.X = (uint)28;
    CursorPosition.Y = (uint)15;

    SetConsoleCursorPosition(hstdOUT, CursorPosition);
}

void BasicFunctions::SetCursor_Pause()
{
    CursorPosition.X = (uint)28;
    CursorPosition.Y = (uint)30;

    SetConsoleCursorPosition(hstdOUT, CursorPosition);
}

void BasicFunctions::SetCursor_SleepText()
{
    CursorPosition.X = (uint)28;
    CursorPosition.Y = (uint)16;

    SetConsoleCursorPosition(hstdOUT, CursorPosition);
}


