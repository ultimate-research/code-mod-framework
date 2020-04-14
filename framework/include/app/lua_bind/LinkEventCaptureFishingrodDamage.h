#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace LinkEventCaptureFishingrodDamage {
        u64 load_from_l2c_table(app::LinkEventCaptureFishingrodDamage *,lib::L2CValue const&) asm("_ZN3app8lua_bind58LinkEventCaptureFishingrodDamage__load_from_l2c_table_implEPNS_32LinkEventCaptureFishingrodDamageERKN3lib8L2CValueE");
        u64 store_l2c_table(app::LinkEventCaptureFishingrodDamage const*) asm("_ZN3app8lua_bind54LinkEventCaptureFishingrodDamage__store_l2c_table_implEPKNS_32LinkEventCaptureFishingrodDamageE");
        u64 store_l2c_table(app::LinkEventCaptureFishingrodDamage const*,lib::L2CValue const&) asm("_ZN3app8lua_bind54LinkEventCaptureFishingrodDamage__store_l2c_table_implEPKNS_32LinkEventCaptureFishingrodDamageERKN3lib8L2CValueE");
    }
}
