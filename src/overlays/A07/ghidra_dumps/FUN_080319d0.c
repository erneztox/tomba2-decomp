// FUN_080319d0

undefined4 FUN_080319d0(int param_1)

{
  undefined4 uVar1;
  
  DAT_800bfa2a = DAT_800bfb2a + DAT_800bfa2a + '\x01';
  func_0x0004d650(0x76,DAT_800bfb2a);
  uVar1 = 2;
  if (0x1d < DAT_800bfa2a) {
    *(undefined1 *)(param_1 + 0x5e) = 4;
    uVar1 = 3;
  }
  return uVar1;
}

