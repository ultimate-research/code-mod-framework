#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LuaModule {
        u64 enable_line(app::BattleObjectModuleAccessor *, app::LuaScriptLineID) asm("_ZN3app8lua_bind27LuaModule__enable_line_implEPNS_26BattleObjectModuleAccessorENS_15LuaScriptLineIDE") LINKABLE;
        u64 disable_line(app::BattleObjectModuleAccessor *, app::LuaScriptLineID) asm("_ZN3app8lua_bind28LuaModule__disable_line_implEPNS_26BattleObjectModuleAccessorENS_15LuaScriptLineIDE") LINKABLE;
        bool is_valid_line(app::BattleObjectModuleAccessor *, app::LuaScriptLineID) asm("_ZN3app8lua_bind29LuaModule__is_valid_line_implEPNS_26BattleObjectModuleAccessorENS_15LuaScriptLineIDE") LINKABLE;
        u64 get_execute_line(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32LuaModule__get_execute_line_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 reserve_status_data_array(app::BattleObjectModuleAccessor *, unsigned int) asm("_ZN3app8lua_bind41LuaModule__reserve_status_data_array_implEPNS_26BattleObjectModuleAccessorEj") LINKABLE;
        u64 enable_func(app::BattleObjectModuleAccessor *, app::LuaScriptStatusFuncID) asm("_ZN3app8lua_bind27LuaModule__enable_func_implEPNS_26BattleObjectModuleAccessorENS_21LuaScriptStatusFuncIDE") LINKABLE;
        u64 disable_func(app::BattleObjectModuleAccessor *, app::LuaScriptStatusFuncID) asm("_ZN3app8lua_bind28LuaModule__disable_func_implEPNS_26BattleObjectModuleAccessorENS_21LuaScriptStatusFuncIDE") LINKABLE;
        bool is_valid_func(app::BattleObjectModuleAccessor *, app::LuaScriptStatusFuncID) asm("_ZN3app8lua_bind29LuaModule__is_valid_func_implEPNS_26BattleObjectModuleAccessorENS_21LuaScriptStatusFuncIDE") LINKABLE;
    }
}
