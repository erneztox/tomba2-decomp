// FUN_08017b28

void FUN_08017b28(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x00022f04();
  if ((iVar1 != 0) && (*(byte *)(param_1 + 2) < 0xb)) {
                    /* WARNING: Could not emulate address calculation at 0x08017b6c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 2) * 4 + -0x7fef6520))();
    return;
  }
  return;
}

