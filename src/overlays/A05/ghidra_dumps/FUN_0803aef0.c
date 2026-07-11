// FUN_0803aef0

/* WARNING: Removing unreachable block (ram,0x0803b020) */

undefined4 FUN_0803aef0(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  
  uVar2 = (param_2 + -4) * 0x10000 >> 0x10;
  if (0x16 < uVar2) {
    return 0;
  }
                    /* WARNING: Could not emulate address calculation at 0x0803af3c */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(uVar2 * 4 + -0x7fef600c))();
  return uVar1;
}

