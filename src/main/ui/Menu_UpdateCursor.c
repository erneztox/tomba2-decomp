/**
 * @brief Menu cursor update: reads table at 0x800A27AC, updates cursor pos
 * @note Original: func_80039034 at 0x80039034
 */
// Menu_UpdateCursor



void FUN_80039034(int param_1)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  short *psVar4;
  int iVar5;
  
  psVar4 = (short *)(&PTR_DAT_800a27ac)[DAT_800bf883 - 1];
  iVar5 = 0;
  if (DAT_800bf883 != 0) {
    do {
      sVar1 = *psVar4;
      sVar2 = psVar4[1];
      psVar4 = psVar4 + 2;
      uVar3 = FUN_80038f7c(*(undefined1 *)((short)iVar5 + -0x7ff4077c));
      FUN_8007e938(*(undefined4 *)(param_1 + 4),(int)sVar1,(int)sVar2,0,uVar3);
      iVar5 = iVar5 + 1;
    } while (iVar5 * 0x10000 >> 0x10 < (int)(uint)DAT_800bf883);
  }
  return;
}
