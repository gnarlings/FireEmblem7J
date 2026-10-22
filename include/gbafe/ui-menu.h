#pragma once

#include "global.h"

struct MenuDef; // layout TBD (0x24 bytes; see FE8U uimenu.h)
struct MenuProc;

struct MenuProc * StartAdjustedMenu(const struct MenuDef * def, int xSubject, int xTileLeft, int xTileRight);
// StartLockingMenu
// StartMenuExt
// StartMenu
// StartLockingMenuExt
// sub_804AC0C
// sub_804AC78
// sub_804AC90
// sub_804ACC8
// sub_804ADBC
// sub_804AE18
// sub_804AF18
// sub_804AFFC
// sub_804B08C
// sub_804B0D4
// sub_804B0D8
// sub_804B0DC
// sub_804B0E0
// sub_804B0E4
// sub_804B100
// sub_804B130
// sub_804B1B0
// sub_804B1C0
// sub_804B210
// sub_804B244
// sub_804B28C
// sub_804B29C
// sub_804B2BC
struct MenuProc * StartSemiCenteredOrphanMenu(const struct MenuDef * def, int xSubject, int xTileLeft, int xTileRight);
// sub_804B334
// sub_804B378
// sub_804B390
// sub_804B3D0
// sub_804B3F8
// sub_804B428
// sub_804B464
// sub_804B4A8
