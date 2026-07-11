// FUN_8010b744

void FUN_8010b744(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 2;
  if (2 < *(byte *)(param_2 + 8)) {
    iVar2 = param_2 + 8;
    do {
      if (*(short *)(*(int *)(iVar2 + 0xc0) + 0x16) == 2) {
        return;
      }
      iVar1 = func_0x80022e04(param_1,param_2);
      iVar3 = iVar3 + 1;
      if (iVar1 != 0) {
        func_0x8001e860(param_1,param_2,*(undefined4 *)(iVar2 + 0xc0),0);
        func_0x80074590(0x8d,0,0);
        return;
      }
      iVar2 = iVar2 + 4;
    } while (iVar3 < (int)(uint)*(byte *)(param_2 + 8));
  }
  return;
}

