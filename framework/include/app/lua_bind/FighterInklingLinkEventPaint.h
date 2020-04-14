#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace FighterInklingLinkEventPaint {
        u64 load_from_l2c_table(app::FighterInklingLinkEventPaint *,lib::L2CValue const&) asm("_ZN3app8lua_bind54FighterInklingLinkEventPaint__load_from_l2c_table_implEPNS_28FighterInklingLinkEventPaintERKN3lib8L2CValueE");
        u64 store_l2c_table(app::FighterInklingLinkEventPaint const*) asm("_ZN3app8lua_bind50FighterInklingLinkEventPaint__store_l2c_table_implEPKNS_28FighterInklingLinkEventPaintE");
        u64 store_l2c_table(app::FighterInklingLinkEventPaint const*,lib::L2CValue const&) asm("_ZN3app8lua_bind50FighterInklingLinkEventPaint__store_l2c_table_implEPKNS_28FighterInklingLinkEventPaintERKN3lib8L2CValueE");
    }
}
