// FUN_080139f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080139f4(int param_1,int param_2,uint param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  char cVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  
  iVar11 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e);
  iVar7 = iVar11 * 0x10000 >> 0x10;
  iVar10 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36);
  iVar8 = iVar10 * 0x10000 >> 0x10;
  uVar9 = func_0x00084080(iVar7 * iVar7 + iVar8 * iVar8);
  uVar4 = *(ushort *)(param_1 + 0x80);
  uVar5 = *(ushort *)(param_2 + 0x80);
  if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) < (int)(uVar9 & 0xffff)) {
    return 0xffffffff;
  }
  iVar7 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
  if ((int)(short)*(ushort *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
      (int)(iVar7 + (((uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x86)) -
                    (uint)*(ushort *)(param_1 + 0x84)) & 0xffff)) {
    halt_baddata();
  }
  if (iVar7 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar8 = (uint)*(ushort *)(param_1 + 0x84) +
          ((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84));
  _DAT_1f80009c = func_0x00085690(-(int)(short)iVar10,(int)(short)iVar11);
  bVar12 = *(short *)(param_1 + 0x44) != 0;
  if (*(short *)(param_2 + 0x44) != 0) {
    bVar12 = bVar12 | 2;
  }
  iVar10 = (iVar8 - iVar7) * 0x10000 >> 0x10;
  iVar7 = (int)((((uint)uVar4 + (uint)uVar5) - uVar9) * 0x10000) >> 0x10;
  if (iVar10 < 0x14) {
    if (iVar7 < 0x61) {
      halt_baddata();
    }
  }
  else if (iVar7 < iVar10) {
    if (bVar12 != 2) {
      iVar7 = func_0x00083f50();
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(param_2 + 0x80);
      iVar8 = func_0x00083e80(_DAT_1f80009c);
      sVar3 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_2 + 0x2e) + (short)(iVar7 * ((int)sVar1 + (int)sVar2) >> 0xc);
      *(short *)(param_1 + 0x36) =
           *(short *)(param_2 + 0x36) -
           (short)(iVar8 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar7 = func_0x00083f50();
    sVar1 = *(short *)(param_1 + 0x80);
    sVar2 = *(short *)(param_2 + 0x80);
    iVar8 = func_0x00083e80(_DAT_1f80009c);
    sVar3 = *(short *)(param_1 + 0x80);
    *(short *)(param_2 + 0x2e) =
         *(short *)(param_1 + 0x2e) - (short)(iVar7 * ((int)sVar1 + (int)sVar2) >> 0xc);
    *(short *)(param_2 + 0x36) =
         *(short *)(param_1 + 0x36) +
         (short)(iVar8 * ((int)sVar3 + (int)*(short *)(param_2 + 0x80)) >> 0xc);
    if (*(char *)(param_1 + 2) == '\b') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((param_3 & 2) == 0) {
      cVar6 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x60),1);
      *(char *)(param_1 + 0x5f) = cVar6 + '\x02';
    }
    else {
      iVar7 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x60),1);
      if (*(short *)(param_1 + 0x44) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar8 = 3;
      if (-1 < *(short *)(param_1 + 0x44)) {
        iVar8 = 2;
      }
      if (iVar7 + 2 == iVar8) {
        *(char *)(param_1 + 0x5f) = (char)(iVar7 + 2);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if ((param_3 & 2) == 0) {
      *(byte *)(param_2 + 0x5f) = '\x03' - (*(byte *)(param_1 + 0x5f) & 1);
    }
    else {
      iVar7 = 3 - (*(byte *)(param_1 + 0x5f) & 1);
      if (*(short *)(param_2 + 0x44) == 0) {
LAB_08013d34:
        *(char *)(param_2 + 0x5f) = (char)iVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(short *)(param_2 + 0x44) < 0) {
        if (iVar7 == 3) {
          *(undefined1 *)(param_2 + 0x5f) = 3;
          halt_baddata();
        }
      }
      else if (iVar7 == 2) goto LAB_08013d34;
    }
    if (*(char *)(param_1 + 2) == '/') {
      if (*(char *)(param_2 + 2) != '0') {
        return 0;
      }
      *(undefined1 *)(param_1 + 0x5f) = 8;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 2) == '0') {
      if (*(char *)(param_2 + 2) != '/') {
        halt_baddata();
      }
      *(undefined1 *)(param_2 + 0x5f) = 8;
      halt_baddata();
    }
    return 0;
  }
  if (iVar8 * 0x10000 < 1) {
    *(short *)(param_1 + 0x32) = *(short *)(param_2 + 0x32) + (short)iVar8;
    *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 0x80;
    if ((param_3 & 1) == 0) {
      *(byte *)(param_2 + 0x29) = *(byte *)(param_2 + 0x29) | 1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_2 + 0x32) = *(short *)(param_1 + 0x32) - (short)iVar8;
  *(byte *)(param_1 + 0x29) = *(byte *)(param_1 + 0x29) | 1;
  *(byte *)(param_2 + 0x29) = *(byte *)(param_2 + 0x29) | 0x80;
  return 3;
}

