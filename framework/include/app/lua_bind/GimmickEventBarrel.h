#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventBarrel {
        u64 load_from_l2c_table(app::GimmickEventBarrel *,lib::L2CValue const&) asm("_ZN3app8lua_bind44GimmickEventBarrel__load_from_l2c_table_implEPNS_18GimmickEventBarrelERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventBarrel const*) asm("_ZN3app8lua_bind40GimmickEventBarrel__store_l2c_table_implEPKNS_18GimmickEventBarrelE") LINKABLE;
        u64 store_l2c_table(app::GimmickEventBarrel const*,lib::L2CValue const&) asm("_ZN3app8lua_bind40GimmickEventBarrel__store_l2c_table_implEPKNS_18GimmickEventBarrelERKN3lib8L2CValueE") LINKABLE;
    }
}
