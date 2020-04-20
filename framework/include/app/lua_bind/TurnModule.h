#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace TurnModule {
        u64 set_turn(app::BattleObjectModuleAccessor *, u64,float,bool,bool,bool) asm("_ZN3app8lua_bind25TurnModule__set_turn_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Efbbb") LINKABLE;
        u64 end_turn(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind25TurnModule__end_turn_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_turn(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind24TurnModule__is_turn_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_turn_after90(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32TurnModule__is_turn_after90_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_extern(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind26TurnModule__is_extern_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_omit_intermediate(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind38TurnModule__set_omit_intermediate_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 ry_reverse(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind27TurnModule__ry_reverse_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    }
}
