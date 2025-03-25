#pragma once

#include <cstdlib>

#include "primitives/size.hpp"
#include "primitives/font.hpp"

#include "theme.hpp"

using namespace size;
using namespace theme;
using namespace font;

namespace config {
    typedef struct Config{
        //SCREEN CONFIGS
        SIZE* sizes; // width and height screen window
        THEME* theme; // default theme

        Config(){
            this->sizes = NULL;
            this->theme = NULL;
        }
        
        void setup_config(SIZE* sizes, THEME* theme);

    } CONFIG;


}