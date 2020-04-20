#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace PostureModule {
        u64 init_pos(app::BattleObjectModuleAccessor *, const Vector3f*,bool,bool) asm("_ZN3app8lua_bind28PostureModule__init_pos_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fEbb") LINKABLE;
        u64 pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind23PostureModule__pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 pos_2d(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind26PostureModule__pos_2d_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        float pos_x(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind25PostureModule__pos_x_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        float pos_y(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind25PostureModule__pos_y_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        float pos_z(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind25PostureModule__pos_z_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        float set_pos(app::BattleObjectModuleAccessor *, const Vector3f*) asm("_ZN3app8lua_bind27PostureModule__set_pos_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE") LINKABLE;
        float set_pos_2d(app::BattleObjectModuleAccessor *, const Vector2f*) asm("_ZN3app8lua_bind30PostureModule__set_pos_2d_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fE") LINKABLE;
        u64 add_pos(app::BattleObjectModuleAccessor *, const Vector3f*) asm("_ZN3app8lua_bind27PostureModule__add_pos_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE") LINKABLE;
        u64 add_pos_2d(app::BattleObjectModuleAccessor *, const Vector2f*) asm("_ZN3app8lua_bind30PostureModule__add_pos_2d_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fE") LINKABLE;
        u64 prev_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28PostureModule__prev_pos_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 prev_pos_2d(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31PostureModule__prev_pos_2d_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        float lr(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind22PostureModule__lr_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_lr(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind26PostureModule__set_lr_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 reverse_lr(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30PostureModule__reverse_lr_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 init_rot(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28PostureModule__init_rot_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 init_rot_2(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind30PostureModule__init_rot_2_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 rot(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind23PostureModule__rot_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 rot_x(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind25PostureModule__rot_x_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 rot_y(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind25PostureModule__rot_y_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 rot_z(app::BattleObjectModuleAccessor *, int) asm("_ZN3app8lua_bind25PostureModule__rot_z_implEPNS_26BattleObjectModuleAccessorEi") LINKABLE;
        u64 set_rot(app::BattleObjectModuleAccessor *, const Vector3f*,int) asm("_ZN3app8lua_bind27PostureModule__set_rot_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fEi") LINKABLE;
        u64 init_rot_y_lr(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33PostureModule__init_rot_y_lr_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        bool is_rot_y_lr_different_inner_lr(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind50PostureModule__is_rot_y_lr_different_inner_lr_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 rot_y_lr(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28PostureModule__rot_y_lr_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 update_rot_y_lr(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35PostureModule__update_rot_y_lr_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 reverse_rot_y_lr(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36PostureModule__reverse_rot_y_lr_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 base_scale(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30PostureModule__base_scale_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 scale(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind25PostureModule__scale_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_scale(app::BattleObjectModuleAccessor *, float,bool) asm("_ZN3app8lua_bind29PostureModule__set_scale_implEPNS_26BattleObjectModuleAccessorEfb") LINKABLE;
        u64 init_scale(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30PostureModule__init_scale_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 owner_scale(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind31PostureModule__owner_scale_implEPNS_26BattleObjectModuleAccessorE") LINKABLE;
        u64 set_owner_scale(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind35PostureModule__set_owner_scale_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_link_scale(app::BattleObjectModuleAccessor *, float,bool) asm("_ZN3app8lua_bind34PostureModule__set_link_scale_implEPNS_26BattleObjectModuleAccessorEfb") LINKABLE;
        u64 set_stick_lr(app::BattleObjectModuleAccessor *, float) asm("_ZN3app8lua_bind32PostureModule__set_stick_lr_implEPNS_26BattleObjectModuleAccessorEf") LINKABLE;
        u64 set_sync_constraint_joint(app::BattleObjectModuleAccessor *, u64) asm("_ZN3app8lua_bind45PostureModule__set_sync_constraint_joint_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40E") LINKABLE;
    }
}
