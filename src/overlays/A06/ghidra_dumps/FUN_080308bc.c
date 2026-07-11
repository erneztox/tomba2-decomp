// FUN_080308bc

void FUN_080308bc(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x080308ec */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef61d8))();
    return;
  }
  func_0x0007778c(param_1);
  func_0x00076d68(param_1);
  func_0x000518fc(param_1);
  return;
}

