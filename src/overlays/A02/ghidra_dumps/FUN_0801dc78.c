// FUN_0801dc78

void FUN_0801dc78(int param_1)

{
  if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0801dcb0 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(&DAT_80109574 + (uint)*(byte *)(param_1 + 6) * 4))();
    return;
  }
  return;
}

