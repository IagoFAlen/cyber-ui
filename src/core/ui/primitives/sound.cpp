#pragma once

#include "include/core/ui/primitives/sound.hpp"

namespace sound {
    void init_sound(SOUND* sound, char* name, char* description, char* path){
        sound->name = name;
        sound->description = description;
        sound->path = path;
    }

    void set_name(SOUND* sound, char* name){
        sound->name = name;
    }

    void set_description(SOUND* sound, char* description){
        sound->description = description;
    }

    void set_path(SOUND* sound, char* path){
        sound->path = path;
    }
}