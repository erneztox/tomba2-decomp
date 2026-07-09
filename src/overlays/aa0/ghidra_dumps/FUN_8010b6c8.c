// FUN_8010b6c8

void FUN_8010b6c8(undefined4 param_1,int param_2)

{
  int iVar1;
  
  *(undefined1 *)(param_2 + 0x29) = 0;
  iVar1 = FUN_8010f390(param_1,param_2,*(undefined4 *)(param_2 + 0xc4),1);
  if (((iVar1 != 0) && (iVar1 == 2)) ||
     ((iVar1 = FUN_8010f390(param_1,param_2,*(undefined4 *)(param_2 + 0xc0),0), iVar1 != 0 &&
      (iVar1 == 2)))) {
    *(undefined1 *)(param_2 + 0x29) = 1;
  }
  return;
}

