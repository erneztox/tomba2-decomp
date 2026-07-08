
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006f2d0(int param_1)

{
  short *psVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte bVar7;
  int iVar8;
  undefined2 *puVar9;
  int iVar10;
  
  bVar7 = *(byte *)(param_1 + 4);
  if (bVar7 != 1) {
    if (1 < bVar7) {
      if (bVar7 == 2) {
        *(undefined1 *)(param_1 + 4) = 3;
        DAT_800bf840 = 0;
        return;
      }
      if (bVar7 != 3) {
        DAT_800bf840 = 0;
        return;
      }
      FUN_8007a624(param_1);
      DAT_800bf840 = 0;
      return;
    }
    if (bVar7 != 0) {
      DAT_800bf840 = 0;
      return;
    }
    *(undefined1 *)(param_1 + 8) = 2;
    *(undefined1 *)(param_1 + 1) = 0;
    *(undefined1 *)(param_1 + 0x2a) = 0;
    if (_DAT_800ed098 < 2) {
      *(undefined1 *)(param_1 + 4) = 3;
      DAT_800bf840 = 0;
      return;
    }
    *(undefined1 *)(param_1 + 9) = 2;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    iVar5 = _DAT_800ecf5c;
    *(undefined1 *)(param_1 + 0xb) = 0xf;
    iVar10 = 0;
    *(undefined1 *)(param_1 + 0xd) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    if (*(char *)(param_1 + 8) != '\0') {
      puVar9 = &DAT_800a4ba8;
      iVar8 = param_1;
      do {
        iVar10 = iVar10 + 1;
        iVar4 = FUN_8007aae8();
        *(int *)(iVar8 + 0xc0) = iVar4;
        *(undefined2 *)(iVar4 + 6) = 0xffff;
        **(undefined2 **)(iVar8 + 0xc0) = *puVar9;
        *(undefined2 *)(*(int *)(iVar8 + 0xc0) + 2) = puVar9[1];
        *(undefined2 *)(*(int *)(iVar8 + 0xc0) + 4) = puVar9[2];
        *(undefined2 *)(*(int *)(iVar8 + 0xc0) + 8) = 0;
        *(undefined2 *)(*(int *)(iVar8 + 0xc0) + 10) = 0;
        *(undefined2 *)(*(int *)(iVar8 + 0xc0) + 0xc) = 0;
        psVar1 = puVar9 + 3;
        puVar9 = puVar9 + 4;
        *(int *)(*(int *)(iVar8 + 0xc0) + 0x40) = iVar5 + *(int *)(*psVar1 * 4 + iVar5 + 4);
        iVar8 = iVar8 + 4;
      } while (iVar10 < (int)(uint)*(byte *)(param_1 + 8));
    }
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)(param_1 + 0x46) = 0xff;
    DAT_800bf840 = 0;
    return;
  }
  if ((DAT_1f800137 != '\0') || (DAT_800bf80d != '\0')) {
    iVar5 = *(int *)(param_1 + 0x14);
    if (iVar5 != 0) {
      if (*(byte *)(iVar5 + 4) < 2) {
        *(undefined1 *)(iVar5 + 4) = 3;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    iVar5 = *(int *)(param_1 + 0x10);
    if (iVar5 != 0) {
      if (*(byte *)(iVar5 + 4) < 2) {
        *(undefined1 *)(iVar5 + 4) = 3;
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    FUN_8006f04c();
    DAT_800bf840 = 0;
    return;
  }
  if (((DAT_800e7ea9 == '\0') || (DAT_800e7fea != '\0')) && (DAT_800e8001 == '\0')) {
    iVar5 = *(int *)(param_1 + 0x14);
    if (iVar5 != 0) {
      if (*(byte *)(iVar5 + 4) < 2) {
        *(undefined1 *)(iVar5 + 4) = 3;
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined1 *)(param_1 + 1) = 0;
    goto LAB_8006f87c;
  }
  *(undefined2 *)(param_1 + 0x2e) = _DAT_800e7eae;
  *(short *)(param_1 + 0x32) = _DAT_800e7eb2 + -300;
  *(undefined2 *)(param_1 + 0x36) = _DAT_800e7eb6;
  *(undefined1 *)(param_1 + 0x2a) = DAT_800e7eaa;
  if ((_DAT_1f80018e & 0x1030) == 0) {
    if (((int)_DAT_800e7fec & 0xc000U) == 0xc000) {
      FUN_8004766c(param_1);
      if ((_DAT_1f8001a8 & 2) == 0) {
        if (((_DAT_1f8001a8 & 4) == 0) || (iVar5 = FUN_80047b5c(param_1,0), iVar5 == 0))
        goto LAB_8006f6c8;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = _DAT_1f8001a2;
        *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0xe00;
        *(undefined1 *)(param_1 + 1) = 1;
      }
      else {
        iVar5 = FUN_80047b5c(param_1,1);
        if (iVar5 == 0) {
LAB_8006f6c8:
          *(undefined1 *)(param_1 + 1) = 0;
        }
        else {
          *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = _DAT_1f8001a2;
          *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0x200;
          *(undefined1 *)(param_1 + 1) = 2;
        }
      }
    }
  }
  else if ((_DAT_1f80018e & 0x1000) == 0) {
    if ((_DAT_1f80018e & 0x20) == 0) {
      *(undefined1 *)(param_1 + 1) = 1;
      *(short *)(*(int *)(param_1 + 0xc4) + 10) = _DAT_1f80018c + 0x800;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0xe00;
    }
    else {
      *(undefined1 *)(param_1 + 1) = 2;
      *(short *)(*(int *)(param_1 + 0xc4) + 10) = _DAT_1f80018c;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0x200;
    }
  }
  else {
    if ((_DAT_1f80018e & 0x100) == 0) {
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0xe00;
      uVar3 = 1;
    }
    else {
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0xc) = 0x200;
      uVar3 = 2;
    }
    *(undefined1 *)(param_1 + 1) = uVar3;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 10) = _DAT_1f800194;
  }
  if (*(char *)(param_1 + 1) == '\0') {
    iVar5 = *(int *)(param_1 + 0x14);
    if (iVar5 == 0) goto LAB_8006f87c;
    if (*(byte *)(iVar5 + 4) < 2) {
      *(undefined1 *)(iVar5 + 4) = 3;
    }
  }
  else {
    if (DAT_800e7fc7 == '\0') {
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0x200;
      *(short *)(*(int *)(param_1 + 0xc0) + 10) = _DAT_800e7fc0;
    }
    else {
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0xe00;
      *(short *)(*(int *)(param_1 + 0xc0) + 10) = _DAT_800e7fc0 + 0x800;
    }
    if (*(short *)(*(int *)(param_1 + 0xc4) + 0xc) == 0xe00) {
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = DAT_800a4baa;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = DAT_800a4bb2;
    }
    else {
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = DAT_800a4bb2;
      *(undefined2 *)(*(int *)(param_1 + 0xc4) + 2) = DAT_800a4baa;
    }
    FUN_8006f138(param_1);
    iVar5 = FUN_8006eff4(*(byte *)(param_1 + 1) - 1);
    if (iVar5 == 0) {
      if (*(int *)(param_1 + 0x14) == 0) {
        uVar6 = FUN_8007e038(*(byte *)(param_1 + 1) - 1,0);
        *(undefined4 *)(param_1 + 0x14) = uVar6;
        FUN_8006f02c(*(byte *)(param_1 + 1) - 1);
        goto LAB_8006f87c;
      }
      if (*(byte *)(*(int *)(param_1 + 0x14) + 4) < 2) goto LAB_8006f87c;
    }
    else {
      iVar5 = *(int *)(param_1 + 0x14);
      if (iVar5 == 0) goto LAB_8006f87c;
      if (*(byte *)(iVar5 + 4) < 2) {
        *(undefined1 *)(iVar5 + 4) = 3;
      }
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
LAB_8006f87c:
  FUN_8006f04c();
  bVar2 = true;
  if ((DAT_800e7ea9 == '\0') && (bVar2 = false, DAT_800bf840 == 0x47)) {
    bVar2 = true;
  }
  if (((((*(char *)(param_1 + 1) == '\0') && (bVar2)) && (DAT_800e7fea == '\0')) &&
      ((bVar7 = DAT_800bf840 & 0xf, (DAT_800bf840 & 0x40) != 0 &&
       (iVar5 = FUN_8006eff4(bVar7), iVar5 == 0)))) && ((DAT_800e7ee1 & 1) == 0)) {
    iVar5 = *(int *)(param_1 + 0x10);
    if (iVar5 == 0) {
      uVar6 = FUN_8007e038(bVar7,0);
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      FUN_8006f02c(bVar7);
      *(byte *)(param_1 + 0x46) = bVar7;
      DAT_800bf840 = 0;
      return;
    }
    if (*(byte *)(iVar5 + 4) < 2) {
      if (*(byte *)(param_1 + 0x46) == bVar7) {
        DAT_800bf840 = 0;
        return;
      }
      *(undefined1 *)(iVar5 + 4) = 3;
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 0x10);
    if (iVar5 == 0) {
      DAT_800bf840 = 0;
      return;
    }
    if (*(byte *)(iVar5 + 4) < 2) {
      *(undefined1 *)(iVar5 + 4) = 3;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  DAT_800bf840 = 0;
  return;
}

