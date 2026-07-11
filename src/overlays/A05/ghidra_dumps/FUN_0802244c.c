// FUN_0802244c

void FUN_0802244c(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0011c1d4(param_1,2);
  if ((iVar1 == 0) && (*(byte *)(param_1 + 6) < 5)) {
                    /* WARNING: Could not emulate address calculation at 0x08022494 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef65e0))();
    return;
  }
  return;
}

