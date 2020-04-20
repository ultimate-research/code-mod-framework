#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace ItemDamageModuleImpl {
        bool is_smash_damage(app::BattleObjectModuleAccessor *, float,float) asm("_ZN3app8lua_bind42ItemDamageModuleImpl__is_smash_damage_implEPNS_26BattleObjectModuleAccessorEff") LINKABLE;
        u64 damage_log_value_float(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind49ItemDamageModuleImpl__damage_log_value_float_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        u64 damage_log_value_int(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind47ItemDamageModuleImpl__damage_log_value_int_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
    }
}
