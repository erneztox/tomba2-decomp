// FUN_0801dc48

undefined4 FUN_0801dc48(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x0801dc98 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6794))();
    return uVar1;
  }
  func_0x0004190c(param_1,param_2 & 0xf0);
  return 0;
}

