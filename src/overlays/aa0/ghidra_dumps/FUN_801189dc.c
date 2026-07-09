// FUN_801189dc

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801189dc(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        FUN_80121b30();
        return;
      }
      iVar2 = func_0x800519e0(param_1,0x12,_DAT_800ecfcc,0x8014c02c);
      if (iVar2 == 0) {
        *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfd0;
        func_0x80077c40(param_1,&DAT_8014e4ec,0);
        *(undefined2 *)(param_1 + 0x80) = 0x8c;
        *(undefined2 *)(param_1 + 0x82) = 0x118;
        *(undefined2 *)(param_1 + 0x84) = 0x80;
        *(undefined2 *)(param_1 + 0x86) = 0x100;
        *(undefined1 *)(param_1 + 0xb) = 0;
        *(undefined1 *)(param_1 + 0x2b) = 0;
        *(undefined2 *)(param_1 + 0x44) = 0x180;
        *(undefined1 *)(param_1 + 0x47) = 0;
        *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
        FUN_80121b30();
        return;
      }
    }
    else if (bVar1 != 2) {
      if (bVar1 != 3) {
        FUN_80121b30();
        return;
      }
      func_0x8007a624(param_1);
    }
    return;
  }
  bVar1 = *(byte *)(param_1 + 3);
  if (bVar1 == 0x5f) {
    FUN_801220fc(param_1);
    FUN_80121b18();
    return;
  }
  if (bVar1 < 0x60) {
    if (bVar1 == 1) {
      FUN_80122d58(param_1);
      FUN_80121b18();
      return;
    }
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        FUN_80121b18();
        return;
      }
      FUN_801225bc(param_1);
      FUN_80121b18();
      return;
    }
  }
  else {
    if (bVar1 == 0x61) {
      FUN_80121cf8(param_1);
      FUN_80121b18();
      return;
    }
    if (bVar1 < 0x61) {
      FUN_80121b44(param_1);
      FUN_80121b18();
      return;
    }
    if (bVar1 == 0x62) {
      FUN_80122ca4(param_1);
      FUN_80121b18();
      return;
    }
    if (bVar1 != 99) {
      FUN_80121b18();
      return;
    }
    func_0x8018bf08(param_1);
  }
  FUN_80122bf4(param_1);
  *(undefined1 *)(param_1 + 0x2b) = 0;
  FUN_80121b30();
  return;
}

