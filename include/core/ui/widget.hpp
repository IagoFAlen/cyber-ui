#pragma once
#include <cstdlib>

#include "primitives/position.hpp"
#include "primitives/size.hpp"
#include "primitives/content.hpp"
#include "primitives/form.hpp"

#include "theme.hpp"

using namespace position;
using namespace theme;
using namespace size;
using namespace content;
using namespace form;

namespace widget {
    typedef struct Widget {
        unsigned int id;

        char* shape;

        POSITION* positions;
        THEME* theme;
        SIZE* sizes;
        CONTENT* contents;

        FORM* forms;
        unsigned int formSize;

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
            this->forms = NULL;
            this->formSize = 0;
        }

    } WIDGET;

    void set_widget(WIDGET* widget, char* shape, POSITION* positions, THEME* theme, SIZE* sizes, CONTENT* contents);
    bool is_forms_empty(WIDGET* widget);
    bool add_form(WIDGET* widget, FORM* form);
    void update_ids(FORM* form);
    void remove_form_by_id(WIDGET* widget, unsigned int id);
    void pop_form(WIDGET* widget);
    FORM* peek_form(WIDGET* widget);
}