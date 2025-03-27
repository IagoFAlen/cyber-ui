#pragma once


#include "include/core/ui/config.hpp"
#include "include/core/ui/context.hpp"
#include "include/core/screen.hpp"

using namespace config;
using namespace context;

namespace screen {

    void init_screen(SCREEN* screen, CONFIG* config){
        screen->config = config;
    }

    bool is_empty(SCREEN* screen){
        if(!screen->contexts){
            return false;
        }
        
        return true;
    }
    
    bool add_screen(SCREEN* screen, CONTEXT* context){
        if(!screen->contexts){
            context->id = 0;
            screen->contexts = context;
            screen->contexts->lastContext = context;
            screen->contextSize++;
            return true;
        }

        if(screen->contexts){
            CONTEXT* lastContext = screen->contexts->lastContext;
            context->id = lastContext->id + 1;
            lastContext->next = context;
            lastContext->next->previous  = lastContext;
            screen->contexts->lastContext = lastContext->next; 
            screen->contextSize++;
            return true;
        }

        return false;
    }

    void update_ids(CONTEXT* context){
        context->id--;
        if(context->next)
            return update_ids(context->next);
    }

    void remove_context(SCREEN* screen, CONTEXT* context){
        if(context->previous)
            context->previous->next = context->next;
        else{
            // Se não tem o anterior, significa que é o primeiro
            screen->contexts = screen->contexts->next;
            screen->contexts->previous = NULL;
        }
        
        if(context->next)
            context->next->previous = context->previous;
        else{
            // Se não tem o posterior, significa que é o último
            screen->contexts->lastContext = screen->contexts->lastContext->previous; 
            screen->contexts->lastContext->next = NULL;
        }

        context->next = NULL;
        context->previous = NULL;

        screen->contextSize--;
        delete context;
    }

    void remove_context_by_id(SCREEN* screen, unsigned int id){
        for(CONTEXT* currentContext = screen->contexts; currentContext != NULL; currentContext = currentContext->next){
            if(currentContext->id == id){
                update_ids(currentContext);
                remove_context(screen, currentContext);
                screen->contextSize--; 
                return;
            }
        }
    }

    void pop_context(SCREEN* screen){
        if(!is_empty(screen)){
            remove_context(screen, screen->contexts->lastContext);
            screen->contextSize--;
        }
    }

    CONTEXT* peek_context(SCREEN* screen){
        if(!is_empty(screen))
            return screen->contexts->lastContext;
        else
            return NULL;
    }

}