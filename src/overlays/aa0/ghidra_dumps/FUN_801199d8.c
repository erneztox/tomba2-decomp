// FUN_801199d8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801199d8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  short local_30;
  short local_2e;
  short local_2c;
  short sStack_28;
  short sStack_26;
  short sStack_24;
  short sStack_20;
  short sStack_1e;
  short sStack_1c;
  short sStack_18;
  short sStack_16;
  short sStack_14;
  
  if (*(char *)(param_1 + 1) == '\x01') {
    func_0x8003cca4();
  }
  local_30 = *(short *)(param_1 + 0x4e);
  local_2e = *(short *)(param_1 + 0x50);
  local_2c = *(short *)(param_1 + 0x52);
  cVar1 = *(char *)(param_1 + 0x47);
  sStack_24 = local_2c;
  if (cVar1 == '\0') {
    sStack_26 = local_2e + 400;
    sStack_28 = local_30;
    FUN_8013dd34(&local_30,&sStack_28);
    FUN_80122bdc();
    return;
  }
  if (cVar1 == '\x01') {
    sStack_28 = _DAT_800e7eae;
    sStack_26 = _DAT_800e7eb2;
    sStack_24 = _DAT_800e7eb6;
    FUN_8013dd34(&local_30,&sStack_28);
    FUN_80122bdc();
    return;
  }
  if (cVar1 == '\x02') {
    sStack_28 = local_30 + *(short *)(param_1 + 0x80);
    sStack_26 = *(short *)(param_1 + 0x84) + 100;
    FUN_8013dd34(&local_30,&sStack_28);
    FUN_80122bdc();
    return;
  }
  if (cVar1 == '\x03') {
    sStack_28 = *(short *)(_DAT_800bf868 + 0x2e);
    sStack_26 = *(short *)(_DAT_800bf868 + 0x32);
    sStack_24 = *(short *)(_DAT_800bf868 + 0x36);
    iVar2 = (int)sStack_28 - (int)local_30;
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    iVar4 = (int)sStack_26 - (int)local_2e;
    sStack_18 = local_30 + (short)(iVar2 >> 3);
    if (iVar4 < 0) {
      iVar4 = iVar4 + 7;
    }
    iVar2 = (int)sStack_24 - (int)local_2c;
    sStack_16 = local_2e + (short)(iVar4 >> 3);
    if (iVar2 < 0) {
      iVar2 = iVar2 + 7;
    }
    sStack_14 = local_2c + (short)(iVar2 >> 3);
    iVar2 = 0;
    sStack_20 = local_30;
    sStack_1e = local_2e;
    sStack_1c = local_2c;
    do {
      FUN_8013dd34(&sStack_20,&sStack_18);
      iVar5 = iVar2 + 2;
      iVar4 = ((int)sStack_28 - (int)local_30) * iVar5;
      sStack_1c = sStack_14;
      sStack_20 = sStack_18;
      sStack_1e = sStack_16;
      if (iVar4 < 0) {
        iVar4 = iVar4 + 7;
      }
      iVar3 = ((int)sStack_26 - (int)local_2e) * iVar5;
      sStack_18 = local_30 + (short)(iVar4 >> 3);
      if (iVar3 < 0) {
        iVar3 = iVar3 + 7;
      }
      iVar5 = ((int)sStack_24 - (int)local_2c) * iVar5;
      sStack_16 = local_2e + (short)(iVar3 >> 3);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 7;
      }
      sStack_14 = local_2c + (short)(iVar5 >> 3);
      iVar2 = iVar2 + 1;
    } while (iVar2 < 8);
  }
  return;
}

