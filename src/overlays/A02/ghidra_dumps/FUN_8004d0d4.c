// FUN_8004d0d4

undefined4 FUN_8004d0d4(int param_1,char *param_2,uint param_3)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (*param_2 == -1) {
    uVar2 = 0xffffffff;
  }
  else {
    bVar1 = param_2[2];
    if (((bVar1 & 0x80) == 0) && (iVar3 = FUN_8004d7ec((int)*(short *)(param_2 + 10),0), iVar3 != 0)
       ) {
      return 0;
    }
    uVar4 = 1 << (param_3 & 0x1f);
    uVar2 = 0;
    if ((*(uint *)(param_1 + 0x74) & uVar4) == 0) {
      if (((bVar1 & 0x80) != 0) &&
         (iVar3 = FUN_8004d868((int)*(short *)(param_2 + 10),0), iVar3 != 0)) {
        return 0;
      }
      uVar2 = 0;
      if ((*(uint *)(param_1 + 0x74) & uVar4) == 0) {
        uVar2 = 1;
      }
    }
  }
  return uVar2;
}

