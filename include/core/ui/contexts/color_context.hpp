#pragma once

#include <cstdlib>

#include "primitives/rgba.hpp"

using namespace rgba;

namespace color_context {
    typedef struct Color_Context {
        RGBA* primaryColor;
        RGBA* secondaryColor;
        RGBA* backgroundColor;
        RGBA* textColor;
        RGBA* errorColor;

        Color_Context() {
            primaryColor = NULL;
            secondaryColor = NULL;
            backgroundColor = NULL;
            textColor = NULL;
            errorColor = NULL;
        }

        void set_color_context( 
                                COLOR_CONTEXT* colorContext,
                                RGBA* primaryColor,
                                RGBA* secondaryColor,
                                RGBA* backgroundColor,
                                RGBA* textColor,
                                RGBA* errorColor
                        );
    } COLOR_CONTEXT;
}