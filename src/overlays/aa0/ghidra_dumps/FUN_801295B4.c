// FUN_801295B4

void FUN_801295ac(int param_1)

{
  undefined4 uVar1;
  
  *(undefined2 *)(param_1 + 0x60) = 0xf6d2;
  *(undefined2 *)(param_1 + 0x62) = 0xf9a2;
  *(undefined2 *)(param_1 + 0x50) = 0x780;
  *(undefined1 *)(param_1 + 0x5e) = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  uVar1 = FUN_8013a730(param_1);
  *(undefined4 *)(param_1 + 0x10) = uVar1;
  return;
}

