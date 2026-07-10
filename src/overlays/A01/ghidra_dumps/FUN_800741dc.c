// FUN_800741dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800741dc(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 != 3) {
        return;
      }
      FUN_8007a624(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    if (DAT_800bf873 != '\0') {
      param_1[4] = 3;
      return;
    }
    iVar3 = FUN_80051b70(param_1,1,0x18);
    if (iVar3 != 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x80) = 0x140;
    *(undefined2 *)(param_1 + 0x82) = 0x280;
    *(undefined2 *)(param_1 + 0x84) = 0x15e;
    *(undefined2 *)(param_1 + 0x86) = 0x15e;
    *param_1 = 1;
    param_1[0x2b] = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    param_1[4] = param_1[4] + '\x01';
    uVar2 = *(undefined2 *)(&DAT_800a4cec + (uint)(byte)param_1[3] * 2);
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x56) = uVar2;
    FUN_800517f8();
    return;
  }
  FUN_8007778c(param_1);
  bVar1 = param_1[5];
  if (bVar1 == 2) {
    if ((_DAT_800e7e68 & _DAT_1f800174) != 0) {
      param_1[5] = 3;
    }
    goto LAB_80074568;
  }
  if (bVar1 < 3) {
    if (bVar1 == 0) {
LAB_80074328:
      if (param_1[0x2b] == '\x03') {
        iVar3 = FUN_8007e110((int)u____01_800a4cf8[(byte)param_1[3]],0);
        *(int *)(param_1 + 0x14) = iVar3;
        if (iVar3 != 0) {
          if (DAT_800bf8ed == '\0') {
            param_1[5] = param_1[5] + '\x01';
            FUN_80040b48(0x39);
          }
          else {
            param_1[5] = param_1[5] + '\x02';
          }
        }
        DAT_800bf809 = 1;
      }
      goto LAB_80074568;
    }
    if (bVar1 != 1) {
      param_1[0x2b] = 0;
      return;
    }
    iVar3 = FUN_80042728();
  }
  else {
    if (bVar1 == 4) {
      if (1 < *(byte *)(*(int *)(param_1 + 0x14) + 4)) {
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        *param_1 = 2;
        param_1[4] = 3;
        local_1a = *(short *)(param_1 + 0x32) -
                   (short)(((int)((uint)*(ushort *)(param_1 + 0x84) << 0x10) >> 0x10) -
                           ((int)((uint)*(ushort *)(param_1 + 0x84) << 0x10) >> 0x1f) >> 1);
        local_16 = *(undefined2 *)(param_1 + 0x36);
        FUN_80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),auStack_20,0x800,0x18);
        FUN_80074590(0xc,0,0);
        FUN_80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),auStack_20,0x800,8);
        FUN_80074590(0xc,0,0);
        FUN_80040c00(0x39);
        uVar5 = (uint)DAT_800bfa23;
        uVar4 = 1 << ((byte)param_1[3] & 0x1f);
        DAT_800bfa23 = DAT_800bfa23 | (byte)uVar4;
        if (DAT_800bf8ee == '\0') {
          FUN_80040b48(0x3a);
          param_1[0x2b] = 0;
          return;
        }
        if ((uVar5 | uVar4 & 0xff) == 0x1f) {
          FUN_80040c00(0x3a);
        }
      }
      goto LAB_80074568;
    }
    if (3 < bVar1) {
      if (bVar1 != 99) goto LAB_80074568;
      DAT_800bf809 = 0;
      *param_1 = 1;
      param_1[5] = 0;
      goto LAB_80074328;
    }
    if (*(byte *)(*(int *)(param_1 + 0x14) + 4) < 2) {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    if (_DAT_800bf874 < *(uint *)(&DAT_800a4d04 + (uint)(byte)param_1[3] * 4)) {
      *param_1 = 2;
      param_1[5] = 99;
      goto LAB_80074568;
    }
    iVar3 = FUN_8007413c(param_1);
    *(int *)(param_1 + 0x14) = iVar3;
  }
  if (iVar3 != 0) {
    param_1[5] = param_1[5] + '\x01';
  }
LAB_80074568:
  param_1[0x2b] = 0;
  return;
}

