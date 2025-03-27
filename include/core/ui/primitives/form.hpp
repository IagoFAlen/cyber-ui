#include <cstdlib>

#include "size.hpp"
#include "position.hpp"
#include "../theme.hpp"

using namespace size;
using namespace position;
using namespace theme;

namespace form {
    typedef struct form {
        unsigned int id;

        SIZE* size;
        POSITION* position;
        THEME* theme;
        void* shape;


        FORM* next;
        FORM* previous;
        FORM* lastForm;

        form(){
            this->id = 0;
            this->size = NULL;
            this->position = NULL;
            this->theme = NULL;
            this->shape = NULL;
            this->next = NULL;
            this->previous = NULL;
            this->lastForm = NULL;
        }

    } FORM;

    void set_form(FORM* form, SIZE* size, POSITION* position, THEME* theme, void* shape);


}