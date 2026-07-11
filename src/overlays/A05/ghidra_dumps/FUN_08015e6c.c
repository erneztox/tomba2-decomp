// FUN_08015e6c

void FUN_08015e6c(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00022f04();
  if ((iVar1 != 0) && (*(byte *)(param_1 + 2) < 0xb)) {
                    /* WARNING: Could not emulate address calculation at 0x08015eb0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 2) * 4 + -0x7fef6a38))();
    return;
  }
  return;
}

