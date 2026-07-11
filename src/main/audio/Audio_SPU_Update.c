/**
 * @brief Audio SPU updater: iterates 10 slots, updates ADSR/volume
 * @note Original: func_8007566C at 0x8007566C
 */
// Audio_SPU_Update



#include "tomba.h"
int FUN_8007566c(int param_1,int param_2)

{
  short *psVar1;
  int *piVar2;
  int iVar3;
  
  if (-1 < DAT_800a4f7e) {
    FUN_800963d0();
    DAT_800a4f7e = -1;
  }
  iVar3 = 10;
  psVar1 = &DAT_800be3b8;
  do {
    if (psVar1->sub_type != 0) {
      FUN_8008dd7c((int)*psVar1);
      psVar1->sub_type = 0;
    }
    iVar3 = iVar3 + 1;
    psVar1 = psVar1 + 4;
  } while (iVar3 < 0xe);
  iVar3 = (param_1 << 0x10) >> 0xf;
  piVar2 = (int *)(param_2 +
                  ((uint)*(ushort *)(iVar3 + -0x7fe7dffe) - (uint)*(ushort *)(iVar3 + -0x7fe7e000))
                  * 0x800 + -0x800);
  FUN_800753ac(param_2);
  FUN_800753d4(&DAT_800a4f7e,param_2 + *piVar2,param_2 + piVar2->flags);
  switch(DAT_800bf870) {
  case 5:
    func_0x8013ac40();
    break;
  case 10:
    func_0x80118e28();
    break;
  case 0xb:
    func_0x80117988();
    break;
  case 0xc:
    func_0x8011727c();
    break;
  case 0xd:
    func_0x80116fc8();
    break;
  case 0xe:
    func_0x801174ac();
    break;
  case 0xf:
    func_0x8011a428();
    break;
  case 0x14:
    func_0x801174b0();
    break;
  case 0x15:
    func_0x80110774();
  }
  return param_2 + piVar2->flags;
}
