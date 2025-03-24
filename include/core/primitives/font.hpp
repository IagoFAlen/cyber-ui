#pragma once

#include <cstdlib>

namespace font {
    typedef struct Font {
        char* font; // font path

        Font(){
            this->font = NULL;
        }

    } FONT;
    
    void set_font(char* font);
}