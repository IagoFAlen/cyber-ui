#pragma once
#include <cstdlib>

namespace content {
    enum class MediaType { // Using enum class for type safety
        VIDEO,
        TEXT,
        PHOTO
    };

    typedef struct Content {
        void* media;
        MediaType type;

        Content(){
            this->media = NULL;
            this->type = MediaType::TEXT;
        }

    } CONTENT;


    void set_media(void* new_media);
    void set_type(MediaType type);

}