/**
 * @brief Orbit position: uses GTE cos/sin on entity[0x58] angle + entity[0x64] radius for offset from parent
 * @note Original: func_80063ECC at 0x80063ECC
 */
// Entity_CalcOrbitPos



#include "tomba.h"
void FUN_80063ecc(int param_1)

{
  s16 sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = param_1->parent;
  iVar2 = FUN_80083f50((int)param_1->rot_z);
  *(s16 *)(param_1 + 0x32) =
       *(s16 *)(iVar5 + 0x30) + (s16)(iVar2 * *(s16 *)(param_1 + 100) >> 0xc);
  iVar2 = FUN_80083e80((int)param_1->rot_z);
  sVar1 = *(s16 *)(param_1 + 100);
  iVar3 = FUN_80083e80((int)param_1->rot_y);
  iVar4 = (int)(s16)(iVar2 * sVar1 >> 0xc);
  iVar2 = FUN_80083f50((int)param_1->rot_y);
  param_1->pos_y = iVar5->pos_x - (s16)(iVar2 * iVar4 >> 0xc);
  param_1->pos_z = *(s16 *)(iVar5 + 0x34) + (s16)(iVar3 * iVar4 >> 0xc);
  return;
}
