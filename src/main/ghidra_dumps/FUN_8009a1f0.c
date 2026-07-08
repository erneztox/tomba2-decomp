
int FUN_8009a1f0(byte *param_1)

{
  uint uVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 1;
  uVar5 = 10;
  iVar6 = 0;
  if (param_1 == (byte *)0x0) {
    return 0;
  }
  do {
    pbVar3 = param_1;
    param_1 = pbVar3 + 1;
  } while (((&DAT_800ace75)[*pbVar3] & 8) != 0);
  bVar2 = *pbVar3;
  if (bVar2 == 0x2d) {
    do {
      pbVar3 = pbVar3 + 1;
      iVar7 = -iVar7;
    } while (*pbVar3 == 0x2d);
    bVar2 = *pbVar3;
  }
  pbVar4 = pbVar3;
  if (bVar2 != 0x30) goto LAB_8009a2d0;
  pbVar4 = pbVar3 + 1;
  bVar2 = *pbVar4;
  if (bVar2 == 0x58) {
LAB_8009a2bc:
    pbVar4 = pbVar3 + 2;
    uVar5 = 0x10;
  }
  else {
    if ((char)bVar2 < 'Y') {
      uVar5 = 8;
      if (bVar2 != 0x42) goto LAB_8009a2d0;
    }
    else if (bVar2 != 0x62) {
      uVar5 = 8;
      if (bVar2 != 0x78) goto LAB_8009a2d0;
      goto LAB_8009a2bc;
    }
    pbVar4 = pbVar3 + 2;
    uVar5 = 2;
  }
LAB_8009a2d0:
  while( true ) {
    bVar2 = *pbVar4;
    pbVar4 = pbVar4 + 1;
    uVar1 = FUN_8009a6c0((int)(char)bVar2);
    if (uVar5 <= uVar1) break;
    iVar6 = iVar6 * uVar5 + uVar1;
  }
  return iVar6 * iVar7;
}

