// FUN_8010f984

undefined4 FUN_8010f984(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x80072ddc(param_1,0,5,3);
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 3) = 1;
    *(char *)(iVar1 + 0x5e) = (char)param_2;
    *(undefined **)(iVar1 + 0x1c) = &DAT_80118240;
    *(undefined4 *)(param_2 + 0x10) = 0x1e;
    return 0x1e;
  }
  return 0;
}

