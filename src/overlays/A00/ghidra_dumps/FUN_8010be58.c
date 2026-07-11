// FUN_8010be58

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8010be58(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined2 extraout_v1;
  
  iVar1 = func_0x80022f04();
  if (iVar1 == 0) {
    return 0;
  }
  iVar1 = func_0x80077768(0,(int)_DAT_1f80009c,0);
  if (iVar1 != 0) {
    uVar2 = FUN_80114e3c();
    return uVar2;
  }
  *(undefined1 *)(param_2 + 0x2b) = 2;
  func_0x8001e860(param_1,param_2,0,0);
  *(undefined2 *)(param_2 + 0x60) = 1;
  *(undefined2 *)(param_2 + 0x62) = 0;
  *(undefined2 *)(param_2 + 100) = 4;
  *(undefined2 *)(param_2 + 0x36) = extraout_v1;
  uVar2 = func_0x8009a450();
  return uVar2;
}

