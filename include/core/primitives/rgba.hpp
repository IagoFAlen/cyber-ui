#pragma once

namespace rgba {
    typedef struct Rgba {
        unsigned int red;
        unsigned int green;
        unsigned int blue;
        unsigned int opacity;

        Rgba(){
            this->red = 0;
            this->green = 0;
            this->blue = 0;
            this->opacity = 0;
        }

    } RGBA;

    void set_red(unsigned int red);
    void set_green(unsigned int green);    
    void set_blue(unsigned int blue);
    void set_opacity(unsigned int opacity);
}