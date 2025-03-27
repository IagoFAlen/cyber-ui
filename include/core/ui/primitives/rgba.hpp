#pragma once

namespace rgba {
    typedef struct Rgba {
        unsigned int red;
        unsigned int green;
        unsigned int blue;
        unsigned int alpha;

        Rgba(){
            this->red = 0;
            this->green = 0;
            this->blue = 0;
            this->alpha = 0;
        }

    } RGBA;

    void init_rgba(RGBA* rgba, unsigned int red, unsigned int green, unsigned int blue, unsigned int alpha);
    void set_red(RGBA* rgba, unsigned int red);
    void set_green(RGBA* rgba, unsigned int green);    
    void set_blue(RGBA* rgba, unsigned int blue);
    void set_alpha(RGBA* rgba, unsigned int alpha);
}