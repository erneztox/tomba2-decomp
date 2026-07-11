/**
 * @brief Calculates move position: GTE sin on entity[0x56/0x58], radius entity[0x64], updates pos
 * @note Original: func_800634A8 at 0x800634A8
 */
// Entity_CalcMovePos



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
ushort FUN_800634a8(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  FUN_800635d4(param_1,1);
  FUN_80076d68(param_1);
  if ((*(char *)(param_1 + 0x169) == '\0') && ((_DAT_800ecf54 & (_DAT_1f800172 | 0x50)) != 0)) {
    param_1->pos_y = param_1->draw_pos_x;
    param_1->pos_z = param_1->draw_pos_z;
    *(short *)(param_1 + 0x32) = param_1->draw_pos_y + *(short *)(param_1 + 100);
    uVar2 = _DAT_800ecf54;
  }
  else {
    iVar3 = FUN_80083e80((int)param_1->rot_z);
    sVar1 = *(short *)(param_1 + 100);
    iVar4 = FUN_80083e80((int)param_1->rot_y);
    iVar5 = (int)(short)(iVar3 * sVar1 >> 0xc);
    iVar3 = FUN_80083f50((int)param_1->rot_y);
    param_1->pos_z = param_1->draw_pos_z + (short)(iVar4 * iVar5 >> 0xc);
    param_1->pos_y = param_1->draw_pos_x - (short)(iVar3 * iVar5 >> 0xc);
    iVar3 = FUN_80083f50((int)param_1->rot_z);
    uVar2 = 0;
    *(short *)(param_1 + 0x32) =
         param_1->draw_pos_y + (short)(iVar3 * *(short *)(param_1 + 100) >> 0xc);
  }
  return uVar2;
}
