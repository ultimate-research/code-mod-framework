#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace ArticleModule {
        u64 generate_article(app::BattleObjectModuleAccessor *,int,bool,int) asm("_ZN3app8lua_bind36ArticleModule__generate_article_implEPNS_26BattleObjectModuleAccessorEibi");
        u64 generate_article_enable(app::BattleObjectModuleAccessor *,int,bool,int) asm("_ZN3app8lua_bind43ArticleModule__generate_article_enable_implEPNS_26BattleObjectModuleAccessorEibi");
        u64 generate_article_have_item(app::BattleObjectModuleAccessor *,int,int,phx::Hash40) asm("_ZN3app8lua_bind46ArticleModule__generate_article_have_item_implEPNS_26BattleObjectModuleAccessorEiiN3phx6Hash40E");
        u64 have(app::BattleObjectModuleAccessor *,int,phx::Hash40,app::ArticleOperationTarget,unsigned int,bool) asm("_ZN3app8lua_bind24ArticleModule__have_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40ENS_22ArticleOperationTargetEjb");
        u64 shoot(app::BattleObjectModuleAccessor *,int,app::ArticleOperationTarget,bool) asm("_ZN3app8lua_bind25ArticleModule__shoot_implEPNS_26BattleObjectModuleAccessorEiNS_22ArticleOperationTargetEb");
        u64 shoot_exist(app::BattleObjectModuleAccessor *,int,app::ArticleOperationTarget,bool) asm("_ZN3app8lua_bind31ArticleModule__shoot_exist_implEPNS_26BattleObjectModuleAccessorEiNS_22ArticleOperationTargetEb");
        void set_pos(app::BattleObjectModuleAccessor *,int,phx::Vector3f) asm("_ZN3app8lua_bind27ArticleModule__set_pos_implEPNS_26BattleObjectModuleAccessorEiN3phx8Vector3fE");
        u64 motion_kind(app::BattleObjectModuleAccessor *,int,app::ArticleOperationTarget) asm("_ZN3app8lua_bind31ArticleModule__motion_kind_implEPNS_26BattleObjectModuleAccessorEiNS_22ArticleOperationTargetE");
        u64 change_motion(app::BattleObjectModuleAccessor *,int,phx::Hash40,bool,float) asm("_ZN3app8lua_bind33ArticleModule__change_motion_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40Ebf");
        u64 change_motion_from_no(app::BattleObjectModuleAccessor *,int,phx::Hash40,int,bool,float) asm("_ZN3app8lua_bind41ArticleModule__change_motion_from_no_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40Eibf");
        u64 add_motion_2nd(app::BattleObjectModuleAccessor *,int,phx::Hash40,float,float,bool,float) asm("_ZN3app8lua_bind34ArticleModule__add_motion_2nd_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40Effbf");
        u64 motion_kind_2nd(app::BattleObjectModuleAccessor *,int,app::ArticleOperationTarget) asm("_ZN3app8lua_bind35ArticleModule__motion_kind_2nd_implEPNS_26BattleObjectModuleAccessorEiNS_22ArticleOperationTargetE");
        void set_weight(app::BattleObjectModuleAccessor *,int,float,bool) asm("_ZN3app8lua_bind30ArticleModule__set_weight_implEPNS_26BattleObjectModuleAccessorEifb");
        u64 add_motion_partial(app::BattleObjectModuleAccessor *,int,int,phx::Hash40,float,float,bool,bool,float,bool,bool,bool) asm("_ZN3app8lua_bind38ArticleModule__add_motion_partial_implEPNS_26BattleObjectModuleAccessorEiiN3phx6Hash40Effbbfbbb");
        void set_frame(app::BattleObjectModuleAccessor *,int,float) asm("_ZN3app8lua_bind29ArticleModule__set_frame_implEPNS_26BattleObjectModuleAccessorEif");
        void set_frame_2nd(app::BattleObjectModuleAccessor *,int,float,bool) asm("_ZN3app8lua_bind33ArticleModule__set_frame_2nd_implEPNS_26BattleObjectModuleAccessorEifb");
        void set_rate(app::BattleObjectModuleAccessor *,int,float) asm("_ZN3app8lua_bind28ArticleModule__set_rate_implEPNS_26BattleObjectModuleAccessorEif");
        u64 change_status(app::BattleObjectModuleAccessor *,int,int,app::ArticleOperationTarget) asm("_ZN3app8lua_bind33ArticleModule__change_status_implEPNS_26BattleObjectModuleAccessorEiiNS_22ArticleOperationTargetE");
        u64 change_status_exist(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind39ArticleModule__change_status_exist_implEPNS_26BattleObjectModuleAccessorEii");
        void set_visibility_whole(app::BattleObjectModuleAccessor *,int,bool,app::ArticleOperationTarget) asm("_ZN3app8lua_bind40ArticleModule__set_visibility_whole_implEPNS_26BattleObjectModuleAccessorEibNS_22ArticleOperationTargetE");
        void set_visibility(app::BattleObjectModuleAccessor *,int,phx::Hash40,phx::Hash40,app::ArticleOperationTarget) asm("_ZN3app8lua_bind34ArticleModule__set_visibility_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40ES4_NS_22ArticleOperationTargetE");
        void set_default_visibility(app::BattleObjectModuleAccessor *,int,phx::Hash40,app::ArticleOperationTarget) asm("_ZN3app8lua_bind42ArticleModule__set_default_visibility_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40ENS_22ArticleOperationTargetE");
        void set_situation_kind(app::BattleObjectModuleAccessor *,int,unsigned char) asm("_ZN3app8lua_bind38ArticleModule__set_situation_kind_implEPNS_26BattleObjectModuleAccessorEih");
        void set_flag(app::BattleObjectModuleAccessor *,int,bool,int) asm("_ZN3app8lua_bind28ArticleModule__set_flag_implEPNS_26BattleObjectModuleAccessorEibi");
        bool is_flag(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind27ArticleModule__is_flag_implEPNS_26BattleObjectModuleAccessorEii");
        bool is_flag_from_no(app::BattleObjectModuleAccessor *,int,int,int) asm("_ZN3app8lua_bind35ArticleModule__is_flag_from_no_implEPNS_26BattleObjectModuleAccessorEiii");
        void set_int(app::BattleObjectModuleAccessor *,int,int,int) asm("_ZN3app8lua_bind27ArticleModule__set_int_implEPNS_26BattleObjectModuleAccessorEiii");
        u64 get_int(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind27ArticleModule__get_int_implEPNS_26BattleObjectModuleAccessorEii");
        void set_float(app::BattleObjectModuleAccessor *,int,float,int) asm("_ZN3app8lua_bind29ArticleModule__set_float_implEPNS_26BattleObjectModuleAccessorEifi");
        u64 get_float(app::BattleObjectModuleAccessor *,int,int) asm("_ZN3app8lua_bind29ArticleModule__get_float_implEPNS_26BattleObjectModuleAccessorEii");
        void set_item_action(app::BattleObjectModuleAccessor *,int,int,float) asm("_ZN3app8lua_bind35ArticleModule__set_item_action_implEPNS_26BattleObjectModuleAccessorEiif");
        u64 remove(app::BattleObjectModuleAccessor *,int,app::ArticleOperationTarget) asm("_ZN3app8lua_bind26ArticleModule__remove_implEPNS_26BattleObjectModuleAccessorEiNS_22ArticleOperationTargetE");
        u64 remove_exist(app::BattleObjectModuleAccessor *,int,app::ArticleOperationTarget) asm("_ZN3app8lua_bind32ArticleModule__remove_exist_implEPNS_26BattleObjectModuleAccessorEiNS_22ArticleOperationTargetE");
        u64 remove_exist_object_id(app::BattleObjectModuleAccessor *,unsigned int) asm("_ZN3app8lua_bind42ArticleModule__remove_exist_object_id_implEPNS_26BattleObjectModuleAccessorEj");
        bool is_exist(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind28ArticleModule__is_exist_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_num(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind27ArticleModule__get_num_implEPNS_26BattleObjectModuleAccessorEi");
        bool is_generatable(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind34ArticleModule__is_generatable_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_active_num(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind34ArticleModule__get_active_num_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_article(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind31ArticleModule__get_article_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_joint_pos(app::BattleObjectModuleAccessor *,int,phx::Hash40,app::ArticleOperationTarget) asm("_ZN3app8lua_bind33ArticleModule__get_joint_pos_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40ENS_22ArticleOperationTargetE");
        u64 get_joint_rotate(app::BattleObjectModuleAccessor *,int,phx::Hash40,app::ArticleOperationTarget) asm("_ZN3app8lua_bind36ArticleModule__get_joint_rotate_implEPNS_26BattleObjectModuleAccessorEiN3phx6Hash40ENS_22ArticleOperationTargetE");
    }
}
