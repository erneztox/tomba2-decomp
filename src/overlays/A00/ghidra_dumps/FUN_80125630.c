// FUN_80125630

undefined4 FUN_80125630(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = func_0x80072ddc(param_1,0,3,0x11);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8012e478;
    uVar2 = func_0x8009a450();
    return uVar2;
  }
  return 0;
}

