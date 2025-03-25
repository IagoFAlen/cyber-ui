#pragma once

#include <cstdlib>

#include "include/core/ui/primitives/sound.hpp"
#include "include/core/ui/contexts/sound_context.hpp"

using namespace sound;

namespace sound_context{
    void init_sound_context(SOUND_CONTEXT* sound_context, SOUND* success, SOUND* warning, SOUND* error){
        sound_context->success = success;
        sound_context->warning = warning;
        sound_context->error = error;
    }

    void set_success(SOUND_CONTEXT* sound_context, SOUND* success){
        sound_context->success = success;
    }
    
    void set_warning(SOUND_CONTEXT* sound_context, SOUND* warning){
        sound_context->warning = warning;

    }

    void set_error(SOUND_CONTEXT* sound_context, SOUND* error){
        sound_context->error = error;

    }
}