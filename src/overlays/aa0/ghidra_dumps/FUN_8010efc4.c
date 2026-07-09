// FUN_8010efc4

undefined4 FUN_8010efc4(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_s0;
  
  iVar1 = func_0x8007a980(param_1,5,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80117658;
    *(int *)(iVar1 + 0x10) = unaff_s0 + 0x60;
    *(undefined1 *)(iVar1 + 2) = 2;
    *(undefined1 *)(iVar1 + 3) = 1;
    uVar2 = FUN_80117f9c();
    return uVar2;
  }
  return 0;
}

