#pragma once

#include <cstdlib>

#include "include/core/ui/widget.hpp"
#include "include/core/ui/context.hpp"

namespace context {
    bool is_empty(CONTEXT* context){
        return context->widgets ? false : true;
    }

    void update_ids(WIDGET* widget){
        widget->id--;
        if(widget->next)
            return update_ids(widget->next);
    }

    bool add_widget(CONTEXT* context, WIDGET* widget){
        if(!context->widgets){
            widget->id = 0;
            context->widgets = widget;
            context->widgets->lastWidget = widget;
            context->widgetSize++;
            return true;
        }

        if(context->widgets){
            WIDGET* lastWidget = context->widgets->lastWidget;
            widget->id = lastWidget->id + 1;
            lastWidget->next = widget;
            lastWidget->next->previous  = lastWidget;
            context->widgets->lastWidget = lastWidget->next; 
            context->widgetSize++;
            return true;
        }

        return false;
    }

    void remove_widget(CONTEXT* context, WIDGET* widget){
        if(widget->previous)
            widget->previous->next = widget->next;
        else{
            // Se não tem o anterior, significa que é o primeiro
            context->widgets = context->widgets->next;
            context->widgets->previous = NULL;
        }
        
        if(widget->next)
            widget->next->previous = widget->previous;
        else{
            // Se não tem o posterior, significa que é o último
            context->widgets->lastWidget = context->widgets->lastWidget->previous; 
            context->widgets->lastWidget->next = NULL;
        }

        widget->next = NULL;
        widget->previous = NULL;

        context->widgetSize--;
        delete widget;
    }

    void remove_widget_by_id(CONTEXT* context, unsigned int id){
        for(WIDGET* currentWidget = context->widgets; currentWidget != NULL; currentWidget = currentWidget->next){
            if(currentWidget->id == id){
                update_ids(currentWidget);
                remove_widget(context, currentWidget);
                context->widgetSize--; 
                return;
            }
        }
    }

    void pop_widget(CONTEXT* context){
        if(!is_empty(context)){
            remove_widget(context, context->widgets->lastWidget);
            context->widgetSize--;
        }
    }

    WIDGET* peek_widget(CONTEXT* context){
        if(!is_empty(context))
            return context->widgets->lastWidget;
        else
            return NULL;
    }

}