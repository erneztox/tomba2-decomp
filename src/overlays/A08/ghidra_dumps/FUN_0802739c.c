// FUN_0802739c

void FUN_0802739c(int param_1,undefined4 param_2)

{
  if (*(byte *)(param_1 + 5) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x080273d4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6304))(param_1,param_2,param_2);
    return;
  }
  return;
}

