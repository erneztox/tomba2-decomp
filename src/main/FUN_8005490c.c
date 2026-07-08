
void FUN_8005490c(int param_1,int param_2,int param_3)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint uVar6;
  
  iVar3 = FUN_800535d4();
  if (iVar3 - 7U < 3) {
    if ((param_3 == 0) || (param_2 == 0)) {
      if (param_2 == 0) {
        puVar4 = &DAT_800a44e8;
        uVar5 = 0;
      }
      else {
        puVar4 = &DAT_800a44ec;
        uVar5 = 5;
      }
      FUN_80054d14(param_1,puVar4[*(byte *)(param_1 + 0xbe)],uVar5);
      return;
    }
    if ((*(char *)(param_1 + 0x145) == '\0') && (param_3 != 2)) {
      puVar4 = &DAT_800a44ec;
    }
    else {
      puVar4 = &DAT_800a44f0;
    }
    uVar6 = (uint)(byte)puVar4[*(byte *)(param_1 + 0xbe)];
    if (*(byte *)(param_1 + 0x46) == uVar6) {
      return;
    }
    *(undefined *)(param_1 + 0x46) = puVar4[*(byte *)(param_1 + 0xbe)];
    FUN_80054790(param_1,uVar6);
  }
  else {
    if ((param_3 == 0) || (param_2 == 0)) {
      if (param_2 == 0) {
        puVar4 = &DAT_800a44d0;
        uVar5 = 0;
      }
      else {
        puVar4 = (undefined *)0x800a44d8;
        uVar5 = 5;
      }
      FUN_80054d14(param_1,puVar4[(uint)*(byte *)(param_1 + 0xbe) + (*(byte *)(param_1 + 0x14a) & 6)
                                 ],uVar5);
      return;
    }
    if ((*(char *)(param_1 + 0x145) == '\0') && (param_3 != 2)) {
      iVar3 = -0x7ff5bb28;
    }
    else {
      iVar3 = -0x7ff5bb20;
    }
    bVar1 = *(byte *)(iVar3 + (*(byte *)(param_1 + 0x14a) & 6) + (uint)*(byte *)(param_1 + 0xbe));
    uVar6 = (uint)bVar1;
    if (*(byte *)(param_1 + 0x46) == uVar6) {
      return;
    }
    *(byte *)(param_1 + 0x46) = bVar1;
    FUN_80054790(param_1,uVar6);
  }
  if (param_3 < 1) {
    FUN_80077cfc(param_1,&PTR_DAT_80017fe8,uVar6,5);
  }
  else {
    sVar2 = *(short *)(*(int *)(param_1 + 0x38) + 2);
    puVar4 = (&PTR_DAT_80017fe8)[uVar6];
    *(undefined **)(param_1 + 0x38) = puVar4 + sVar2 * 8;
    *(undefined2 *)(param_1 + 0xe) = 5;
    FUN_80075ff8(param_1,puVar4 + sVar2 * 8);
    FUN_80075f0c(param_1);
  }
  return;
}

