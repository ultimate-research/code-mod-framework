#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEventYoshiTamagoDamageEffect {
        u64 load_from_l2c_table(app::LinkEventYoshiTamagoDamageEffect *,lib::L2CValue const&) asm("_ZN3app8lua_bind58LinkEventYoshiTamagoDamageEffect__load_from_l2c_table_implEPNS_32LinkEventYoshiTamagoDamageEffectERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::LinkEventYoshiTamagoDamageEffect const*) asm("_ZN3app8lua_bind54LinkEventYoshiTamagoDamageEffect__store_l2c_table_implEPKNS_32LinkEventYoshiTamagoDamageEffectE") LINKABLE;
        u64 store_l2c_table(app::LinkEventYoshiTamagoDamageEffect const*,lib::L2CValue const&) asm("_ZN3app8lua_bind54LinkEventYoshiTamagoDamageEffect__store_l2c_table_implEPKNS_32LinkEventYoshiTamagoDamageEffectERKN3lib8L2CValueE") LINKABLE;
    }
}
