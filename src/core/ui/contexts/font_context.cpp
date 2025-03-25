#pragma once

#include <cstdlib>

#include "../primitives/font.hpp"

using namespace font;

namespace font_context {
    typedef struct Font_Context {
        FONT* primaryFont;
        FONT* secondaryFont;

        Font_Context() {
            this->primaryFont = NULL;
            this->secondaryFont = NULL;
        }

    } FONT_CONTEXT;

    void init_font_context(FONT_CONTEXT* fontContext, FONT* primaryFont, FONT* secondaryFont);
}