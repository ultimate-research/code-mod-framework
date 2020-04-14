#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace ItemModule {
        u64 have_item(app::BattleObjectModuleAccessor *,app::ItemKind,int,int,bool,bool) asm("_ZN3app8lua_bind26ItemModule__have_item_implEPNS_26BattleObjectModuleAccessorENS_8ItemKindEiibb");
        u64 have_item_instance(app::BattleObjectModuleAccessor *,app::Item *,int,bool,bool,bool,bool) asm("_ZN3app8lua_bind35ItemModule__have_item_instance_implEPNS_26BattleObjectModuleAccessorEPNS_4ItemEibbbb");
        u64 use_item_instance(app::BattleObjectModuleAccessor *,app::Item *,bool) asm("_ZN3app8lua_bind34ItemModule__use_item_instance_implEPNS_26BattleObjectModuleAccessorEPNS_4ItemEb");
        u64 use_item(app::BattleObjectModuleAccessor *,int,bool) asm("_ZN3app8lua_bind25ItemModule__use_item_implEPNS_26BattleObjectModuleAccessorEib");
        u64 pickup_item(app::BattleObjectModuleAccessor *,app::ItemSize,int,int,app::QuickItemTreatType,app::ItemPickupSearchMode) asm("_ZN3app8lua_bind28ItemModule__pickup_item_implEPNS_26BattleObjectModuleAccessorENS_8ItemSizeEiiNS_18QuickItemTreatTypeENS_20ItemPickupSearchModeE");
        bool is_success_pickup_item(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind39ItemModule__is_success_pickup_item_implEPNS_26BattleObjectModuleAccessorE");
        u64 success_auto_pickup_item(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind41ItemModule__success_auto_pickup_item_implEPNS_26BattleObjectModuleAccessorE");
        bool is_success_auto_pickup_item(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind44ItemModule__is_success_auto_pickup_item_implEPNS_26BattleObjectModuleAccessorE");
        bool is_have_item(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind29ItemModule__is_have_item_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_have_item_size(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind35ItemModule__get_have_item_size_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_have_item_kind(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind35ItemModule__get_have_item_kind_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_have_item_trait(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind36ItemModule__get_have_item_trait_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_have_item_hold_kind(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind40ItemModule__get_have_item_hold_kind_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_have_item_status_param_int(app::BattleObjectModuleAccessor *,app::ItemStatusParamInt,int) asm("_ZN3app8lua_bind47ItemModule__get_have_item_status_param_int_implEPNS_26BattleObjectModuleAccessorENS_18ItemStatusParamIntEi");
        u64 get_have_item_status_param_float(app::BattleObjectModuleAccessor *,app::ItemStatusParamFloat,int) asm("_ZN3app8lua_bind49ItemModule__get_have_item_status_param_float_implEPNS_26BattleObjectModuleAccessorENS_20ItemStatusParamFloatEi");
        u64 get_have_item_status_param_bool(app::BattleObjectModuleAccessor *,app::ItemStatusParamBool,int) asm("_ZN3app8lua_bind48ItemModule__get_have_item_status_param_bool_implEPNS_26BattleObjectModuleAccessorENS_19ItemStatusParamBoolEi");
        u64 get_have_item_id(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind33ItemModule__get_have_item_id_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_pickable_item_object_id(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind44ItemModule__get_pickable_item_object_id_implEPNS_26BattleObjectModuleAccessorE");
        u64 get_pickable_item_size(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind39ItemModule__get_pickable_item_size_implEPNS_26BattleObjectModuleAccessorE");
        u64 get_pickable_item_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind39ItemModule__get_pickable_item_kind_implEPNS_26BattleObjectModuleAccessorE");
        u64 get_pickable_item_trait(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind40ItemModule__get_pickable_item_trait_implEPNS_26BattleObjectModuleAccessorE");
        u64 remove_item(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind28ItemModule__remove_item_implEPNS_26BattleObjectModuleAccessorEi");
        u64 remove_all(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind27ItemModule__remove_all_implEPNS_26BattleObjectModuleAccessorE");
        u64 throw_item(app::BattleObjectModuleAccessor *,float,float,float,int,bool,float) asm("_ZN3app8lua_bind27ItemModule__throw_item_implEPNS_26BattleObjectModuleAccessorEfffibf");
        u64 drop_item(app::BattleObjectModuleAccessor *,float,float,int) asm("_ZN3app8lua_bind26ItemModule__drop_item_implEPNS_26BattleObjectModuleAccessorEffi");
        u64 warp_item(app::BattleObjectModuleAccessor *,phx::Vector3f const&,int) asm("_ZN3app8lua_bind26ItemModule__warp_item_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fEi");
        u64 warp_attach_item(app::BattleObjectModuleAccessor *,phx::Vector3f const&) asm("_ZN3app8lua_bind33ItemModule__warp_attach_item_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector3fE");
        u64 born_item(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind26ItemModule__born_item_implEPNS_26BattleObjectModuleAccessorEi");
        u64 shoot_item_bullet(app::BattleObjectModuleAccessor *,int,float,int) asm("_ZN3app8lua_bind34ItemModule__shoot_item_bullet_implEPNS_26BattleObjectModuleAccessorEifi");
        u64 shoot_item_bullet_blanks(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind41ItemModule__shoot_item_bullet_blanks_implEPNS_26BattleObjectModuleAccessorEii");
        u64 get_shoot_item_bullet(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind38ItemModule__get_shoot_item_bullet_implEPNS_26BattleObjectModuleAccessorEi");
        u64 update_have_item_action_info(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind45ItemModule__update_have_item_action_info_implEPNS_26BattleObjectModuleAccessorEi");
        void set_have_item_scale_anim(app::BattleObjectModuleAccessor *,int,float,int) asm("_ZN3app8lua_bind41ItemModule__set_have_item_scale_anim_implEPNS_26BattleObjectModuleAccessorEifi");
        void set_have_item_action(app::BattleObjectModuleAccessor *,int,float,int) asm("_ZN3app8lua_bind37ItemModule__set_have_item_action_implEPNS_26BattleObjectModuleAccessorEifi");
        void set_have_item_visibility(app::BattleObjectModuleAccessor *,bool,int) asm("_ZN3app8lua_bind41ItemModule__set_have_item_visibility_implEPNS_26BattleObjectModuleAccessorEbi");
        void set_have_item_hold_anim(app::BattleObjectModuleAccessor *,bool,int) asm("_ZN3app8lua_bind40ItemModule__set_have_item_hold_anim_implEPNS_26BattleObjectModuleAccessorEbi");
        void set_have_item_constraint_joint(app::BattleObjectModuleAccessor *,phx::Hash40,int) asm("_ZN3app8lua_bind47ItemModule__set_have_item_constraint_joint_implEPNS_26BattleObjectModuleAccessorEN3phx6Hash40Ei");
        u64 reset_have_item_constraint_node(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind48ItemModule__reset_have_item_constraint_node_implEPNS_26BattleObjectModuleAccessorEi");
        void set_have_item_hit_sleep(app::BattleObjectModuleAccessor *,int,bool) asm("_ZN3app8lua_bind40ItemModule__set_have_item_hit_sleep_implEPNS_26BattleObjectModuleAccessorEib");
        u64 attach_item(app::BattleObjectModuleAccessor *,app::ItemKind,int,bool) asm("_ZN3app8lua_bind28ItemModule__attach_item_implEPNS_26BattleObjectModuleAccessorENS_8ItemKindEib");
        u64 attach_item_2(app::BattleObjectModuleAccessor *,app::Item *,bool) asm("_ZN3app8lua_bind30ItemModule__attach_item_2_implEPNS_26BattleObjectModuleAccessorEPNS_4ItemEb");
        u64 attach_item_instance(app::BattleObjectModuleAccessor *,app::Item *,bool) asm("_ZN3app8lua_bind37ItemModule__attach_item_instance_implEPNS_26BattleObjectModuleAccessorEPNS_4ItemEb");
        bool is_attach_item(app::BattleObjectModuleAccessor *,app::ItemKind) asm("_ZN3app8lua_bind31ItemModule__is_attach_item_implEPNS_26BattleObjectModuleAccessorENS_8ItemKindE");
        u64 get_attach_item_count(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind38ItemModule__get_attach_item_count_implEPNS_26BattleObjectModuleAccessorE");
        void set_attach_item_visibility(app::BattleObjectModuleAccessor *,bool,unsigned char) asm("_ZN3app8lua_bind43ItemModule__set_attach_item_visibility_implEPNS_26BattleObjectModuleAccessorEbh");
        u64 eject_have_item(app::BattleObjectModuleAccessor *,int,bool,bool) asm("_ZN3app8lua_bind32ItemModule__eject_have_item_implEPNS_26BattleObjectModuleAccessorEibb");
        u64 eject_attach_item(app::BattleObjectModuleAccessor *,int,bool,bool,bool) asm("_ZN3app8lua_bind34ItemModule__eject_attach_item_implEPNS_26BattleObjectModuleAccessorEibbb");
        u64 eject_attach(app::BattleObjectModuleAccessor *,app::ItemKind,bool,bool) asm("_ZN3app8lua_bind29ItemModule__eject_attach_implEPNS_26BattleObjectModuleAccessorENS_8ItemKindEbb");
        u64 drop_attach(app::BattleObjectModuleAccessor *,app::ItemKind,float,float) asm("_ZN3app8lua_bind28ItemModule__drop_attach_implEPNS_26BattleObjectModuleAccessorENS_8ItemKindEff");
        u64 drop_attach_group(app::BattleObjectModuleAccessor *,unsigned char,float,float) asm("_ZN3app8lua_bind34ItemModule__drop_attach_group_implEPNS_26BattleObjectModuleAccessorEhff");
        u64 scale_attach(app::BattleObjectModuleAccessor *,app::ItemKind,float) asm("_ZN3app8lua_bind29ItemModule__scale_attach_implEPNS_26BattleObjectModuleAccessorENS_8ItemKindEf");
        void set_attach_item_action(app::BattleObjectModuleAccessor *,app::ItemKind,int,float) asm("_ZN3app8lua_bind39ItemModule__set_attach_item_action_implEPNS_26BattleObjectModuleAccessorENS_8ItemKindEif");
        void set_have_item_team(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind35ItemModule__set_have_item_team_implEPNS_26BattleObjectModuleAccessorEii");
        void set_change_status_event(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind40ItemModule__set_change_status_event_implEPNS_26BattleObjectModuleAccessorEb");
    }
}
