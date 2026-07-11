// FUN_801122b8

void FUN_801122b8(int param_1)

{
  undefined2 uVar1;
  undefined1 *unaff_s2;
  
  *(undefined2 *)(unaff_s2 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
  *(undefined2 *)(unaff_s2 + 0x32) = *(undefined2 *)(param_1 + 0x32);
  uVar1 = *(undefined2 *)(param_1 + 0x36);
  unaff_s2[0x5e] = 1;
  unaff_s2[5] = 0;
  unaff_s2[6] = 0;
  *unaff_s2 = 1;
  *(undefined2 *)(unaff_s2 + 0x36) = uVar1;
  (*(code *)0x0)();
  return;
}

