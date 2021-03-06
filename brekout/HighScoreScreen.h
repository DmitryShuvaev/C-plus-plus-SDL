#ifndef HIGHSCORESCREEN_H
#define HIGHSCORESCREEN_H
#include "Texture.h"
#include "Collision.h"
#include "InputManager.h"
#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;
class HighScoreScreen:public Collision
{
    public:
        HighScoreScreen();
        virtual ~HighScoreScreen();
        void Update(SCREENS &mCurrentScreen, HighScores *mHighScores);
        void Render();

    private:
        const int FONT_SIZE=32*3;
        InputManager*mInput;
        Texture*title;
        Texture *mindex[10];
        Texture *mNames[10];
        Texture *mScores[10];
        Texture*lowtitle;
        bool notReaded=true;
};

#endif // HIGHSCORESCREEN_H
