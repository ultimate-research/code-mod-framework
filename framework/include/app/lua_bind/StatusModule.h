#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace StatusModule {
        u64 change_status_request(app::BattleObjectModuleAccessor *,int,bool) asm("_ZN3app8lua_bind40StatusModule__change_status_request_implEPNS_26BattleObjectModuleAccessorEib");
        u64 change_status_request_from_script(app::BattleObjectModuleAccessor *,int,bool) asm("_ZN3app8lua_bind52StatusModule__change_status_request_from_script_implEPNS_26BattleObjectModuleAccessorEib");
        u64 delete_status_request_from_script(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind52StatusModule__delete_status_request_from_script_implEPNS_26BattleObjectModuleAccessorE");
        u64 status_kind_que_from_script(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind46StatusModule__status_kind_que_from_script_implEPNS_26BattleObjectModuleAccessorE");
        u64 status_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30StatusModule__status_kind_implEPNS_26BattleObjectModuleAccessorE");
        u64 status_kind_next(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind35StatusModule__status_kind_next_implEPNS_26BattleObjectModuleAccessorE");
        void set_status_kind_interrupt(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind44StatusModule__set_status_kind_interrupt_implEPNS_26BattleObjectModuleAccessorEi");
        u64 status_kind_interrupt(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind40StatusModule__status_kind_interrupt_implEPNS_26BattleObjectModuleAccessorE");
        bool is_changing(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind30StatusModule__is_changing_implEPNS_26BattleObjectModuleAccessorE");
        u64 prev_status_kind(app::BattleObjectModuleAccessor *,unsigned int) asm("_ZN3app8lua_bind35StatusModule__prev_status_kind_implEPNS_26BattleObjectModuleAccessorEj");
        u64 change_status_force(app::BattleObjectModuleAccessor *,int,bool) asm("_ZN3app8lua_bind38StatusModule__change_status_force_implEPNS_26BattleObjectModuleAccessorEib");
        u64 situation_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind33StatusModule__situation_kind_implEPNS_26BattleObjectModuleAccessorE");
        u64 prev_situation_kind(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind38StatusModule__prev_situation_kind_implEPNS_26BattleObjectModuleAccessorE");
        bool is_situation_changed(app::BattleObjectModuleAccessor *) asm("_ZN3app8lua_bind39StatusModule__is_situation_changed_implEPNS_26BattleObjectModuleAccessorE");
        void set_situation_kind(app::BattleObjectModuleAccessor *,app::SituationKind,bool) asm("_ZN3app8lua_bind37StatusModule__set_situation_kind_implEPNS_26BattleObjectModuleAccessorENS_13SituationKindEb");
        void set_keep_situation_air(app::BattleObjectModuleAccessor *,bool) asm("_ZN3app8lua_bind41StatusModule__set_keep_situation_air_implEPNS_26BattleObjectModuleAccessorEb");
        void set_succeeds_bit(app::BattleObjectModuleAccessor *,int) asm("_ZN3app8lua_bind35StatusModule__set_succeeds_bit_implEPNS_26BattleObjectModuleAccessorEi");
        u64 init_settings(app::BattleObjectModuleAccessor *,app::SituationKind,int,unsigned int,app::GroundCliffCheckKind,bool,int,int,int,int) asm("_ZN3app8lua_bind32StatusModule__init_settings_implEPNS_26BattleObjectModuleAccessorENS_13SituationKindEijNS_20GroundCliffCheckKindEbiiii");
    }
}
