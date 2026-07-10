// FUN_8003116c

int FUN_8003116c(undefined4 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  
  if ((DAT_800e7e7c < 7) || (iVar1 = FUN_8007a980(0,6,1), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    if (param_2 != 0) {
      *(undefined2 *)(iVar1 + 0x2c) = *(undefined2 *)(param_2 + 2);
      *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_2 + 6);
      *(undefined2 *)(iVar1 + 0x30) = *(undefined2 *)(param_2 + 10);
    }
    *(undefined2 *)(iVar1 + 0x32) = param_3;
    FUN_80028e10(iVar1,param_1);
  }
  return iVar1;
}

