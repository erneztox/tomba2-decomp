// FUN_8010f5e0

void FUN_8010f5e0(undefined4 param_1)

{
  undefined1 uVar1;
  uint unaff_s1;
  undefined1 *unaff_s2;
  
  uVar1 = (undefined1)unaff_s1;
  *unaff_s2 = uVar1;
  if ((byte)unaff_s2[5] == 0) {
    unaff_s2[5] = uVar1;
    unaff_s2[0x47] = uVar1;
    *(undefined2 *)(unaff_s2 + 0x60) = 0;
    *(undefined2 *)(unaff_s2 + 0x62) = 0;
    *(undefined2 *)(unaff_s2 + 100) = 0;
    unaff_s2[8] = 0xf0;
    FUN_80118830();
    return;
  }
  if ((byte)unaff_s2[5] != unaff_s1) {
    FUN_80118830();
    return;
  }
  if (DAT_800bfaf9 != '\0') {
    func_0x8004bd64();
    func_0x8007778c();
    func_0x80077b5c();
    FUN_80118830();
    return;
  }
  unaff_s2[4] = 3;
  FUN_80118830(param_1,1);
  return;
}

