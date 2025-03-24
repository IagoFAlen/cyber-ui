#pragma once

#include <cstdlib>

namespace font {
    typedef struct Font {
        char* font; // font path
        unsigned int size;

        Font(){
            this->font = NULL;
            this->size = NULL;
        }

    } FONT;
    
    void set_font(char* font, unsigned int size);
}