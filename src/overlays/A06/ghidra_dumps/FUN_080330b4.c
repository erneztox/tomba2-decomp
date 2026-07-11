// FUN_080330b4

void FUN_080330b4(int param_1)

{
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  func_0x0010f450(param_1);
  if (*(byte *)(param_1 + 6) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x0803312c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6108))();
    return;
  }
  return;
}

