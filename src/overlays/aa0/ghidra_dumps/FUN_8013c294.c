// FUN_8013c294

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8013c294(undefined1 *param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  ushort uVar5;
  undefined1 auStack_28 [2];
  undefined2 uStack_26;
  undefined2 uStack_22;
  undefined2 uStack_1e;
  
  bVar4 = param_1[4];
  if (bVar4 != 1) {
    if (bVar4 < 2) {
      if (bVar4 == 0) {
        FUN_80140544(param_1);
        FUN_80145654();
        return;
      }
      FUN_80145654();
      return;
    }
    if (bVar4 == 2) {
      FUN_80144b50(param_1);
      FUN_80145654();
      return;
    }
    if (bVar4 != 3) {
      FUN_80145654();
      return;
    }
    *param_1 = 2;
    if ((param_1[0x1b] & 0x40) == 0) {
      func_0x8007a624(param_1);
      return;
    }
    param_1[0x1b] = param_1[0x1b] & 0xbf;
    FUN_80145654();
    return;
  }
  bVar1 = true;
  if (*(short *)(param_1 + 0x32) < 1) {
    if (param_1[0x66] == -0x7f) {
      FUN_801452dc();
      return;
    }
    bVar1 = 0xb < DAT_800e7eaa;
  }
  if (bVar1) {
    param_1[4] = 3;
    FUN_80145654();
    return;
  }
  if (((DAT_1f800137 != '\0') && (DAT_800bf89c != '\x02')) || (DAT_800bf809 != '\0')) {
    iVar3 = FUN_8014047c(param_1);
    if (iVar3 != 0) {
      FUN_80145654();
      return;
    }
LAB_8013c3ec:
    iVar3 = func_0x800777fc(param_1);
    if (iVar3 == 0) {
      return;
    }
    func_0x800518fc(param_1);
    FUN_80145654();
    return;
  }
  if (param_1[0x2b] != '\0') {
    param_1[0x2b] = param_1[0x2b] + -1;
    if ((_DAT_1f80017c & 1) != 0) {
      FUN_80145384();
      return;
    }
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + -0x80;
    goto LAB_8013c3ec;
  }
  iVar3 = FUN_8014047c(param_1);
  if (iVar3 != 0) goto LAB_8013c670;
  bVar4 = param_1[3];
  if (bVar4 < 6) {
    if (bVar4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_8013c450:
    FUN_80143a00(param_1);
    if ((param_1[0x2a] == '\x01') && (0x31a8 < *(short *)(param_1 + 0x2e))) {
      *(undefined2 *)(param_1 + 0x2e) = 0x31a8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar4 == 0x80) {
      func_0x80145af0(param_1);
      halt_baddata();
    }
    if (bVar4 != 0x81) goto LAB_8013c450;
    FUN_801458e0(param_1);
  }
  iVar3 = func_0x800777fc(param_1);
  if (iVar3 != 0) {
    if (param_1[0x67] == '\x01') {
      func_0x8009a450();
      return;
    }
    bVar4 = DAT_8014bf5e - 1;
    uVar2 = (uint)DAT_8014bf5e;
    DAT_8014bf5e = bVar4;
    if ((int)(uVar2 << 0x18) < 0) {
      uVar5 = *(ushort *)(param_1 + 0x68) >> 8 & 0xf;
      if ((uVar5 == 1) || ((uVar5 == 2 && (0x500 < *(short *)(param_1 + 0x4e))))) {
        uStack_26 = *(undefined2 *)(param_1 + 0x2e);
        uStack_22 = *(undefined2 *)(param_1 + 0x6a);
        uStack_1e = *(undefined2 *)(param_1 + 0x36);
        func_0x8003116c(8,auStack_28,0xffffffb0);
        DAT_8014bf5e = 10;
      }
      *(undefined2 *)(param_1 + 0x68) = 0;
    }
    func_0x80076d68(param_1);
    func_0x800518fc(param_1);
    if (param_1[0x29] != '\0') {
      FUN_80145608();
      return;
    }
    param_1[0xb] = param_1[0xb] & 0x3f;
  }
LAB_8013c670:
  param_1[0x29] = 0;
  param_1[0x5f] = 0;
  param_1[0x67] = 0;
  FUN_80145654();
  return;
}

