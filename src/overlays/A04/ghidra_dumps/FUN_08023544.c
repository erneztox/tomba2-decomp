// FUN_08023544

void FUN_08023544(int param_1,undefined4 param_2)

{
  if (*(byte *)(param_1 + 5) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08023578 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef61a0))(param_1,param_2,0x800e8008);
    return;
  }
  return;
}

