#pragma once
#include <cstdlib>

#include "include/core/ui/primitives/position.hpp"
#include "include/core/ui/primitives/size.hpp"
#include "include/core/ui/primitives/content.hpp"

#include "include/core/ui/theme.hpp"
#include "include/core/ui/widget.hpp"

using namespace position;
using namespace theme;
using namespace size;
using namespace content;

namespace widget {
    void set_widget(WIDGET* widget, char* shape, POSITION* positions, THEME* theme, SIZE* sizes, CONTENT* contents){
        widget->shape = shape;
        widget->positions = positions;
        widget->theme = theme;
        widget->sizes = sizes;
        widget->contents = contents;
    }
}