#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventLadder {
        u64 load_from_l2c_table(app::GimmickEventLadder *,lib::L2CValue const&) asm("_ZN3app8lua_bind44GimmickEventLadder__load_from_l2c_table_implEPNS_18GimmickEventLadderERKN3lib8L2CValueE");
        u64 store_l2c_table(app::GimmickEventLadder const*) asm("_ZN3app8lua_bind40GimmickEventLadder__store_l2c_table_implEPKNS_18GimmickEventLadderE");
        u64 store_l2c_table(app::GimmickEventLadder const*,lib::L2CValue const&) asm("_ZN3app8lua_bind40GimmickEventLadder__store_l2c_table_implEPKNS_18GimmickEventLadderERKN3lib8L2CValueE");
    }
}
