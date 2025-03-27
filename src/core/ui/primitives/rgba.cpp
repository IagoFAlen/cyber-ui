#pragma once

#include "include/core/ui/primitives/rgba.hpp"

namespace rgba {
    void init_rgba(RGBA* rgba, unsigned int red, unsigned int green, unsigned int blue, unsigned int alpha){
        rgba->red = red;
        rgba->green = green;
        rgba->blue = blue;
        rgba->alpha = alpha;
    }

    void set_red(RGBA* rgba, unsigned int red){
        rgba->red = red;
    }

    void set_green(RGBA* rgba, unsigned int green){
        rgba->green = green;
    }  

    void set_blue(RGBA* rgba, unsigned int blue){
        rgba->blue = blue;
    }

    void set_alpha(RGBA* rgba, unsigned int alpha){
        rgba->alpha = alpha;
    }
}