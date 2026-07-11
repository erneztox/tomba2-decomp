// FUN_80109968

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80109968(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 *unaff_s0;
  undefined1 unaff_s1;
  
  iVar1 = func_0x80072ddc(param_1,1,5,3);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 0;
    *(undefined4 *)(iVar1 + 0x1c) = 0x80112100;
    *unaff_s0 = unaff_s1;
    iVar1 = func_0x800778e4();
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = func_0x80051844();
    }
    return uVar2;
  }
  return 0;
}

