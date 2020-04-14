#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace SearchModule {
        u64 clear_all(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28SearchModule__clear_all_implEPNS_26BattleObjectModuleAccessorE");
        u64 clear(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind24SearchModule__clear_implEPNS_26BattleObjectModuleAccessorEi");
        void set_offset(app::BattleObjectModuleAccessor *,int,phx::Vector3f const&) asm("_ZN3app8lua_bind29SearchModule__set_offset_implEPNS_26BattleObjectModuleAccessorEiRKN3phx8Vector3fE");
        u64 active_part_num(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34SearchModule__active_part_num_implEPNS_26BattleObjectModuleAccessorE");
        bool is_search(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind28SearchModule__is_search_implEPNS_26BattleObjectModuleAccessorEi");
        u64 get_size(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind27SearchModule__get_size_implEPNS_26BattleObjectModuleAccessorEi");
        void set_size(app::BattleObjectModuleAccessor *,int,float) asm("_ZN3app8lua_bind27SearchModule__set_size_implEPNS_26BattleObjectModuleAccessorEif");
        void set_target_opponent(app::BattleObjectModuleAccessor *,int,int,int,unsigned int) asm("_ZN3app8lua_bind38SearchModule__set_target_opponent_implEPNS_26BattleObjectModuleAccessorEiiij");
        void set_pos(app::BattleObjectModuleAccessor *,int,phx::Vector3f const&,phx::Vector3f const&) asm("_ZN3app8lua_bind26SearchModule__set_pos_implEPNS_26BattleObjectModuleAccessorEiRKN3phx8Vector3fES6_");
        bool is_inflict(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind29SearchModule__is_inflict_implEPNS_26BattleObjectModuleAccessorE");
        void set_check_interval(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind37SearchModule__set_check_interval_implEPNS_26BattleObjectModuleAccessorEi");
        void set_remove_log_attack(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind40SearchModule__set_remove_log_attack_implEPNS_26BattleObjectModuleAccessorEb");
        u64 remove_log_attack(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind36SearchModule__remove_log_attack_implEPNS_26BattleObjectModuleAccessorE");
        u64 sleep(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind24SearchModule__sleep_implEPNS_26BattleObjectModuleAccessorEb");
        u64 relocate(app::BattleObjectModuleAccessor *,phx::Vector2f const&) asm("_ZN3app8lua_bind27SearchModule__relocate_implEPNS_26BattleObjectModuleAccessorERKN3phx8Vector2fE");
        u64 invalid_attack_mask(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind38SearchModule__invalid_attack_mask_implEPNS_26BattleObjectModuleAccessorE");
        void set_invalid_attack_mask(app::BattleObjectModuleAccessor *,unsigned int) asm("_ZN3app8lua_bind42SearchModule__set_invalid_attack_mask_implEPNS_26BattleObjectModuleAccessorEj");
        void set_sync_situation(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind37SearchModule__set_sync_situation_implEPNS_26BattleObjectModuleAccessorEb");
        void set_sync_lr(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind30SearchModule__set_sync_lr_implEPNS_26BattleObjectModuleAccessorEb");
        u64 situation(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind28SearchModule__situation_implEPNS_26BattleObjectModuleAccessorE");
        u64 enable_safe_pos(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind34SearchModule__enable_safe_pos_implEPNS_26BattleObjectModuleAccessorE");
    }
}
