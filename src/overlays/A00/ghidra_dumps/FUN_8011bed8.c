// FUN_8011bed8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011bed8(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int unaff_s1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(byte *)(param_1 + 3) < 7) {
                    /* WARNING: Jumptable at 0x8011bfb4 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fef6478))();
      return;
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
    uVar3 = 0;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        func_0x8007778c(param_1);
        if ((1 < *(byte *)(param_1 + 5)) && (*(byte *)(param_1 + 5) < 4)) {
          func_0x8004d4c4(0x77,1);
          func_0x8004b0d8(param_1);
          func_0x80074590(0x11,0,0);
          return;
        }
      }
      else {
        uVar3 = 3;
        if (bVar1 != 3) goto LAB_801252a4;
        func_0x8007a624(param_1);
      }
      return;
    }
    uVar3 = 0;
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      uVar2 = _DAT_800ecf80;
      *(undefined1 *)(param_1 + 0xb) = 0x12;
      *(undefined2 *)(param_1 + 0x80) = 0x1e;
      *(undefined2 *)(param_1 + 0x82) = 0x28;
      *(undefined2 *)(param_1 + 0x84) = 0x10;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      *(undefined1 *)(param_1 + 0x46) = 0;
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x86) = 0x20;
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined2 *)(param_1 + 0x6c) = 0;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      uVar3 = 0x20;
    }
  }
LAB_801252a4:
  _DAT_00000061 = uVar3;
  _DAT_00000063 = 0x30;
  _DAT_00000065 = 0;
  func_0x8004bd64(1,2,0,*(undefined4 *)(unaff_s1 + 0xd0),0x61);
  uRam00000002 = *(undefined1 *)(unaff_s1 + 1);
  if (DAT_800bf9b5 == '\x06') {
    func_0x8004d4c4(0x23,1);
    func_0x8004b0d8(1);
    DAT_00000005 = 3;
  }
  return;
}

