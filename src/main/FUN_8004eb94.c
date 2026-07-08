
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8004eb94(byte *param_1,undefined2 param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  char *pcVar5;
  byte bVar6;
  uint *puVar7;
  
  if (*param_1 != 0xff) {
    iVar3 = FUN_8004ea4c(param_1,0);
    iVar3 = 0xa0 - (((iVar3 << 0x10) >> 0x10) - ((iVar3 << 0x10) >> 0x1f) >> 1);
    bVar1 = *param_1;
    puVar7 = _DAT_800bf544;
    if (bVar1 != 0xff) {
      pcVar5 = (char *)((int)_DAT_800bf544 + 0xd);
      bVar6 = 0;
      do {
        bVar4 = bVar1 + 0x10;
        if (7 < bVar4) {
          if (bVar1 != 0xfb) {
            pcVar5[-6] = 'u';
            *(ushort *)(pcVar5 + 1) = (bVar6 + 0x1f0) * 0x40 | 0x3f;
            *(short *)(pcVar5 + -5) = (short)iVar3;
            *(undefined2 *)(pcVar5 + -3) = param_2;
            pcVar5[-1] = *param_1 << 3;
            *pcVar5 = (*param_1 >> 5) << 3;
            iVar2 = _DAT_800ed8c8;
            *puVar7 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x3000000;
            *(uint **)(iVar2 + 0xc) = puVar7;
            pcVar5 = pcVar5 + 0x10;
            puVar7 = puVar7 + 4;
          }
          iVar3 = iVar3 + 8;
          bVar4 = bVar6;
        }
        param_1 = param_1 + 1;
        bVar1 = *param_1;
        bVar6 = bVar4;
      } while (bVar1 != 0xff);
    }
    _DAT_800bf544 = puVar7 + 3;
    FUN_80083de0(puVar7,0,0,0x1f,0);
    iVar3 = _DAT_800ed8c8;
    *puVar7 = *(uint *)(_DAT_800ed8c8 + 0xc) | 0x2000000;
    *(uint **)(iVar3 + 0xc) = puVar7;
  }
  return;
}

