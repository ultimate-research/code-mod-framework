#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEventCaptureItem {
        u64 load_from_l2c_table(app::LinkEventCaptureItem *,lib::L2CValue const&) asm("_ZN3app8lua_bind46LinkEventCaptureItem__load_from_l2c_table_implEPNS_20LinkEventCaptureItemERKN3lib8L2CValueE");
        u64 store_l2c_table(app::LinkEventCaptureItem const*) asm("_ZN3app8lua_bind42LinkEventCaptureItem__store_l2c_table_implEPKNS_20LinkEventCaptureItemE");
        u64 store_l2c_table(app::LinkEventCaptureItem const*,lib::L2CValue const&) asm("_ZN3app8lua_bind42LinkEventCaptureItem__store_l2c_table_implEPKNS_20LinkEventCaptureItemERKN3lib8L2CValueE");
    }
}
