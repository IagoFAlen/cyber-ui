#pragma once
#include <cstdlib>

#include "primitives/position.hpp"
#include "primitives/size.hpp"
#include "primitives/content.hpp"

#include "theme.hpp"

using namespace position;
using namespace theme;
using namespace size;
using namespace content;

namespace widget {
    typedef struct Widget {
        unsigned int id;

        char* shape;

        POSITION* positions;
        THEME* theme;
        SIZE* sizes;
        CONTENT* contents;

        // DATA STRUCTURE TO HANDLE ALL WIDGETS INSIDE A CONTEXT
        Widget* next;
        Widget* previous;
        Widget* lastWidget;

        Widget(){
            this->id = 0;
            this->positions = NULL;
            this->theme = NULL;
            this->sizes = NULL;
            this->contents = NULL;
            this->next = NULL;
            this->previous = NULL;
            this->lastWidget = NULL;
        }

        void set_widget(    
                            WIDGET* widget,
                            char* shape, 
                            POSITION* positions, 
                            THEME* theme, 
                            SIZE* sizes, 
                            CONTENT* contents
                        );

    } WIDGET;
}