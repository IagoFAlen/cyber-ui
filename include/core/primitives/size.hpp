#pragma once

namespace size {
    typedef struct Size {
        int width;
        int height;

        Size(){
            this->width = 0;
            this->height = 0;
        }

    } SIZE;

    void set_width(int width);
    void set_height(int height);
}