// A FUNCTION TO PRESS A KEY AND HANDLE A CALLBACK FUNCTION TO ASSIGN AN ACTION
#pragma once

#include <cstdlib>

#include "map_key.hpp"
#include "../ui/primitives/sound.hpp"

using namespace map_key;
using namespace sound;

namespace event {
    typedef struct Event {
        MAP_KEY* key;
        void* callbackFunction;
        SOUND* keyPressSound;

        Event(){
            this->key = NULL;
            this->callbackFunction = NULL;
            this->keyPressSound = NULL;
        }

    } EVENT;

    void assign_event(EVENT& event, MAP_KEY* key, void* (callbackFunction)(), SOUND* sound);
    void trigger_event(EVENT& event, MAP_KEY* key);
}