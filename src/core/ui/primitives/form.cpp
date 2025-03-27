#include "include/core/ui/primitives/form.hpp"

namespace form {
    void set_form(FORM* form, SIZE* size, POSITION* position, THEME* theme, void* shape){
        form->size = size;
        form->position = position;
        form->theme = theme;
        form->shape = shape;
    }
}