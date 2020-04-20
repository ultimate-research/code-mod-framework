#pragma once

#include "../../useful/useful.h"
namespace app::lua_bind {
    namespace GimmickEventPresenter {
        u64 dispatch_event_from_fighter(app::GimmickEventPresenter *,app::GimmickEvent &) asm("_ZN3app8lua_bind55GimmickEventPresenter__dispatch_event_from_fighter_implEPNS_21GimmickEventPresenterERNS_12GimmickEventE") LINKABLE;
    }
}
