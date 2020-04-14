#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterPokemonLinkEventChange {
        u64 load_from_l2c_table(app::FighterPokemonLinkEventChange *,lib::L2CValue const&) asm("_ZN3app8lua_bind55FighterPokemonLinkEventChange__load_from_l2c_table_implEPNS_29FighterPokemonLinkEventChangeERKN3lib8L2CValueE");
        u64 store_l2c_table(app::FighterPokemonLinkEventChange const*) asm("_ZN3app8lua_bind51FighterPokemonLinkEventChange__store_l2c_table_implEPKNS_29FighterPokemonLinkEventChangeE");
        u64 store_l2c_table(app::FighterPokemonLinkEventChange const*,lib::L2CValue const&) asm("_ZN3app8lua_bind51FighterPokemonLinkEventChange__store_l2c_table_implEPKNS_29FighterPokemonLinkEventChangeERKN3lib8L2CValueE");
    }
}
