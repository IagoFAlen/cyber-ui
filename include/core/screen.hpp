#pragma once

#include "ui/config.hpp"
#include "ui/context.hpp"

using namespace config;
using namespace context;

namespace screen {
    typedef struct Screen {
        unsigned int id;

        CONFIG* config;
        CONTEXT* contexts;

        unsigned int contextSize;
        
        Screen* next;
        Screen* previous;
        Screen* lastScreen;

        Screen() {
            this->id = 0;
            this->config = NULL;
            this->contexts = NULL;
        }

    } SCREEN;

    void init_screen(SCREEN* screen, CONFIG* config);
    bool is_empty(SCREEN* screen);
    void add_context(SCREEN* screen, CONTEXT* context);
    void update_ids(CONTEXT* context);
    void remove_context_by_id(SCREEN* screen, unsigned int id);
    void pop_context(SCREEN* screen);
    CONTEXT* peek_context(SCREEN* screen);
}