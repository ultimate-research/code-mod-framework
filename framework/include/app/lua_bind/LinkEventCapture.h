#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEventCapture {
        u64 load_from_l2c_table(app::LinkEventCapture *,lib::L2CValue const&) asm("_ZN3app8lua_bind42LinkEventCapture__load_from_l2c_table_implEPNS_16LinkEventCaptureERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::LinkEventCapture const*) asm("_ZN3app8lua_bind38LinkEventCapture__store_l2c_table_implEPKNS_16LinkEventCaptureE") LINKABLE;
        u64 store_l2c_table(app::LinkEventCapture const*,lib::L2CValue const&) asm("_ZN3app8lua_bind38LinkEventCapture__store_l2c_table_implEPKNS_16LinkEventCaptureERKN3lib8L2CValueE") LINKABLE;
    }
}
