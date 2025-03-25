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

    void init_rgba(RGBA* rgba, unsigned int red, unsigned int green, unsigned int blue, unsigned int opacity);
    void set_red(RGBA* rgba, unsigned int red);
    void set_green(RGBA* rgba, unsigned int green);    
    void set_blue(RGBA* rgba, unsigned int blue);
    void set_opacity(RGBA* rgba, unsigned int opacity);
}