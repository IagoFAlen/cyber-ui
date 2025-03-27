#pragma once

#include <cstdlib>

#include "theme.hpp"
#include "include/core/ui/config.hpp"

using namespace size;
using namespace theme;
using namespace font;

namespace config {
    void setup_config(CONFIG* config, SIZE* sizes, THEME* theme){
        config->sizes = sizes;
        config->theme = theme;
    }
}