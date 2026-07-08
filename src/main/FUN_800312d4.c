
int FUN_800312d4(undefined4 param_1,int param_2,undefined2 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (6 < DAT_800e7e7c) {
    iVar1 = FUN_8007a980(0,6,1);
    iVar2 = 0;
    if (iVar1 != 0) {
      if (param_2 != 0) {
        *(undefined2 *)(iVar1 + 0x2c) = *(undefined2 *)(param_2 + 2);
        *(undefined2 *)(iVar1 + 0x2e) = *(undefined2 *)(param_2 + 6);
        *(undefined2 *)(iVar1 + 0x30) = *(undefined2 *)(param_2 + 10);
      }
      *(undefined2 *)(iVar1 + 0x32) = param_3;
      FUN_80028e10(iVar1,param_1);
      iVar2 = iVar1;
    }
  }
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
  }
  return iVar2;
}

