#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace ShakeModule {
        u64 req(app::BattleObjectModuleAccessor *, u64,int,bool,const Vector2f*,float,float,bool,bool) asm("_ZN3app8lua_bind21ShakeModule__req_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40EibRKNS3_8Vector2fEffbb") LINKABLE;
        u64 req_time_scale(app::BattleObjectModuleAccessor *, u64,int,bool,const Vector2f*,float,float,bool,bool,int,float) asm("_ZN3app8lua_bind32ShakeModule__req_time_scale_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40EibRKNS3_8Vector2fEffbbif") LINKABLE;
        u64 extend(app::BattleObjectModuleAccessor *, u64,int) asm("_ZN3app8lua_bind24ShakeModule__extend_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ei") LINKABLE;
        u64 stop(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind22ShakeModule__stop_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 stop_kind(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind27ShakeModule__stop_kind_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
        bool is_shake(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind26ShakeModule__is_shake_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 offset(app::BattleObjectModuleAccessor *, Vector3f &) asm("_ZN3app8lua_bind24ShakeModule__offset_implEPNS_26BattleObjectModuleAccessorERN3phx8Vector3fE") LINKABLE;
        u64 enable_offset(app::BattleObjectModuleAccessor *, Vector3f &) asm("_ZN3app8lua_bind31ShakeModule__enable_offset_implEPNS_26BattleObjectModuleAccessorERN3phx8Vector3fE") LINKABLE;
        u64 disable_offset(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind32ShakeModule__disable_offset_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_scale_kind(app::BattleObjectModuleAccessor *, u64,float) asm("_ZN3app8lua_bind32ShakeModule__set_scale_kind_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ef") LINKABLE;
        u64 set_axis_xy_kind(app::BattleObjectModuleAccessor *, u64,bool) asm("_ZN3app8lua_bind34ShakeModule__set_axis_xy_kind_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Eb") LINKABLE;
        u64 set_ignore_slow(app::BattleObjectModuleAccessor *, bool) asm("_ZN3app8lua_bind33ShakeModule__set_ignore_slow_implEPNS_26BattleObjectModuleAccessorEb") LINKABLE;
    }
}
