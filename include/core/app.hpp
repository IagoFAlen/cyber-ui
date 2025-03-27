#pragma once

#include <cstdlib>

#include "screen.hpp"

using namespace screen;

namespace app {
    typedef struct app {        
        SCREEN* screens;
        unsigned int screenSize;

        app(){
            this->screens = NULL;
            this->screenSize = 0;
        }
        
    } APP;

    bool add_screen(APP* app, SCREEN* screen);
}