
undefined4 FUN_8009c2b0(int param_1,undefined4 param_2,byte *param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  byte local_a0 [128];
  
  iVar6 = 0;
  bVar2 = 0;
  iVar5 = 0x7e;
  pbVar4 = param_3;
  do {
    bVar1 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    iVar5 = iVar5 + -1;
    bVar2 = bVar2 ^ bVar1;
  } while (-1 < iVar5);
  *pbVar4 = bVar2;
  while( true ) {
    if (7 < iVar6) {
      return 0;
    }
    FUN_8009bb00();
    iVar5 = FUN_8009baf0(param_1,param_2,param_3);
    if (iVar5 != 1) break;
    do {
      uVar3 = FUN_8009c610(param_1 >> 4);
    } while ((uVar3 & 1) == 0);
    FUN_8009a340(local_a0,0x80);
    FUN_8009bb00();
    iVar5 = FUN_8009c600(param_1,param_2,local_a0);
    if (iVar5 == 1) {
      do {
        uVar3 = FUN_8009c610(param_1 >> 4);
      } while ((uVar3 & 1) == 0);
    }
    else {
      FUN_8009a730(s_card_read_error_8001ca50);
    }
    pbVar4 = local_a0;
    bVar2 = 0;
    iVar5 = 0x7e;
    do {
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
      iVar5 = iVar5 + -1;
      bVar2 = bVar2 ^ bVar1;
    } while (-1 < iVar5);
    iVar6 = iVar6 + 1;
    if (param_3[0x7f] == bVar2) {
      return 1;
    }
  }
  return 0;
}

