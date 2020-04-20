#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace ColorBlendModule {
        u64 off_flash(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind32ColorBlendModule__off_flash_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_enable_flash(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind39ColorBlendModule__set_enable_flash_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_burn_color(app::BattleObjectModuleAccessor *, const Vector4f*,bool) asm("_ZN3app8lua_bind37ColorBlendModule__set_burn_color_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector4fEb") LINKABLE;
        u64 set_burn_color_frame(app::BattleObjectModuleAccessor *, float,const Vector4f*,bool) asm("_ZN3app8lua_bind43ColorBlendModule__set_burn_color_frame_implEPNS_26BattleObjectModuleAccessorEfRKN3phx8Vector4fEb") LINKABLE;
        u64 off_burn_color(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind37ColorBlendModule__off_burn_color_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 set_burn_color_priority(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind46ColorBlendModule__set_burn_color_priority_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_priority(app::BattleObjectModuleAccessor *, int,bool) asm("_ZN3app8lua_bind35ColorBlendModule__set_priority_implEPNS_26BattleObjectModuleAccessorEib") LINKABLE;
        u64 set_shadow_bloom(app::BattleObjectModuleAccessor *, float,bool) asm("_ZN3app8lua_bind39ColorBlendModule__set_shadow_bloom_implEPNS_26BattleObjectModuleAccessorEfb") LINKABLE;
        u64 set_last_attack_direction(app::BattleObjectModuleAccessor *, const Vector3f*) asm("_ZN3app8lua_bind48ColorBlendModule__set_last_attack_direction_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE") LINKABLE;
        u64 set_main_color(app::BattleObjectModuleAccessor *, const Vector4f*,const Vector4f*,float,float,int,bool) asm("_ZN3app8lua_bind37ColorBlendModule__set_main_color_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector4fES6_ffib") LINKABLE;
        u64 cancel_main_color(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind40ColorBlendModule__cancel_main_color_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_status(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind33ColorBlendModule__set_status_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
        u64 get_status(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33ColorBlendModule__get_status_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_disable_camera_depth_influence(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind57ColorBlendModule__set_disable_camera_depth_influence_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
    }
}
