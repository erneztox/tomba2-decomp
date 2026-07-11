/**
 * @brief Entity draw main variant 2: different render path
 * @note Original: func_8002C920 at 0x8002C920
 */
// Entity_DrawMain2



void FUN_8002c920(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  short sVar4;
  short sVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    iVar6 = 1;
    if (bVar1 != 0) {
      return;
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(param_1 + 0x2c);
    *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(param_1 + 0x2e);
    sVar4 = 0x834;
    *(short *)(param_1 + 0x5c) = *(short *)(param_1 + 0x30) + 3000;
    do {
      sVar5 = 16000 - sVar4;
      iVar3 = 0;
      if (6 < DAT_800e7e7c) {
        iVar3 = FUN_8007a980(0,6,1);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          *(undefined2 *)(iVar3 + 0x32) = 0;
          FUN_80028e10(iVar3,0x1a);
        }
      }
      bVar1 = DAT_800e7e7c;
      *(undefined2 *)(iVar3 + 0x2c) = 100;
      *(short *)(iVar3 + 0x30) = sVar5;
      iVar3 = 0;
      if (6 < bVar1) {
        iVar3 = FUN_8007a980(0,6,1);
        if (iVar3 == 0) {
          iVar3 = 0;
        }
        else {
          *(undefined2 *)(iVar3 + 0x32) = 0;
          FUN_80028e10(iVar3,0x1a);
        }
      }
      sVar4 = sVar4 + 0x834;
      iVar6 = iVar6 + 1;
      *(undefined2 *)(iVar3 + 0x2c) = 0x76c;
      *(short *)(iVar3 + 0x30) = sVar5;
    } while (iVar6 < 6);
  }
  if (2 < DAT_1f800236) {
    uVar2 = *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = uVar2 + 1;
    if ((uVar2 & 7) != 0) {
      return;
    }
    iVar6 = 0;
    if (6 < DAT_800e7e7c) {
      iVar6 = FUN_8007a980(0,6,1);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        *(undefined2 *)(iVar6 + 0x32) = 0;
        FUN_80028e10(iVar6,0x1a);
      }
    }
    *(undefined2 *)(iVar6 + 0x2c) = 100;
    bVar1 = DAT_800e7e7c;
    *(undefined2 *)(iVar6 + 0x30) = 16000;
    iVar6 = 0;
    if (6 < bVar1) {
      iVar6 = FUN_8007a980(0,6,1);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        *(undefined2 *)(iVar6 + 0x32) = 0;
        FUN_80028e10(iVar6,0x1a);
      }
    }
    *(undefined2 *)(iVar6 + 0x2c) = 0x76c;
    *(undefined2 *)(iVar6 + 0x30) = 16000;
    return;
  }
  if (DAT_1f800236 == 1) {
    uVar2 = *(int *)(param_1 + 0x50) + 1U & 0x3f;
  }
  else {
    if (DAT_1f800236 != 2) goto LAB_8002cad0;
    uVar2 = (*(int *)(param_1 + 0x50) + 4U & 0x3f) + 0x80;
  }
  *(uint *)(param_1 + 0x50) = uVar2;
LAB_8002cad0:
  *(undefined1 *)(param_1 + 1) = 1;
  if (*(char *)(param_1 + 5) == '\0') {
    *(short *)(param_1 + 0x5c) =
         *(short *)(param_1 + 0x5c) +
         (short)((uint)((int)*(short *)(param_1 + 0x30) - (*(short *)(param_1 + 0x5c) + 300)) >> 8);
    uVar2 = *(uint *)(param_1 + 0x54);
    *(uint *)(param_1 + 0x54) = uVar2 + 1;
    if ((uVar2 & 0x1f) == 0) {
      iVar6 = 0;
      if (6 < DAT_800e7e7c) {
        iVar6 = FUN_8007a980(0,6,1);
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          *(undefined2 *)(iVar6 + 0x32) = 0;
          FUN_80028e10(iVar6,0x1a);
        }
      }
      *(undefined2 *)(iVar6 + 0x2c) = 100;
      bVar1 = DAT_800e7e7c;
      *(undefined2 *)(iVar6 + 0x30) = 16000;
      iVar6 = 0;
      if (6 < bVar1) {
        iVar6 = FUN_8007a980(0,6,1);
        if (iVar6 == 0) {
          iVar6 = 0;
        }
        else {
          *(undefined2 *)(iVar6 + 0x32) = 0;
          FUN_80028e10(iVar6,0x1a);
        }
      }
      *(undefined2 *)(iVar6 + 0x2c) = 0x76c;
      *(undefined2 *)(iVar6 + 0x30) = 16000;
    }
    if (DAT_1f80019b != '\0') {
      *(undefined1 *)(param_1 + 5) = 1;
    }
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(short *)(param_1 + 0x5c) = *(short *)(param_1 + 0x5c) + -0x42;
  }
  return;
}
