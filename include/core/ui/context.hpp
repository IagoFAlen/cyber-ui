#pragma once

#include <cstdlib>

#include "primitives/size.hpp"
#include "primitives/position.hpp"

#include "contexts/sound_context.hpp"

#include "widget.hpp"
#include "theme.hpp"

using namespace widget;
using namespace size;
using namespace position;
using namespace sound_context;
using namespace theme;

namespace context {
    typedef struct Context {
        unsigned int id;
        SIZE* sizes;
        POSITION* positions;

        // CONTEXT means a/group of WIDGETS with the same pattern

        // WIDGETS
        WIDGET* widgets;
        

        THEME* theme;

        // DATA STRUTURE TO HANDLE ALL CONTEXTS
        CONTEXT* next;
        CONTEXT* previous;
        CONTEXT* lastContext;
        
        Context(){
            this->id = 0;
            this->positions = NULL;
            this->sizes = NULL;
            this->widgets = NULL;
            this->next = NULL;
            this->previous = NULL;
            this->lastContext = NULL;
            this->theme = NULL;
            this->next = NULL;
            this->previous = NULL;
            this->lastContext = NULL;
        }

        void add_widget(CONTEXT* context, WIDGET* widget);
        void remove_widget_by_id(CONTENT* context, unsigned int id);
        void pop_widget(CONTENT* context);
        void peek_widget(CONTENT* context);

    } CONTEXT;
}