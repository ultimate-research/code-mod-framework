#ifndef PHX
#define PHX

#include <switch_min.h>

namespace phx {
    struct Vector2f {
        float x;
        float y;
    };

    struct Vector3f {
        float x;
        float y;
        float z;
    };

    struct Vector4f {
        float x;
        float y;
        float z;
        float w;
    };

    struct Hash40 {
        uint64_t hash;
    };
}
#endif
