


#include"SlantedGlasses_GameBaseData.h"
#include "SlantedGlasses_UI.h"
#include "SlantedGlasses_GameText.h"


struct UI;
struct GameText;
struct BasicFunctions;

struct Scene
{

    UI bUI;
    GameText bGameText;
    

    flag hasMenu;

  

    flag PrintScene(BasicFunctions* bFunctions, uint scene, uchar& userInput);
};