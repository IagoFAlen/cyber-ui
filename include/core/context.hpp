#pragma once

#include <cstdlib>

#include "widget.hpp"

using namespace widget;
using namespace size;
using namespace position;

namespace context {
    typedef struct Context {
        unsigned int id;
        SIZE* sizes;
        POSITION* positions;

        // CONTEXT means a/group of WIDGETS with the same pattern

        // WIDGETS
        WIDGET* widgets;
        WIDGET* next;
        WIDGET* previous;
        WIDGET* lastWidget;

        // SOUNDS

        // TEXTURES

        Context(){
            this->id = 0;
            this->positions = NULL;
            this->sizes = NULL;
            this->widgets = NULL;
            this->next = NULL;
            this->previous = NULL;
            this->lastWidget = NULL;
        }

        void add_widget(CONTEXT* context, WIDGET* widget);
        void remove_widget_by_id(CONTENT* context, unsigned int id);
        void pop_widget(CONTENT* context);
        void peek_widget(CONTENT* context);

    } CONTEXT;
}