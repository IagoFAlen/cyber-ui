#pragma once

#include "ui/config.hpp"
#include "ui/context.hpp"

using namespace config;
using namespace context;

namespace app {
    typedef struct App {
        CONFIG* config;
        CONTEXT* contexts;
        
        App() {
            this->config = NULL;
            this->contexts = NULL;
        }

        void init_app(APP* app, CONFIG* config);
        void add_context(APP* app, CONTEXT* context);
    } APP;
}