#pragma once

#include <cstdlib>

namespace sound {
    typedef struct Sound {
        char* name;
        char* description;
        char* path;

        Sound(){
            this->name = NULL;
            this->description = NULL;
            this->path = NULL;
        }

    } SOUND;

    void init_sound(SOUND* sound, char* name, char* description, char* path);
    void set_name(SOUND* sound, char* name);
    void set_description(SOUND* sound, char* description);
    void set_path(SOUND* sound, char* path);
}