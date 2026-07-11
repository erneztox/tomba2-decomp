// FUN_080439cc

void FUN_080439cc(undefined1 param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  int iVar1;
  
  iVar1 = func_0x000310f4(0x507,0xffffffce);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = param_1;
    *(undefined2 *)(iVar1 + 0x2c) = param_2;
    *(undefined2 *)(iVar1 + 0x2e) = param_3;
    *(undefined2 *)(iVar1 + 0x30) = param_4;
  }
  return;
}

