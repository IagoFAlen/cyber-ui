#pragma once

#include <cstdlib>
#include "include/core/ui/primitives/font.hpp"

namespace font {
    void set_font(FONT* font, char* path, unsigned int size){
        font->path = path;
        font->size = size;
    }

    void change_font(FONT* font, char* path){
        font->path = path;
    }

    void change_size(FONT* font, unsigned int size){
        font->size = size;
    }
}