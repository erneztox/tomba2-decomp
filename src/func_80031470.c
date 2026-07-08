
int FUN_80031470(undefined4 param_1,int param_2,short param_3,undefined2 *param_4)

{
  undefined2 uVar1;
  undefined1 uVar2;
  int iVar3;
  
  if ((DAT_800e7e7c < 7) || (iVar3 = FUN_8007a980(0,6,1), iVar3 == 0)) {
    iVar3 = 0;
  }
  else {
    *(undefined2 *)(iVar3 + 0x2c) = *(undefined2 *)(param_2 + 2);
    *(undefined2 *)(iVar3 + 0x2e) = *(undefined2 *)(param_2 + 6);
    uVar1 = *(undefined2 *)(param_2 + 10);
    *(undefined2 *)(iVar3 + 0x32) = 0xffb0;
    *(undefined2 *)(iVar3 + 0x48) = 0;
    *(undefined2 *)(iVar3 + 0x30) = uVar1;
    *(undefined2 *)(iVar3 + 0x4a) = *param_4;
    uVar1 = param_4[1];
    *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
    *(undefined2 *)(iVar3 + 0x4c) = uVar1;
    FUN_80028e10(iVar3,param_1);
    uVar2 = 0x18;
    if (param_3 == 0) {
      uVar2 = 0x10;
    }
    *(undefined1 *)(iVar3 + 6) = uVar2;
  }
  return iVar3;
}

