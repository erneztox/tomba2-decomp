/**
 * @brief Audio channel poll: iterates DAT_80105cf8 channels, updates state
 * @note Original: func_80095C40 at 0x80095C40
 */
// Audio_PollChannel



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
u8 FUN_80095c40(int param_1,int param_2)

{
  int iVar1;
  u8 bVar2;
  u8 bVar3;
  u8 bVar4;
  
  bVar4 = 0;
  bVar2 = 0;
  if ('\0' < DAT_80105cf8) {
    iVar1 = 0;
    bVar3 = bVar4;
    do {
      iVar1 = (DAT_80105cff * 0x10 + (iVar1 >> 0x18)) * 0x20 + _DAT_80105ce8;
      bVar4 = bVar3;
      if (((int)(uint)iVar1->flags <= (int)DAT_80105cfa) &&
         ((int)DAT_80105cfa <= (int)(uint)iVar1->flags)) {
        bVar4 = bVar3 + 1;
        *(u8 *)(param_2 + (uint)bVar3) = iVar1->flags;
        *(u8 *)(param_1 + (uint)bVar3) = bVar2;
      }
      bVar2 = bVar2 + 1;
      iVar1 = (uint)bVar2 << 0x18;
      bVar3 = bVar4;
    } while ((char)bVar2 < DAT_80105cf8);
  }
  return bVar4;
}
