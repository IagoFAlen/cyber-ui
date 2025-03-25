#pragma once

#include "include/core/ui/primitives/size.hpp"

namespace size {
    void set_size(SIZE* size, int width, int height){ //, int depth
        size->width = width;
        size->height = height;
    }

    void set_width(SIZE* size, int width){
        size->width = width;
    }

    void set_height(SIZE* size, int height){
        size->height = height;
    }
}