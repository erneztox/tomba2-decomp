/**
 * @brief Entity draw check variant 2: similar iteration, different flag
 * @note Original: func_80051464 at 0x80051464
 */
// Entity_DrawCheck2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80051464(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  if (*(char *)(param_1 + 9) != '\0') {
    do {
      if ((int)(uint)*(byte *)(param_1 + 8) <= iVar4) {
        return;
      }
      iVar3 = *(int *)(param_1 + iVar4 * 4 + 0xc0);
      _DAT_1f800000 = 0x1000;
      _DAT_1f800004 = 0;
      _DAT_1f800008 = 0x1000;
      _DAT_1f80000c = 0;
      _DAT_1f800010 = 0x1000;
      _DAT_1f800014 = 0;
      _DAT_1f800018 = 0;
      _DAT_1f80001c = 0;
      sVar1 = *(short *)(iVar3 + 6);
      FUN_80084d10((int)*(short *)(iVar3 + 8),0x1f800000);
      FUN_80084eb0((int)*(short *)(iVar3 + 10),0x1f800000);
      FUN_80085050((int)*(short *)(iVar3 + 0xc),0x1f800000);
      if (sVar1 == -1) {
        FUN_80084110(param_1 + 0x98,0x1f800000,iVar3 + 0x18);
        FUN_80084220(iVar3,iVar3 + 0x2c);
        *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + *(int *)(param_1 + 0xac);
        *(int *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + *(int *)(param_1 + 0xb0);
        iVar2 = *(int *)(iVar3 + 0x34) + *(int *)(param_1 + 0xb4);
      }
      else {
        iVar2 = param_1 + sVar1 * 4;
        FUN_80084110(*(int *)(iVar2 + 0xc0) + 0x18,0x1f800000,iVar3 + 0x18);
        FUN_80084220(iVar3,iVar3 + 0x2c);
        *(int *)(iVar3 + 0x2c) = *(int *)(iVar3 + 0x2c) + *(int *)(*(int *)(iVar2 + 0xc0) + 0x2c);
        *(int *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + *(int *)(*(int *)(iVar2 + 0xc0) + 0x30);
        iVar2 = *(int *)(iVar3 + 0x34) + *(int *)(*(int *)(iVar2 + 0xc0) + 0x34);
      }
      *(int *)(iVar3 + 0x34) = iVar2;
      iVar4 = iVar4 + 1;
    } while (iVar4 < (int)(uint)*(byte *)(param_1 + 9));
  }
  return;
}
