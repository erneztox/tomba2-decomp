// FUN_8013089c

undefined4 FUN_8013089c(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x8007a980(1,4,0);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x801395c0;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined1 *)(iVar1 + 2) = 0xd;
    *(undefined1 *)(iVar1 + 3) = param_2;
    uVar2 = FUN_80139888();
    return uVar2;
  }
  return 0;
}

