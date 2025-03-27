#pragma once


#include "include/core/app.hpp"
#include "include/core/screen.hpp"

using namespace screen;
using namespace app;

namespace app {
    bool is_empty(APP* app){
        if(!app->screens){
            return false;
        }
        
        return true;
    }
    
    bool add_app(APP* app, SCREEN* screen){
        if(!app->screens){
            screen->id = 0;
            app->screens = screen;
            app->screens->lastScreen = screen;
            app->screenSize++;
            return true;
        }

        if(app->screens){
            SCREEN* lastScreen = app->screens->lastScreen;
            screen->id = lastScreen->id + 1;
            lastScreen->next = screen;
            lastScreen->next->previous  = lastScreen;
            app->screens->lastScreen = lastScreen->next; 
            app->screenSize++;
            return true;
        }

        return false;
    }

    void update_ids(SCREEN* screen){
        screen->id--;
        if(screen->next)
            return update_ids(screen->next);
    }

    void remove_screen(APP* app, SCREEN* screen){
        if(screen->previous)
            screen->previous->next = screen->next;
        else{
            // Se não tem o anterior, significa que é o primeiro
            app->screens = app->screens->next;
            app->screens->previous = NULL;
        }
        
        if(screen->next)
            screen->next->previous = screen->previous;
        else{
            // Se não tem o posterior, significa que é o último
            app->screens->lastScreen = app->screens->lastScreen->previous; 
            app->screens->lastScreen->next = NULL;
        }

        screen->next = NULL;
        screen->previous = NULL;

        app->screenSize--;
        delete screen;
    }

    void remove_screen_by_id(APP* app, unsigned int id){
        for(SCREEN* currentScreen = app->screens; currentScreen != NULL; currentScreen = currentScreen->next){
            if(currentScreen->id == id){
                update_ids(currentScreen);
                remove_screen(app, currentScreen);
                app->screenSize--; 
                return;
            }
        }
    }

    void pop_screen(APP* app){
        if(!is_empty(app)){
            remove_screen(app, app->screens->lastScreen);
            app->screenSize--;
        }
    }

    SCREEN* peek_screen(APP* app){
        if(!is_empty(app))
            return app->screens->lastScreen;
        else
            return NULL;
    }

}