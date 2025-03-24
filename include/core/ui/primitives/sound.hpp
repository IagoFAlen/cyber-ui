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

    void set(SOUND* sound, char* name, char* description, char* path);   
}