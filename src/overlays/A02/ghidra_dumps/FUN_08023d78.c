// FUN_08023d78

undefined4 FUN_08023d78(int param_1)

{
  undefined4 uVar1;
  
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00077e7c();
  if (*(byte *)(param_1 + 6) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08023db8 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef68fc))();
    return uVar1;
  }
  func_0x00041098(param_1);
  func_0x0004190c(param_1);
  return 0;
}

