// FUN_800399fc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800399fc(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  
  bVar1 = *(byte *)(param_1 + 1);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        return;
      }
    }
    else {
      if (bVar1 != 2) {
        return;
      }
      FUN_80034634(param_1);
      *(undefined1 *)(param_1 + 1) = 0;
    }
    sVar2 = FUN_8003990c(*(undefined1 *)(param_1 + 0x1f));
    iVar3 = FUN_8007e038((int)sVar2,1);
    *(int *)(param_1 + 0x28) = iVar3;
    if (iVar3 != 0) {
      *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
    }
  }
  if ((_DAT_800e7e68 & 0x2000) != 0) {
LAB_80039b30:
    *(undefined1 *)(param_1 + 9) = 0;
    FUN_80034670(param_1);
    return;
  }
  if ((_DAT_800e7e68 & 0x40) == 0) {
    if ((_DAT_800ecf54 & 0x40) == 0) {
      if ((_DAT_800e7e68 & 0x10) != 0) {
        *(undefined2 *)(param_1 + 0x18) = 0;
        iVar3 = FUN_800399c0(param_1);
        if (iVar3 == 0) goto LAB_80039b30;
        goto LAB_80039b88;
      }
      if ((_DAT_800ecf54 & 0x10) == 0) goto LAB_80039ba4;
      uVar4 = *(ushort *)(param_1 + 0x18) + 1;
      *(short *)(param_1 + 0x18) = (short)uVar4;
      if (((int)(uVar4 * 0x10000) >> 0x10 < 9) || ((uVar4 & 1) == 0)) goto LAB_80039ba4;
      iVar3 = FUN_800399c0(param_1);
    }
    else {
      uVar4 = *(ushort *)(param_1 + 0x18) + 1;
      *(short *)(param_1 + 0x18) = (short)uVar4;
      if (((int)(uVar4 * 0x10000) >> 0x10 < 9) || ((uVar4 & 1) == 0)) goto LAB_80039ba4;
      iVar3 = FUN_80039978(param_1);
    }
    if (iVar3 == 0) goto LAB_80039ba4;
LAB_80039b88:
    uVar5 = 0x15;
    *(char *)(param_1 + 1) = *(char *)(param_1 + 1) + '\x01';
  }
  else {
    *(undefined2 *)(param_1 + 0x18) = 0;
    iVar3 = FUN_80039978(param_1);
    if (iVar3 != 0) goto LAB_80039b88;
    uVar5 = 0x12;
  }
  FUN_80074590(uVar5,0,0);
LAB_80039ba4:
  *(char *)(param_1 + 0x1c) = *(char *)(param_1 + 0x1f) - *(char *)(param_1 + 0x1e);
  FUN_8007dc38(*(undefined4 *)(param_1 + 0x28));
  return;
}

