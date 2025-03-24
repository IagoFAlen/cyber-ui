#pragma once

#include <cstdlib>

namespace theme {
    typedef struct Theme {
        void* data; // It will be a JSON, thinking how to parse it yet
    } THEME;
}