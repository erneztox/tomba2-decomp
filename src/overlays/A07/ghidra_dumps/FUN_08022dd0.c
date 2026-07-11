// FUN_08022dd0

void FUN_08022dd0(int param_1,undefined4 param_2)

{
  if (*(byte *)(param_1 + 5) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08022e08 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef68c8))(param_1,param_2,param_2);
    return;
  }
  return;
}

