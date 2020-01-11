#ifndef APP_SV_SYSTEM_H
#define APP_SV_SYSTEM_H

#include "types.h"

namespace app::sv_system {
    u64 battle_object(u64) asm("_ZN3app9sv_system13battle_objectEP9lua_State");
    u64 battle_object_module_accessor(u64) asm("_ZN3app9sv_system29battle_object_module_accessorEP9lua_State");
    u8 battle_object_category(u64) asm("_ZN3app9sv_system22battle_object_categoryEP9lua_State");
    int battle_object_kind(u64) asm("_ZN3app9sv_system18battle_object_kindEP9lua_State");
    int owner_id(u64) asm("_ZN3app9sv_system8owner_idEP9lua_State");
}

#endif // APP_SV_SYSTEM_H