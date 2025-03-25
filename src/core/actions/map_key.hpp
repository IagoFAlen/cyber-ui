#pragma once

#define MOD_NONE  0
#define MOD_CTRL  (1 << 0)
#define MOD_SHIFT (1 << 1)
#define MOD_ALT   (1 << 2)

#define KEY_A     0
#define KEY_B     1
#define KEY_ENTER 2
#define KEY_SPACE 3
#define KEY_LEFT  4
#define KEY_RIGHT 5
#define KEY_UP    6
#define KEY_DOWN  7
#define KEY_COUNT 8

#include <cstdint>

namespace map_key {
    typedef struct Map_Key {
        int key;
        uint8_t modifiers;
    } MAP_KEY;
}