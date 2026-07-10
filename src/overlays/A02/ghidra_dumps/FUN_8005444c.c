// FUN_8005444c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

char FUN_8005444c(int param_1)

{
  byte bVar1;
  bool bVar2;
  ushort uVar3;
  char cVar4;
  byte bVar5;
  int iVar6;
  ushort uVar7;
  short sVar8;
  short sVar9;
  
  bVar2 = false;
  *(undefined2 *)(param_1 + 0x16c) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  if (*(char *)(param_1 + 0x16b) != '\0') goto LAB_80054630;
  if (*(char *)(param_1 + 0x29) != '\0') {
    return *(char *)(param_1 + 0x29);
  }
  if (*(short *)(param_1 + 0x17e) < 0) {
    iVar6 = (uint)*(ushort *)(param_1 + 0x80) << 0x10;
    sVar9 = (short)((uint)((iVar6 >> 0x10) - (iVar6 >> 0x1f)) >> 1);
  }
  else {
    sVar9 = *(short *)(param_1 + 0x80);
  }
  if (*(char *)(param_1 + 0x78) == '\0') {
    sVar8 = *(short *)(param_1 + 0x62);
  }
  else {
    iVar6 = *(int *)(param_1 + 0x10);
    sVar8 = (*(short *)(iVar6 + 0x86) - *(short *)(iVar6 + 0x84)) -
            (*(short *)(param_1 + 0x32) - *(short *)(iVar6 + 0x32));
  }
  if (*(char *)(param_1 + 0x61) == '\0') {
    cVar4 = FUN_80049250(param_1,0,(int)sVar8);
    *(char *)(param_1 + 0x29) = cVar4;
    if (cVar4 == '\0') {
      bVar2 = true;
      cVar4 = FUN_80049250(param_1,(int)sVar9,(int)sVar8);
      *(char *)(param_1 + 0x29) = cVar4;
      if (cVar4 == '\0') {
        iVar6 = (int)-sVar9;
        goto LAB_80054518;
      }
    }
  }
  else {
    iVar6 = 0;
LAB_80054518:
    cVar4 = FUN_80049250(param_1,iVar6,(int)sVar8);
    *(char *)(param_1 + 0x29) = cVar4;
    if (cVar4 == '\0') goto LAB_80054630;
  }
  uVar3 = _DAT_1f8001a6;
  _DAT_1f80019e = _DAT_1f8001a4;
  *(ushort *)(param_1 + 0x6a) = _DAT_1f8001a6;
  if (((bVar2) && (uVar7 = uVar3 & 0xf00, (uVar3 & 0x8000) != 0)) &&
     ((uVar7 == 0x100 || (uVar7 == 0x200)))) {
    *(undefined2 *)(param_1 + 0x6a) = 0;
  }
  bVar1 = *(byte *)(param_1 + 0x29);
  bVar5 = bVar1 & 1;
  *(byte *)(param_1 + 0x29) = bVar5;
  if ((bVar1 & 1) != 0) {
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(byte *)(param_1 + 0x29) = bVar5 | 0x80;
    if (bVar2) {
      *(undefined2 *)(param_1 + 0x16c) = 0;
    }
    else {
      *(undefined2 *)(param_1 + 0x16c) = _DAT_1f8001a8;
    }
    FUN_80049674(param_1);
    *(undefined2 *)(param_1 + 0x142) = _DAT_1f8001a2;
  }
LAB_80054630:
  return *(char *)(param_1 + 0x29);
}

