/**
 * @brief Audio sequence player variant 2: manages playback state
 * @note Original: func_80075A80 at 0x80075A80
 */
// Audio_SeqPlay2



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80075a80(void)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  short sVar7;
  byte bVar8;
  undefined1 *puVar9;
  char *pcVar10;
  uint uVar11;
  int iVar12;
  char acStack_38 [24];
  
  FUN_800998e4(acStack_38);
  pcVar10 = &DAT_800be238 + _DAT_800bed78 * 0xc;
  puVar9 = &DAT_800be239 + _DAT_800bed78 * 0xc;
  if ((int)_DAT_800bed78 < 0x18) {
    iVar12 = _DAT_800bed78 << 0x10;
    uVar11 = _DAT_800bed78;
    do {
      cVar1 = *pcVar10;
      if (cVar1 == '\0') {
LAB_80075bf8:
        if ((acStack_38[uVar11] == '\0') || (acStack_38[uVar11] == '\x03')) {
          *puVar9 = 0;
        }
      }
      else {
        if (cVar1 != -1) {
          if (puVar9[7] == '\x04') {
            *pcVar10 = cVar1 + -1;
            if (cVar1 == '\x01') {
              DAT_800be358 = DAT_800be358 | 1 << (uVar11 & 0x1f);
              puVar9[2] = 0;
              puVar9[1] = 0;
            }
          }
          else {
            *pcVar10 = cVar1 + -1;
          }
          goto LAB_80075bf8;
        }
        if ((puVar9[2] & 0x80) == 0) {
          uVar2 = puVar9[3];
          uVar3 = puVar9[1];
          bVar8 = puVar9[2];
          uVar4 = puVar9[4];
          uVar5 = puVar9[5];
          uVar6 = puVar9[6];
          sVar7 = _DAT_800bed84;
        }
        else {
          uVar2 = puVar9[3];
          uVar3 = puVar9[1];
          uVar4 = puVar9[4];
          uVar5 = puVar9[5];
          uVar6 = puVar9[6];
          bVar8 = puVar9[2] & 0xf;
          sVar7 = DAT_800a4f7e;
        }
        FUN_80092660(iVar12 >> 0x10,(int)sVar7,uVar3,bVar8,uVar2,uVar4,uVar5,uVar6);
        DAT_800be358 = DAT_800be358 & ~(1 << (uVar11 & 0x1f));
        *pcVar10 = *pcVar10 + -1;
      }
      iVar12 = iVar12 + 0x10000;
      uVar11 = uVar11 + 1;
      puVar9 = puVar9 + 0xc;
      pcVar10 = pcVar10 + 0xc;
    } while ((int)uVar11 < 0x18);
  }
  if (DAT_800be358 != 0) {
    FUN_80098f90(0);
    DAT_800be358 = 0;
  }
  FUN_80075824(&DAT_800be1f8);
  FUN_80099490(&DAT_800be1f8);
  DAT_800be1f8 = 0;
  if ((_DAT_800bed80 != -1) &&
     (sVar7 = FUN_8008e0c0((int)*(short *)(&DAT_800be368 + _DAT_800bed80 * 8),0), sVar7 == 0)) {
    if (DAT_800be22a == '\0') {
      FUN_80074e48(0);
    }
    else {
      _DAT_800bed80 = 0;
      FUN_80074bf8();
      DAT_800be22a = '\0';
    }
  }
  return;
}
