// FUN_800310f4

int FUN_800310f4(undefined4 param_1,undefined2 param_2)

{
  int iVar1;
  
  if ((DAT_800e7e7c < 7) || (iVar1 = FUN_8007a980(0,6,1), iVar1 == 0)) {
    iVar1 = 0;
  }
  else {
    *(undefined2 *)(iVar1 + 0x32) = param_2;
    FUN_80028e10(iVar1,param_1);
  }
  return iVar1;
}

