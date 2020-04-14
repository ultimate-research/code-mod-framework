#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEventCaptureDriver {
        u64 load_from_l2c_table(app::LinkEventCaptureDriver *,lib::L2CValue const&) asm("_ZN3app8lua_bind48LinkEventCaptureDriver__load_from_l2c_table_implEPNS_22LinkEventCaptureDriverERKN3lib8L2CValueE");
        u64 store_l2c_table(app::LinkEventCaptureDriver const*) asm("_ZN3app8lua_bind44LinkEventCaptureDriver__store_l2c_table_implEPKNS_22LinkEventCaptureDriverE");
        u64 store_l2c_table(app::LinkEventCaptureDriver const*,lib::L2CValue const&) asm("_ZN3app8lua_bind44LinkEventCaptureDriver__store_l2c_table_implEPKNS_22LinkEventCaptureDriverERKN3lib8L2CValueE");
    }
}
