// FUN_800235a0

undefined4 FUN_800235a0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_8001f40c(param_1,param_2,1);
  if (iVar1 < 0) {
    uVar2 = 0;
  }
  else {
    if (*(char *)(param_1 + 0x164) == '\f') {
      uVar2 = 4;
    }
    else {
      uVar2 = 1;
    }
    FUN_8001ff7c(param_1,param_2,iVar1,uVar2);
    uVar2 = 1;
  }
  return uVar2;
}

