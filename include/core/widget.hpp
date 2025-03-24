#pragma once
#include <cstdlib>

#include "primitives/position.hpp"
#include "primitives/rgba.hpp"
#include "primitives/size.hpp"
#include "primitives/content.hpp"

using namespace position;
using namespace rgba;
using namespace size;
using namespace content;

namespace widget {
    typedef struct Widget {
        unsigned int id;

        POSITION* positions;
        RGBA* colors;
        SIZE* sizes;
        CONTENT* contents;

        Widget(){
            this->id = 0;
            this->positions = NULL;
            this->colors = NULL;
            this->sizes = NULL;
            this->contents = NULL;
        }

        void set_widget(POSITION* positions, RGBA* colors, SIZE* sizes, CONTENT* contents);

    } WIDGET;
}