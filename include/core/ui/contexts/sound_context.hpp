#pragma once

#include <cstdlib>

#include "primitives/sound.hpp"

using namespace sound;

namespace sound_context{
    typedef struct Sound_Context {
        SOUND* success;
        SOUND* warning;
        SOUND* error;

        Sound_Context(){
            this->success = NULL;
            this->warning = NULL;
            this->error = NULL;
        }
    } SOUND_CONTEXT;

    void init_sound_context(SOUND_CONTEXT* sound_context, SOUND* success, SOUND* warning, SOUND* error);
}