
undefined4 FUN_8001bb38(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar3 = 0;
  iVar5 = -0x7ffc5b14;
  iVar4 = 0;
  while( true ) {
    if (*(int *)(iVar4 + -0x7ffc5b1c) == 0) {
      return 0xffffffff;
    }
    if ((*(int *)(iVar4 + -0x7ffc5b1c) == param_1) &&
       (iVar1 = FUN_8001e4bc(param_2,iVar5), iVar1 == 0)) break;
    iVar5 = iVar5 + 0x2c;
    iVar3 = iVar3 + 1;
    iVar4 = iVar4 + 0x2c;
    if (0x7f < iVar3) {
      return 0xffffffff;
    }
  }
  uVar2 = FUN_8001b3bc();
  return uVar2;
}

