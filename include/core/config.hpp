#pragma once

#include <cstdlib>

#include "primitives/size.hpp"
#include "primitives/theme.hpp"
#include "primitives/font.hpp"

using namespace size;
using namespace theme;
using namespace font;

namespace config {
    typedef struct Config{
        //SCREEN CONFIGS
        SIZE* sizes; // width and height screen window
        THEME* theme; // default theme
        FONT* font; // default font

        Config(){
            this->sizes = NULL;
            this->theme = NULL;
            this->font = NULL;
        }
        
        void setup_config(SIZE* sizes, THEME* theme, FONT* font);

    } CONFIG;


}