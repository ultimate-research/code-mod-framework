#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventSpring {
        u64 load_from_l2c_table(app::GimmickEventSpring *,lib::L2CValue const&) asm("_ZN3app8lua_bind44GimmickEventSpring__load_from_l2c_table_implEPNS_18GimmickEventSpringERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventSpring const*) asm("_ZN3app8lua_bind40GimmickEventSpring__store_l2c_table_implEPKNS_18GimmickEventSpringE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventSpring const*,lib::L2CValue const&) asm("_ZN3app8lua_bind40GimmickEventSpring__store_l2c_table_implEPKNS_18GimmickEventSpringERKN3lib8L2CValueE") LINKABLE;
    }
}
