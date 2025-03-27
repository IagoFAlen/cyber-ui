#pragma once

namespace position {
    typedef struct Position {
        int x;
        int y;
        int z;

        Position(){
            this->x = 0;
            this->y = 0;
            this->z = 0;
        }

    } POSITION;

    void set_position(POSITION* position, unsigned int x, unsigned int y, unsigned int z);
    void set_x(unsigned int x);    
    void set_y(unsigned int y);
    void set_z(unsigned int z);
}
