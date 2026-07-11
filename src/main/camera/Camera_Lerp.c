/**
 * @brief Camera lerp: interpolates between two camera positions
 * @note Original: func_8006CEC4 at 0x8006CEC4
 */
// Camera_Lerp



#include "tomba.h"
bool FUN_8006cec4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar1 = (uint)*(ushort *)(param_2 + 2) - (uint)*(ushort *)((int)param_1 + 2);
  sVar2 = (short)param_3;
  if ((iVar1 + 10U & 0xffff) < 0x15) {
    *(ushort *)((int)param_1 + 2) = *(ushort *)(param_2 + 2);
    iVar3 = 1;
  }
  else {
    if (param_3 != 0) {
      iVar1 = FUN_8006ce74(iVar1 * 0x10000 >> 0x10,(int)sVar2);
    }
    *param_1 = *param_1 + ((iVar1 << 0x10) >> 3);
  }
  iVar1 = (uint)*(ushort *)(param_2 + 6) - (uint)*(ushort *)((int)param_1 + 6);
  if ((iVar1 + 10U & 0xffff) < 0x15) {
    *(ushort *)((int)param_1 + 6) = *(ushort *)(param_2 + 6);
    iVar3 = iVar3 + 1;
  }
  else {
    if (param_3 != 0) {
      iVar1 = FUN_8006ce74(iVar1 * 0x10000 >> 0x10,(int)sVar2);
    }
    param_1->flags = param_1->flags + ((iVar1 << 0x10) >> 3);
  }
  iVar1 = (uint)*(ushort *)(param_2 + 10) - (uint)*(ushort *)((int)param_1 + 10);
  if ((iVar1 + 10U & 0xffff) < 0x15) {
    *(ushort *)((int)param_1 + 10) = *(ushort *)(param_2 + 10);
    iVar3 = iVar3 + 1;
  }
  else {
    if (param_3 != 0) {
      iVar1 = FUN_8006ce74(iVar1 * 0x10000 >> 0x10,(int)sVar2);
    }
    param_1->kind = param_1->kind + ((iVar1 << 0x10) >> 3);
  }
  return iVar3 == 3;
}
