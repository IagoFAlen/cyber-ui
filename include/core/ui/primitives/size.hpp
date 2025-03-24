#pragma once

namespace size {
    typedef struct Size {
        int width;
        int height;
        // int depth;
        Size(){
            this->width = 0;
            this->height = 0;
            // this->depth = 0;
        }

    } SIZE;

    void set_size(SIZE* size, int width, int height); //, int depth);
}