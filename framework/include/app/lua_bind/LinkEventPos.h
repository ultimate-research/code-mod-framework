#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEventPos {
        u64 load_from_l2c_table(app::LinkEventPos *,lib::L2CValue const&) asm("_ZN3app8lua_bind38LinkEventPos__load_from_l2c_table_implEPNS_12LinkEventPosERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::LinkEventPos const*) asm("_ZN3app8lua_bind34LinkEventPos__store_l2c_table_implEPKNS_12LinkEventPosE") LINKABLE;
        u64 store_l2c_table(app::LinkEventPos const*,lib::L2CValue const&) asm("_ZN3app8lua_bind34LinkEventPos__store_l2c_table_implEPKNS_12LinkEventPosERKN3lib8L2CValueE") LINKABLE;
    }
}
