#pragma once

#include "include/core/ui/primitives/position.hpp"

namespace position {
    void set_position(POSITION* position, unsigned int x, unsigned int y, unsigned int z){
        position->x = x;
        position->y = y;
        position->z = z;
    }

    void set_x(POSITION* position, unsigned int x){
        position->x = x;
    }   

    void set_y(POSITION* position, unsigned int y){
        position->y = y;
    }

    void set_z(POSITION* position, unsigned int z){
        position->z = z;
    }
}
