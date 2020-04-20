#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace StopModule {
        u64 cancel_hit_stop(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32StopModule__cancel_hit_stop_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_other_stop(app::BattleObjectModuleAccessor *, int,app::StopOtherKind) asm("_ZN3app8lua_bind31StopModule__set_other_stop_implEPNS_26BattleObjectModuleAccessorEiNS_13StopOtherKindE") LINKABLE;
        u64 get_other_stop(app::BattleObjectModuleAccessor *, app::StopOtherKind) asm("_ZN3app8lua_bind31StopModule__get_other_stop_implEPNS_26BattleObjectModuleAccessorENS_13StopOtherKindE") LINKABLE;
        u64 cancel_other_stop(app::BattleObjectModuleAccessor *, app::StopOtherKind) asm("_ZN3app8lua_bind34StopModule__cancel_other_stop_implEPNS_26BattleObjectModuleAccessorENS_13StopOtherKindE") LINKABLE;
        u64 set_item_stop(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind30StopModule__set_item_stop_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 get_item_stop(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30StopModule__get_item_stop_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 cancel_item_stop(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33StopModule__cancel_item_stop_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_link_stop(app::BattleObjectModuleAccessor *, bool,bool) asm("_ZN3app8lua_bind30StopModule__set_link_stop_implEPNS_26BattleObjectModuleAccessorEbb") LINKABLE;
        bool is_stop(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind24StopModule__is_stop_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_special_stop(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32StopModule__is_special_stop_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_hit(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind23StopModule__is_hit_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_damage(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind26StopModule__is_damage_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_item(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind24StopModule__is_item_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_other(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind25StopModule__is_other_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 get_hit_stop_real_frame(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind40StopModule__get_hit_stop_real_frame_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_hit_stop_frame(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind35StopModule__set_hit_stop_frame_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_hit_stop_frame_fix(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind39StopModule__set_hit_stop_frame_fix_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_special_stop(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind33StopModule__set_special_stop_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 end_stop(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind25StopModule__end_stop_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
    }
}
