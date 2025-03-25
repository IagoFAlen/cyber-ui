#pragma once

#include <cstdlib>

#include "contexts/sound_context.hpp"
#include "contexts/color_context.hpp"
#include "contexts/font_context.hpp"

using namespace color_context;
using namespace sound_context;
using namespace font_context;

namespace theme {
    typedef struct Theme {
        char* name;
        
        COLOR_CONTEXT* colorContext;
        SOUND_CONTEXT* soundContext;
        FONT_CONTEXT* fontContext;

        void* data; // It will be a JSON, thinking how to parse it yet

        Theme(){
            this->name = NULL;
            this->colorContext = NULL;
            this->soundContext = NULL;
            this->fontContext = NULL;
            this->data = NULL;
        }
        
    } THEME;

    void init_theme(    
                        THEME* theme,
                        char* name,
                        COLOR_CONTEXT* colorContext,
                        SOUND_CONTEXT* soundContext,
                        FONT_CONTEXT* fontContext
                );
}