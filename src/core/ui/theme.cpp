#pragma once

#include <cstdlib>

#include "include/core/ui/contexts/sound_context.hpp"
#include "include/core/ui/contexts/color_context.hpp"
#include "include/core/ui/contexts/font_context.hpp"

#include "include/core/ui/theme.hpp"

using namespace color_context;
using namespace sound_context;
using namespace font_context;

namespace theme {
    void init_theme(THEME* theme, char* name, COLOR_CONTEXT* colorContext, SOUND_CONTEXT* soundContext, FONT_CONTEXT* fontContext){
        theme->name = name;
        theme->colorContext = colorContext;
        theme->soundContext = soundContext;
        theme->fontContext = fontContext;
    }
}