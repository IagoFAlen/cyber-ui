#pragma once

#include <cstdlib>

#include "include/core/ui/primitives/font.hpp"
#include "include/core/ui/contexts/font_context.hpp"

using namespace font;

namespace font_context {
    void init_font_context(FONT_CONTEXT* fontContext, FONT* primaryFont, FONT* secondaryFont){
        fontContext->primaryFont = primaryFont;
        fontContext->secondaryFont = secondaryFont;
    }
}