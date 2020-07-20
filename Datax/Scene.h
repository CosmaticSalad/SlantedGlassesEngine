#pragma once
#include"GameBaseData.h"
#include "UI.h"
#include "GameText.h"


struct UI;
struct GameText;
struct BasicFunctions;

struct Scene
{

    UI bUI;
    GameText bGameText;
    BasicFunctions bFunctions;

    flag hasMenu;

    void Init();

    flag PrintScene(BasicFunctions* bFunctions, uint scene, uchar& userInput);
};