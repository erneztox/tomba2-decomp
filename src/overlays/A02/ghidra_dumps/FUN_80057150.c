// FUN_80057150

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80057150(int param_1,int param_2)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = 0;
  if ((*(ushort *)(param_1 + 0x17e) & 0x40) == 0) {
LAB_80057208:
    iVar3 = 2;
  }
  else {
    if (*(char *)(param_1 + 0x46) == -0x35) {
      if ((*(ushort *)(*(int *)(param_1 + 0x38) + 6) & 0x8000) != 0) {
        FUN_80054d14(param_1,0xca,4);
        iVar3 = 2;
        goto LAB_80057210;
      }
    }
    else {
      if (*(char *)(param_1 + 0x46) != -0x36) goto LAB_80057210;
      if ((_DAT_800e7e68 & _DAT_1f800172) == 0) goto LAB_80057208;
      FUN_80054d14(param_1,0xcb,4);
      FUN_80074590(0x35,0,0);
    }
    iVar3 = 1;
  }
LAB_80057210:
  if (iVar3 == 1) {
    return 0x300;
  }
  if (iVar3 != 2) {
    return 0xe00;
  }
  if ((*(char *)(param_1 + 0x146) != '\0') || (*(char *)(param_1 + 0x78) != '\0')) {
    param_2 = 8;
  }
  if (((*(byte *)(param_1 + 0x14a) & 2) == 0) &&
     ((*(byte *)(param_1 + 0x14a) & 1) == *(byte *)(param_1 + 0x147))) {
    uVar4 = 0x60;
    if (param_2 == 8) {
      return 0xe00;
    }
    sVar1 = *(short *)(param_1 + 0x58);
    uVar5 = 0x10;
  }
  else {
    if ((*(byte *)(param_1 + 0x14a) & 8) != 0) {
      if (param_2 != 8) {
        uVar2 = FUN_800776f8(0xf00,(int)*(short *)(param_1 + 0x58),0x20);
        *(undefined2 *)(param_1 + 0x58) = uVar2;
      }
      return 0x1a00;
    }
    uVar4 = 0;
    if (param_2 == 8) {
      return 0xe00;
    }
    sVar1 = *(short *)(param_1 + 0x58);
    uVar5 = 0x40;
  }
  uVar2 = FUN_800776f8(uVar4,(int)sVar1,uVar5);
  *(undefined2 *)(param_1 + 0x58) = uVar2;
  return 0xe00;
}

