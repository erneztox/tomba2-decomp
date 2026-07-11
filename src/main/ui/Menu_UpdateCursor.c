/**
 * @brief Menu cursor update: reads table at 0x800A27AC, updates cursor pos
 * @note Original: func_80039034 at 0x80039034
 */
// Menu_UpdateCursor



#include "tomba.h"
void FUN_80039034(int param_1)

{
  s16 sVar1;
  s16 sVar2;
  s32 uVar3;
  s16 *psVar4;
  int iVar5;
  
  psVar4 = (s16 *)(&PTR_DAT_800a27ac)[DAT_800bf883 - 1];
  iVar5 = 0;
  if (DAT_800bf883 != 0) {
    do {
      sVar1 = *psVar4;
      sVar2 = psVar4->flags;
      psVar4 = psVar4 + 2;
      uVar3 = FUN_80038f7c(*(u8 *)((s16)iVar5 + -0x7ff4077c));
      FUN_8007e938(*(s32 *)(param_1 + 4),(int)sVar1,(int)sVar2,0,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 * 0x10000 >> 0x10 < (int)(uint)DAT_800bf883);
  }
  return;
}
