// FUN_08012ad8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08012ad8(byte *param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  char cVar3;
  ushort uVar4;
  short sVar5;
  undefined2 uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  iVar10 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c);
  iVar7 = iVar10 * 0x10000 >> 0x10;
  iVar9 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34);
  iVar8 = iVar9 * 0x10000 >> 0x10;
  uVar4 = func_0x00084080(iVar7 * iVar7 + iVar8 * iVar8);
  if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) < (int)(uint)uVar4) {
    return 0xffffffff;
  }
  iVar7 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30);
  if ((int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86) <
      (int)(iVar7 + (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x84) & 0xffff))
  {
    halt_baddata();
  }
  if (iVar7 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar8 = ((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84)) +
          ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84));
  _DAT_1f80009c = func_0x00085690(-(int)(short)iVar9,(int)(short)iVar10);
  sVar5 = (short)iVar8;
  if ((iVar8 * 0x10000 < 0) && ((int)sVar5 - (int)(short)iVar7 < 0x28)) {
    if ((param_1[0x145] & 1) != 0) {
      return 0xffffffff;
    }
    *(undefined1 *)(param_2 + 0x29) = 1;
    if (*(char *)(param_2 + 0x5e) != '\0') {
      func_0x00022c78(param_1);
      if ((((short)uVar4 <= *(short *)(param_1 + 0x80)) && (*param_1 == 1)) &&
         ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar7 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
      if (iVar7 != 0) {
        param_1[0x142] = 0;
        param_1[0x143] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
LAB_08012f98:
      uVar6 = 0xff00;
LAB_08012f9c:
      *(undefined2 *)(param_1 + 0x142) = uVar6;
      param_1[0x16a] = 10;
      *(int *)(param_1 + 0x30) = ((int)*(short *)(param_3 + 0x30) + (int)sVar5) * 0x10000;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((((*(char *)(param_2 + 3) != '\x02') || (DAT_1f800137 != '\0')) || (param_1[0x145] != 2)) ||
       (1 < param_1[4])) goto LAB_08012f08;
    iVar7 = func_0x00055844();
    if (iVar7 != 0) {
      param_1[0x145] = 0;
      param_1[0x148] = 0;
      param_1[0x50] = 0;
      param_1[0x51] = 0;
      param_1[5] = 0x17;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    iVar7 = (iVar8 * 0x10000 >> 0x10) - (int)(short)iVar7;
    if (((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) - (int)(short)uVar4 <
        iVar7) {
      if ((*param_1 & 4) == 0) {
        iVar8 = func_0x00083f50(_DAT_1f80009c);
        sVar5 = *(short *)(param_1 + 0x80);
        sVar1 = *(short *)(param_2 + 0x80);
        iVar9 = func_0x00083e80(_DAT_1f80009c);
        sVar2 = *(short *)(param_2 + 0x80);
        *(short *)(param_1 + 0x2e) =
             *(short *)(param_3 + 0x2c) + (short)(iVar8 * ((int)sVar5 + (int)sVar1) >> 0xc);
        *(short *)(param_1 + 0x36) =
             *(short *)(param_3 + 0x34) -
             (short)(iVar9 * ((int)*(short *)(param_1 + 0x80) + (int)sVar2) >> 0xc);
      }
      if (0x91 < iVar7) {
        param_1[0x60] = 1;
      }
      cVar3 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
      param_1[0x5f] = cVar3 + 2;
      halt_baddata();
    }
    if (0 < sVar5) {
      if (_DAT_1f800098 == 0) {
        DAT_1f800253 = 4;
        *(int *)(param_1 + 0x30) = ((int)*(short *)(param_3 + 0x30) + (int)sVar5) * 0x10000;
        if ((param_1[0x145] == 1) && (*(short *)(param_1 + 0x4a) < 0)) {
          param_1[0x4a] = 0;
          param_1[0x4b] = 0;
        }
        if ((*(char *)(param_2 + 0x5e) == '\0') && ((short)uVar4 <= *(short *)(param_1 + 0x80))) {
          param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
          func_0x00022d08(param_1,param_2,1,1);
        }
      }
      return 3;
    }
    if ((param_1[0x145] & 1) != 0) {
      return 0xffffffff;
    }
    *(undefined1 *)(param_2 + 0x29) = 1;
    if (*(char *)(param_2 + 0x5e) != '\0') {
      func_0x00022c78(param_1);
      if ((((int)(short)uVar4 <= (int)*(short *)(param_1 + 0x80)) && (*param_1 == 1)) &&
         ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0)) {
        param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
        func_0x00022d08(param_1,param_2,1,1);
        halt_baddata();
      }
      iVar7 = func_0x00077768((int)_DAT_1f80009c,(int)*(short *)(param_1 + 0x140),1);
      uVar6 = 0x100;
      if (iVar7 != 0) goto LAB_08012f9c;
      goto LAB_08012f98;
    }
    if (((*(char *)(param_2 + 3) != '\x02') || (DAT_1f800137 != '\0')) ||
       ((param_1[0x145] != 2 || (1 < param_1[4])))) goto LAB_08012f08;
    iVar7 = func_0x00055844();
    if (iVar7 != 0) {
      param_1[0x145] = 0;
      param_1[0x148] = 0;
      param_1[0x50] = 0;
      param_1[0x51] = 0;
      param_1[5] = 0x17;
      halt_baddata();
    }
  }
  if ((param_1[5] != 0x17) || (0x2c00 < *(short *)(param_1 + 0x4a))) {
    param_1[0x145] = 0;
    param_1[0x148] = 0;
    param_1[0x50] = 0;
    param_1[0x51] = 0;
    param_1[5] = 0x17;
    param_1[6] = 0;
    param_1[7] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_08012f08:
  func_0x00022c78(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

