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
using namespace form;

namespace widget {
    void set_widget(WIDGET* widget, char* shape, POSITION* positions, THEME* theme, SIZE* sizes, CONTENT* contents){
        widget->shape = shape;
        widget->positions = positions;
        widget->theme = theme;
        widget->sizes = sizes;
        widget->contents = contents;
    }

    bool is_forms_empty(WIDGET* widget){
        return widget->forms ? false : true;
    }

    void update_ids(FORM* form){
        form->id--;
        if(form->next)
            return update_ids(form->next);
    }

    bool add_form(WIDGET* widget, FORM* form){
        if(!widget->forms){
            form->id = 0;
            widget->forms = form;
            widget->forms->lastForm = form;
            widget->formSize++;
            return true;
        }

        if(widget->forms){
            FORM* lastForm = widget->forms->lastForm;
            form->id = lastForm->id + 1;
            lastForm->next = form;
            lastForm->next->previous  = lastForm;
            widget->forms->lastForm = lastForm->next; 
            widget->formSize++;
            return true;
        }

        return false;
    }

    void remove_form(WIDGET* widget, FORM* form){
        if(form->previous)
            form->previous->next = form->next;
        else{
            // Se não tem o anterior, significa que é o primeiro
            widget->forms = widget->forms->next;
            widget->forms->previous = NULL;
        }
        
        if(form->next)
            form->next->previous = form->previous;
        else{
            // Se não tem o posterior, significa que é o último
            widget->forms->lastForm = widget->forms->lastForm->previous; 
            widget->forms->lastForm->next = NULL;
        }

        form->next = NULL;
        form->previous = NULL;

        widget->formSize--;
        delete form;
    }

    void remove_form_by_id(WIDGET* widget, unsigned int id){
        for(FORM* currentForm = widget->forms; currentForm != NULL; currentForm = currentForm->next){
            if(currentForm->id == id){
                update_ids(currentForm);
                remove_form(widget, currentForm);
                widget->formSize--; 
                return;
            }
        }
    }

    void pop_form(WIDGET* widget){
        if(!is_forms_empty(widget)){
            remove_form(widget, widget->forms->lastForm);
            widget->formSize--;
        }
    }

    FORM* peek_form(WIDGET* widget){
        if(!is_forms_empty(widget))
            return widget->forms->lastForm;
        else
            return NULL;
    }
}