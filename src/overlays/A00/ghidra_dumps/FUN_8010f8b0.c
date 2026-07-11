// FUN_8010f8b0

undefined4 FUN_8010f8b0(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x80072ddc(param_1,0,5,3);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 2;
    *(undefined2 *)(iVar1 + 0x60) = param_2;
    *(undefined **)(iVar1 + 0x1c) = &DAT_80118240;
    uVar2 = FUN_80118890();
    return uVar2;
  }
  return 0;
}

