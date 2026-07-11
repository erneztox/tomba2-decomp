// FUN_08020fd8

undefined4 FUN_08020fd8(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0x800e0000;
  if (DAT_800bf873 == '\0') {
    uVar1 = 0x80110000;
    if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08021020 */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6980))();
      return uVar1;
    }
  }
  return uVar1;
}

