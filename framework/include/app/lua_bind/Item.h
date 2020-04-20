#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace Item {
        u64 start_inhaled(app::Item *) asm("_ZN3app8lua_bind24Item__start_inhaled_implEPNS_4ItemE") LINKABLE;
        u64 end_hooked(app::Item *) asm("_ZN3app8lua_bind21Item__end_hooked_implEPNS_4ItemE") LINKABLE;
        u64 get_battle_object_id(app::Item *) asm("_ZN3app8lua_bind31Item__get_battle_object_id_implEPNS_4ItemE") LINKABLE;
        u64 action(app::Item *,int,float) asm("_ZN3app8lua_bind17Item__action_implEPNS_4ItemEif") LINKABLE;
        u64 item_module_accessor(app::Item *) asm("_ZN3app8lua_bind31Item__item_module_accessor_implEPNS_4ItemE") LINKABLE;
        u64 send_touch_message(app::Item *,unsigned int,const Vector3f*,float) asm("_ZN3app8lua_bind29Item__send_touch_message_implEPNS_4ItemEjRKN3phx8Vector3fEf") LINKABLE;
        u64 common_param_float(app::Item *,app::ItemCommonParamFloat) asm("_ZN3app8lua_bind29Item__common_param_float_implEPNS_4ItemENS_20ItemCommonParamFloatE") LINKABLE;
        u64 common_param_int(app::Item *,app::ItemCommonParamInt) asm("_ZN3app8lua_bind27Item__common_param_int_implEPNS_4ItemENS_18ItemCommonParamIntE") LINKABLE;
        u64 specialized_param_float(app::Item *,app::ItemSpecializedParamFloat) asm("_ZN3app8lua_bind34Item__specialized_param_float_implEPNS_4ItemENS_25ItemSpecializedParamFloatE") LINKABLE;
        u64 specialized_param_int(app::Item *,app::ItemSpecializedParamInt) asm("_ZN3app8lua_bind32Item__specialized_param_int_implEPNS_4ItemENS_23ItemSpecializedParamIntE") LINKABLE;
        u64 owner_id(app::Item *) asm("_ZN3app8lua_bind19Item__owner_id_implEPNS_4ItemE") LINKABLE;
        bool is_had(app::Item *,bool) asm("_ZN3app8lua_bind17Item__is_had_implEPNS_4ItemEb") LINKABLE;
        bool is_eatable(app::Item *,unsigned int) asm("_ZN3app8lua_bind21Item__is_eatable_implEPNS_4ItemEj") LINKABLE;
        u64 throw_attack(app::Item *,float,const Vector3f*,float) asm("_ZN3app8lua_bind23Item__throw_attack_implEPNS_4ItemEfRKN3phx8Vector3fEf") LINKABLE;
        u64 fall(app::Item *,float,const Vector3f*) asm("_ZN3app8lua_bind15Item__fall_implEPNS_4ItemEfRKN3phx8Vector3fE") LINKABLE;
    }
}
