// FUN_80108474

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80108474(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined1 *unaff_s0;
  undefined1 unaff_s5;
  int unaff_s6;
  undefined1 auStack_20 [16];
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    iVar4 = func_0x80026ad0(param_1);
    if (iVar4 != 0) {
      FUN_80110d88(param_1,*(undefined1 *)(param_1 + 3));
    }
    if ((DAT_800bf873 == '\0') && (DAT_800bf816 == '\0')) {
      unaff_s0 = &DAT_80130000;
      _DAT_80135314 = _DAT_80135314 + -1;
      if (_DAT_80135314 < 0) {
        func_0x8003116c(0x200,auStack_20,0);
        iVar4 = func_0x8009a450();
        _DAT_80135314 = (iVar4 >> 0xc) + 1;
      }
    }
    if (DAT_800bf816 == '\0') {
LAB_80108650:
      FUN_801112c0(1);
      func_0x80026a68(param_1);
      goto LAB_8011160c;
    }
    uVar3 = (uint)DAT_800bf817;
    if (uVar3 != 0) {
      if (uVar3 == 1) {
        iVar4 = 0x29000000;
        if (0x2900 < _DAT_800e7eb6) {
          _DAT_800e7eb4 = 0x29000000;
          goto LAB_801115e0;
        }
      }
      else if ((uVar3 == 4) && (0x3f09 < _DAT_800e7eb6)) {
        _DAT_800e7eb4 = 0x3f090000;
        _DAT_1f800164 = 0x3f09;
      }
      goto LAB_80108650;
    }
    iVar4 = 0x28e60000;
    if (_DAT_800e7eb6 < 0x28e7) goto LAB_80108650;
    _DAT_800e7eb4 = 0x28e60000;
LAB_801115e0:
    if (uVar3 - 1 != iVar4) {
      if (99 < (int)(uVar3 - 1)) {
        func_0x80040cdc(unaff_s0,0x8013995c,0x80136054);
        unaff_s0[0x70] = 1;
        goto LAB_8011a608;
      }
      goto LAB_8011160c;
    }
    iVar4 = -0x7fec9f94;
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined1 *)(param_1 + 4) = 1;
        FUN_80110d88(param_1,0);
        FUN_801112c0(0);
        func_0x80132f5c();
        func_0x8004d8d8(3,0);
        if (DAT_800bf816 == '\0') {
          return;
        }
        if (DAT_800bf817 != 2) {
          return;
        }
        *(undefined1 *)(param_1 + 3) = 3;
        FUN_80110d88(param_1,3);
        *(undefined1 *)(param_1 + 5) = 3;
      }
    }
    else {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 == 3) {
        func_0x8007add0(param_1);
        return;
      }
    }
LAB_8011160c:
    iVar4 = -0x7fec9fc4;
  }
  *(undefined4 *)(iVar4 + 0x1c) = 0x80112100;
  *(char *)(iVar4 + 3) = (char)param_1;
  *(byte *)(iVar4 + 0x28) = *(byte *)(iVar4 + 0x28) | 0x80;
  *unaff_s0 = 2;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0x30700000;
  *(undefined4 *)(unaff_s0 + 0x30) = 0xef520000;
  *(undefined4 *)(unaff_s0 + 0x34) = 0x3a340000;
LAB_8011a608:
  unaff_s0[0x2a] = 0xf;
  *(undefined2 *)(unaff_s0 + 0x56) = 0xc00;
  uVar2 = FUN_8012b654();
  *(undefined4 *)(unaff_s0 + 0x14) = uVar2;
  func_0x80041718(unaff_s0,unaff_s0[0x7b],0);
  *(undefined1 *)(unaff_s6 + 0x5e) = unaff_s5;
  return;
}

