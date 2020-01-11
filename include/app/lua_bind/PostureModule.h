#pragma once

#include "types.h"
#include "../../useful/useful.h"

namespace app::lua_bind {
    namespace PostureModule {
        u64 add_pos(u64,const Vector3f*) asm("_ZN3app8lua_bind27PostureModule__add_pos_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE");
        u64 add_pos_2d(u64,const Vector2f*) asm("_ZN3app8lua_bind30PostureModule__add_pos_2d_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fE");
        u64 base_scale(u64) asm("_ZN3app8lua_bind30PostureModule__base_scale_implEPNS_26BattleObjectModuleAccessorE");
        u64 init_pos(u64,const Vector3f*,bool,bool) asm("_ZN3app8lua_bind28PostureModule__init_pos_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fEbb");
        u64 init_rot(u64) asm("_ZN3app8lua_bind28PostureModule__init_rot_implEPNS_26BattleObjectModuleAccessorE");
        u64 is_rot_y_lr_different_inner_lr(u64) asm("_ZN3app8lua_bind50PostureModule__is_rot_y_lr_different_inner_lr_implEPNS_26BattleObjectModuleAccessorE");
        float lr(u64) asm("_ZN3app8lua_bind22PostureModule__lr_implEPNS_26BattleObjectModuleAccessorE");
        u64 owner_scale(u64) asm("_ZN3app8lua_bind31PostureModule__owner_scale_implEPNS_26BattleObjectModuleAccessorE");
        u64 pos(u64) asm("_ZN3app8lua_bind23PostureModule__pos_implEPNS_26BattleObjectModuleAccessorE");
        u64 pos_2d(u64) asm("_ZN3app8lua_bind26PostureModule__pos_2d_implEPNS_26BattleObjectModuleAccessorE");
        float pos_x(u64) asm("_ZN3app8lua_bind25PostureModule__pos_x_implEPNS_26BattleObjectModuleAccessorE");
        float pos_y(u64) asm("_ZN3app8lua_bind25PostureModule__pos_y_implEPNS_26BattleObjectModuleAccessorE");
        u64 pos_z(u64) asm("_ZN3app8lua_bind25PostureModule__pos_z_implEPNS_26BattleObjectModuleAccessorE");
        u64 prev_pos(u64) asm("_ZN3app8lua_bind28PostureModule__prev_pos_implEPNS_26BattleObjectModuleAccessorE");
        u64 prev_pos_2d(u64) asm("_ZN3app8lua_bind31PostureModule__prev_pos_2d_implEPNS_26BattleObjectModuleAccessorE");
        u64 reverse_lr(u64) asm("_ZN3app8lua_bind30PostureModule__reverse_lr_implEPNS_26BattleObjectModuleAccessorE");
        u64 rot(u64,int) asm("_ZN3app8lua_bind23PostureModule__rot_implEPNS_26BattleObjectModuleAccessorEi");
        u64 rot_x(u64,int) asm("_ZN3app8lua_bind25PostureModule__rot_x_implEPNS_26BattleObjectModuleAccessorEi");
        u64 rot_y(u64,int) asm("_ZN3app8lua_bind25PostureModule__rot_y_implEPNS_26BattleObjectModuleAccessorEi");
        u64 rot_y_lr(u64) asm("_ZN3app8lua_bind28PostureModule__rot_y_lr_implEPNS_26BattleObjectModuleAccessorE");
        u64 rot_z(u64,int) asm("_ZN3app8lua_bind25PostureModule__rot_z_implEPNS_26BattleObjectModuleAccessorEi");
        u64 scale(u64) asm("_ZN3app8lua_bind25PostureModule__scale_implEPNS_26BattleObjectModuleAccessorE");
        u64 set_lr(u64,float) asm("_ZN3app8lua_bind26PostureModule__set_lr_implEPNS_26BattleObjectModuleAccessorEf");
        u64 set_owner_scale(u64,float) asm("_ZN3app8lua_bind35PostureModule__set_owner_scale_implEPNS_26BattleObjectModuleAccessorEf");
        float set_pos(u64,const Vector3f*) asm("_ZN3app8lua_bind27PostureModule__set_pos_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE");
        float set_pos_2d(u64,const Vector2f*) asm("_ZN3app8lua_bind30PostureModule__set_pos_2d_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fE");
        u64 set_rot(u64,const Vector3f*,int) asm("_ZN3app8lua_bind27PostureModule__set_rot_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fEi");
        u64 set_scale(u64,float,bool) asm("_ZN3app8lua_bind29PostureModule__set_scale_implEPNS_26BattleObjectModuleAccessorEfb");
        u64 set_stick_lr(u64,float) asm("_ZN3app8lua_bind32PostureModule__set_stick_lr_implEPNS_26BattleObjectModuleAccessorEf");
        u64 set_sync_constraint_joint(u64,u64) asm("_ZN3app8lua_bind45PostureModule__set_sync_constraint_joint_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E");
        u64 update_rot_y_lr(u64) asm("_ZN3app8lua_bind35PostureModule__update_rot_y_lr_implEPNS_26BattleObjectModuleAccessorE");
    }
}