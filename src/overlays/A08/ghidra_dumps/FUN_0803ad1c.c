// FUN_0803ad1c

void FUN_0803ad1c(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00135158();
  if ((iVar1 != -1) && (*(byte *)(param_1 + 6) < 5)) {
                    /* WARNING: Could not emulate address calculation at 0x0803ad5c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef5d88))();
    return;
  }
  return;
}

