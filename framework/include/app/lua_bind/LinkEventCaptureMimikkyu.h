#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEventCaptureMimikkyu {
        u64 load_from_l2c_table(app::LinkEventCaptureMimikkyu *,lib::L2CValue const&) asm("_ZN3app8lua_bind50LinkEventCaptureMimikkyu__load_from_l2c_table_implEPNS_24LinkEventCaptureMimikkyuERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::LinkEventCaptureMimikkyu const*) asm("_ZN3app8lua_bind46LinkEventCaptureMimikkyu__store_l2c_table_implEPKNS_24LinkEventCaptureMimikkyuE") LINKABLE;
        u64 store_l2c_table(app::LinkEventCaptureMimikkyu const*,lib::L2CValue const&) asm("_ZN3app8lua_bind46LinkEventCaptureMimikkyu__store_l2c_table_implEPKNS_24LinkEventCaptureMimikkyuERKN3lib8L2CValueE") LINKABLE;
    }
}
