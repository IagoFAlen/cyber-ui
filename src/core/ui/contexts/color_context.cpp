#pragma once

#include <cstdlib>

#include "include/core/ui/primitives/rgba.hpp"
#include "include/core/ui/contexts/color_context.hpp"

using namespace rgba;

namespace color_context {
    
    void set_color_context(COLOR_CONTEXT* colorContext, RGBA* primaryColor, RGBA* secondaryColor, RGBA* backgroundColor, RGBA* textColor, RGBA* errorColor){
        colorContext->primaryColor = primaryColor;
        colorContext->secondaryColor = secondaryColor;
        colorContext->backgroundColor = backgroundColor;
        colorContext->textColor = textColor;
        colorContext->errorColor = errorColor;
    }
        
}