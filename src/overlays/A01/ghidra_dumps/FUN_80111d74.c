// FUN_80111d74

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80111d74(void)

{
  undefined4 uVar1;
  int iVar2;
  int unaff_s0;
  undefined1 *unaff_s1;
  undefined1 uVar3;
  uint unaff_s2;
  
  uVar3 = (undefined1)unaff_s2;
  if (*(byte *)(unaff_s0 + 6) == 0) {
    *(undefined1 *)(unaff_s0 + 0x7a) = 0;
    func_0x80040d68();
    *(undefined1 *)(unaff_s0 + 0x70) = 2;
    *(undefined1 *)(unaff_s0 + 6) = uVar3;
  }
  else if (*(byte *)(unaff_s0 + 6) == unaff_s2) {
    *(undefined1 *)(unaff_s0 + 5) = 0;
    func_0x8004190c();
    iVar2 = 0;
    if (*(char *)(unaff_s0 + 1) != '\0') {
      iVar2 = func_0x800518fc();
    }
    *(undefined1 *)(unaff_s0 + 0x2b) = 0;
    if (iVar2 != 0) {
      if (unaff_s0 != 0) {
        FUN_80123f10();
        return;
      }
      unaff_s1[4] = uVar3;
      uVar1 = _DAT_800ecf80;
      unaff_s1[0xd] = 0;
      unaff_s1[0xb] = 0x10;
      *(undefined2 *)(unaff_s1 + 0x5a) = 0;
      unaff_s1[8] = 0;
      *(undefined2 *)(unaff_s1 + 0x5c) = 0;
      unaff_s1[0x5e] = uVar3;
      unaff_s1[3] = 2;
      *(undefined4 *)(unaff_s1 + 0x3c) = uVar1;
      func_0x80077b38();
      unaff_s1[0x47] = 0;
      func_0x8004766c();
      *(undefined2 *)(unaff_s1 + 0x80) = 0x1e;
      *(undefined2 *)(unaff_s1 + 0x82) = 0x3c;
      *(undefined2 *)(unaff_s1 + 0x84) = 0x3c;
      *unaff_s1 = uVar3;
      *(undefined2 *)(unaff_s1 + 0x86) = 0x5a;
      *(undefined2 *)(unaff_s1 + 0x4a) = 0;
      unaff_s1[5] = uVar3;
      unaff_s1[6] = 2;
      *(undefined2 *)(unaff_s1 + 0x60) = 0;
      *(undefined2 *)(unaff_s1 + 100) = *(undefined2 *)(unaff_s1 + 0x32);
      FUN_80123f10();
      return;
    }
    if (unaff_s0 == 2) {
      if ((1 < (byte)unaff_s1[5]) && ((byte)unaff_s1[5] < 4)) {
        DAT_800bf9d4 = 0;
        DAT_800bf936 = DAT_800bf936 | 4;
        func_0x8004d4c4(0x41,1);
        func_0x8004b0d8();
        unaff_s1[4] = 3;
      }
      func_0x8007778c();
      FUN_80123f10();
      return;
    }
    if (unaff_s0 != 3) {
      FUN_80123f10();
      return;
    }
    func_0x8007a624();
    return;
  }
  return;
}

