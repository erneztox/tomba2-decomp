#include "overlay.h"
/**
 * @brief Engine overlay loader: switch on param, loads overlays
 * @note Original: func_8001D41C at 0x8001D41C
 */
// Engine_OverlayLoad



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8001d41c(s16 param_1,s16 param_2)

{
  if (param_1 == -1) {
    FUN_8001cf2c();
  }
  else if (param_1 == -2) {
    FUN_8001d2a8(0,_g_OverlayAddr2,_g_OverlayAddr2 + 1,0);
  }
  else if (DAT_800bfe4e == '\x01') {
    DAT_800be0e4 = 2;
  }
  else {
    switch(g_GameState) {
    case 0:
      Overlay_801464c0((int)param_1,(int)param_2);
      break;
    case 1:
      Overlay_801342c8((int)param_1,(int)param_2);
      break;
    case 2:
      Overlay_8012816c((int)param_1,(int)param_2);
      break;
    case 4:
      Overlay_8013e3d4((int)param_1,(int)param_2);
      break;
    case 5:
      Overlay_8013aa50((int)param_1,(int)param_2);
      break;
    case 6:
      Overlay_801404dc((int)param_1,(int)param_2);
      break;
    case 7:
      Overlay_80130fb8((int)param_1,(int)param_2);
      break;
    case 8:
      Overlay_8013d670((int)param_1,(int)param_2);
      break;
    case 9:
      Overlay_8010df68((int)param_1,(int)param_2);
      break;
    case 10:
      Overlay_80118d40((int)param_1,(int)param_2);
      break;
    case 0xb:
      Overlay_801178a0((int)param_1,(int)param_2);
      break;
    case 0xc:
      Overlay_80117194((int)param_1,(int)param_2);
      break;
    case 0xd:
      Overlay_80116ee0((int)param_1,(int)param_2);
      break;
    case 0xe:
      Overlay_801173c4((int)param_1,(int)param_2);
      break;
    case 0xf:
      Overlay_8011a35c((int)param_1,(int)param_2);
      break;
    case 0x10:
      Overlay_8010d248((int)param_1,(int)param_2);
      break;
    case 0x11:
      Overlay_8010c528((int)param_1,(int)param_2);
      break;
    case 0x12:
      Overlay_8010c9ac((int)param_1,(int)param_2);
      break;
    case 0x13:
      Overlay_8010d154((int)param_1,(int)param_2);
      break;
    case 0x14:
      Overlay_801173d4((int)param_1,(int)param_2);
      break;
    case 0x15:
      Overlay_801106a8((int)param_1,(int)param_2);
    }
  }
  return;
}
