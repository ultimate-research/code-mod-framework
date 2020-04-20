#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEvent {
        u64 load_from_l2c_table(app::LinkEvent *,lib::L2CValue const&) asm("_ZN3app8lua_bind35LinkEvent__load_from_l2c_table_implEPNS_9LinkEventERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::LinkEvent const*) asm("_ZN3app8lua_bind31LinkEvent__store_l2c_table_implEPKNS_9LinkEventE") LINKABLE;
        u64 store_l2c_table(app::LinkEvent const*,lib::L2CValue const&) asm("_ZN3app8lua_bind31LinkEvent__store_l2c_table_implEPKNS_9LinkEventERKN3lib8L2CValueE") LINKABLE;
    }
}
