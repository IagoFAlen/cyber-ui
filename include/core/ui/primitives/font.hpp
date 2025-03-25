#pragma once

#include <cstdlib>

namespace font {
    typedef struct Font {
        char* path; // font path
        unsigned int size;

        Font(){
            this->path = NULL;
            this->size = NULL;
        }

    } FONT;
    
    void set_font(FONT* font, char* path, unsigned int size);
    void change_font(FONT* font, char* path);
    void change_size(FONT* font, unsigned int size);
}