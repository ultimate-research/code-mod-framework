#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace WeaponRobotHominglaserLinkEventSearch {
        u64 load_from_l2c_table(app::WeaponRobotHominglaserLinkEventSearch *,lib::L2CValue const&) asm("_ZN3app8lua_bind63WeaponRobotHominglaserLinkEventSearch__load_from_l2c_table_implEPNS_37WeaponRobotHominglaserLinkEventSearchERKN3lib8L2CValueE") LINKABLE;
        u64 store_l2c_table(app::WeaponRobotHominglaserLinkEventSearch const*) asm("_ZN3app8lua_bind59WeaponRobotHominglaserLinkEventSearch__store_l2c_table_implEPKNS_37WeaponRobotHominglaserLinkEventSearchE") LINKABLE;
        u64 store_l2c_table(app::WeaponRobotHominglaserLinkEventSearch const*,lib::L2CValue const&) asm("_ZN3app8lua_bind59WeaponRobotHominglaserLinkEventSearch__store_l2c_table_implEPKNS_37WeaponRobotHominglaserLinkEventSearchERKN3lib8L2CValueE") LINKABLE;
    }
}
