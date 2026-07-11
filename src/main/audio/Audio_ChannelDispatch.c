/**
 * @brief Audio channel dispatch: looks up struct, branches on flag to FUN_80093ebc or FUN_800939a0
 * @note Original: func_80090010 at 0x80090010
 */
// Audio_ChannelDispatch



#include "tomba.h"
void FUN_80090010(ushort param_1,int param_2,undefined1 param_3,char param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(&DAT_80104c30 + ((int)((uint)param_1 << 0x10) >> 0xe)) + (short)param_2 * 0xb0;
  iVar2 = iVar1 + (uint)*(byte *)(iVar1 + 0x17);
  if (param_4 == '\0') {
    FUN_80093ebc((int)(short)(param_1 | (ushort)(param_2 << 8)),(int)*(char *)(iVar1 + 0x26),
                 *(undefined1 *)(iVar2 + 0x37),param_3);
  }
  else if (((int)iVar1->bounds_min_x >> (*(byte *)(iVar1 + 0x17) & 0x1f) & 1U) == 0) {
    FUN_800939a0((int)(short)(param_1 | (ushort)(param_2 << 8)),(int)*(char *)(iVar1 + 0x26),
                 *(undefined1 *)(iVar2 + 0x37),param_3,param_4,*(undefined1 *)(iVar2 + 0x27));
  }
  return;
}
