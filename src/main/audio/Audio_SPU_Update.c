/**
 * @brief Audio SPU updater: iterates 10 slots, updates ADSR/volume
 * @note Original: func_8007566C at 0x8007566C
 */
// Audio_SPU_Update



#include "tomba.h"
#include "overlay.h"
int FUN_8007566c(int param_1,int param_2)

{
  s16 *psVar1;
  int *piVar2;
  int iVar3;
  
  if (-1 < DAT_800a4f7e) {
    FUN_800963d0();
    DAT_800a4f7e = -1;
  }
  iVar3 = 10;
  psVar1 = &DAT_800be3b8;
  do {
    if (psVar1->flags != 0) {
      FUN_8008dd7c((int)*psVar1);
      psVar1->flags = 0;
    }
    iVar3 = iVar3 + 1;
    psVar1 = psVar1 + 4;
  } while (iVar3 < 0xe);
  iVar3 = (param_1 << 0x10) >> 0xf;
  piVar2 = (int *)(param_2 +
                  ((uint)*(u16 *)(iVar3 + -0x7fe7dffe) - (uint)*(u16 *)(iVar3 + -0x7fe7e000))
                  * 0x800 + -0x800);
  FUN_800753ac(param_2);
  FUN_800753d4(&DAT_800a4f7e,param_2 + *piVar2,param_2 + piVar2->flags);
  switch(g_GameState) {
  case 5:
    Overlay_8013ac40();
    break;
  case 10:
    Overlay_80118e28();
    break;
  case 0xb:
    Overlay_80117988();
    break;
  case 0xc:
    Overlay_8011727c();
    break;
  case 0xd:
    Overlay_80116fc8();
    break;
  case 0xe:
    Overlay_801174ac();
    break;
  case 0xf:
    Overlay_8011a428();
    break;
  case 0x14:
    Overlay_801174b0();
    break;
  case 0x15:
    Overlay_80110774();
  }
  return param_2 + piVar2->flags;
}
