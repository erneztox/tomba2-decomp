// FUN_080244bc

undefined4 FUN_080244bc(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 6) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x080244fc */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef645c))();
    return uVar1;
  }
  return 0;
}

