// FUN_08032d4c

void FUN_08032d4c(int param_1,undefined4 param_2)

{
  if (*(byte *)(param_1 + 5) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08032d84 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6230))(param_1,param_2,param_2);
    return;
  }
  return;
}

