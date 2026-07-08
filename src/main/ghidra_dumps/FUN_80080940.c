
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80080940(char *param_1,undefined4 param_2)

{
  char cVar1;
  bool bVar2;
  int in_zero;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  int *piVar6;
  char *pcVar7;
  int *piVar8;
  
  pcVar7 = &DAT_80100ab8;
  cVar1 = *param_1;
  pcVar5 = param_1;
  while (':' < cVar1) {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar7 = cVar1;
    pcVar7 = pcVar7 + 1;
    cVar1 = *pcVar5;
  }
  *pcVar7 = '\0';
  piVar8 = *(int **)(in_zero + 0x150);
  piVar6 = piVar8 + (*(uint *)(in_zero + 0x154) / 0x50) * 0x14;
  for (; piVar8 < piVar6; piVar8 = piVar8 + 0x14) {
    if ((*piVar8 != 0) && (iVar3 = FUN_8009a540(*piVar8,&DAT_80100ab8), iVar3 == 0)) {
      _DAT_80100ab0 = piVar8[0xd];
      bVar2 = true;
      goto LAB_80080a10;
    }
  }
  bVar2 = false;
LAB_80080a10:
  uVar4 = 0;
  if (bVar2) {
    piVar8 = *(int **)(in_zero + 0x150);
    piVar6 = piVar8 + (*(uint *)(in_zero + 0x154) / 0x50) * 0x14;
    for (; piVar8 < piVar6; piVar8 = piVar8 + 0x14) {
      if ((*piVar8 != 0) && (iVar3 = FUN_8009a540(*piVar8,&DAT_80100ab8), iVar3 == 0)) {
        piVar8[0xd] = (int)FUN_80080adc;
        break;
      }
    }
    uVar4 = FUN_80080be0(param_1,param_2);
  }
  return uVar4;
}

