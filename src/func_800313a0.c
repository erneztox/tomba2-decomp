
int FUN_800313a0(undefined4 param_1,int param_2,undefined2 param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  int iVar2;
  
  if ((DAT_800e7e7c < 7) || (iVar2 = FUN_8007a980(0,6,1), iVar2 == 0)) {
    iVar2 = 0;
  }
  else {
    *(undefined2 *)(iVar2 + 0x2c) = *(undefined2 *)(param_2 + 2);
    *(undefined2 *)(iVar2 + 0x2e) = *(undefined2 *)(param_2 + 6);
    uVar1 = *(undefined2 *)(param_2 + 10);
    *(undefined2 *)(iVar2 + 0x32) = param_3;
    *(undefined2 *)(iVar2 + 0x30) = uVar1;
    *(undefined2 *)(iVar2 + 0x48) = *param_4;
    *(undefined2 *)(iVar2 + 0x4a) = param_4[1];
    *(undefined2 *)(iVar2 + 0x4c) = param_4[2];
    FUN_80028e10(iVar2,param_1);
  }
  return iVar2;
}

