#pragma once

#include <cstdlib>

#include "../ui/widget.hpp"
#include "../ui/theme.hpp"
#include "../ui/primitives/position.hpp"
#include "../ui/primitives/size.hpp"
#include "../ui/primitives/content.hpp"

using namespace widget;
using namespace theme;
using namespace position;
using namespace size;
using namespace content;

namespace draw_widget {
    WIDGET* draw_folder(THEME* theme, POSITION* position){
        WIDGET* folder = new WIDGET();

        SIZE* folderSize = new SIZE();

        int folderWidth = 100;
        int folderHeight = 100;

        size::set_size(folderSize, folderWidth, folderHeight);
        widget::set_widget();
    }
}