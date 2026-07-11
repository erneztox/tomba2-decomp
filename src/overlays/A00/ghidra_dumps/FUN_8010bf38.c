// FUN_8010bf38

void FUN_8010bf38(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  iVar2 = param_2;
  do {
    iVar1 = func_0x80023d48(param_1,param_2,*(undefined4 *)(iVar2 + 0xc0),0);
    iVar3 = iVar3 + 1;
    if (iVar1 != 0) {
      DAT_1f800182 = 0;
      FUN_80114f34();
      return;
    }
    iVar2 = iVar2 + 4;
  } while (iVar3 < 2);
  return;
}

