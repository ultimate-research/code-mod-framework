#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace Weapon {
        u64 get_founder_id(app::Weapon *) asm("_ZN3app8lua_bind27Weapon__get_founder_id_implEPNS_6WeaponE") LINKABLE;
    }
}
