// FUN_080350ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080350ac(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = _DAT_800bf864;
  if (DAT_800bf816 == '\0') {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x080350f8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6034))(param_1,uVar1);
    return;
  }
  return;
}

