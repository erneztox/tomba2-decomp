// FUN_08022fe8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08022fe8(int param_1)

{
  byte bVar1;
  bool bVar2;
  short sVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  ushort uVar10;
  uint unaff_s6;
  
  bVar2 = false;
  if (DAT_800e7ee1 == '1') {
    return;
  }
  if (DAT_800e7ee1 == 'A') {
    return;
  }
  if (DAT_800bf841 != '\0') {
    return;
  }
  uVar6 = (uint)*(short *)(*(int *)(param_1 + 0xc4) + 8);
  if (0x800 < (int)uVar6) {
    uVar6 = uVar6 | 0xf000;
  }
  bVar1 = *(byte *)(param_1 + 6);
  uVar10 = (ushort)uVar6;
  if (bVar1 == 1) {
    iVar8 = func_0x0011c848(param_1,1);
    if (iVar8 == 0) {
      unaff_s6 = (uint)*(ushort *)(param_1 + 0x48) + (uint)*(ushort *)(param_1 + 0x4e);
      if (-1 < (int)(short)*(ushort *)(param_1 + 0x4e) * ((int)(unaff_s6 * 0x10000) >> 0x10)) {
        *(undefined1 *)(param_1 + 5) = 0;
        *(undefined1 *)(param_1 + 6) = 0;
        iVar8 = _DAT_80144e24;
        *(undefined2 *)(param_1 + 0x48) = 0;
        *(undefined2 *)(param_1 + 0x4e) = 0;
        uVar4 = uVar10;
        if (iVar8 != 0) {
          func_0x00074af0();
          _DAT_80144e24 = 0;
          halt_baddata();
        }
        goto LAB_08023584;
      }
    }
    else if ((iVar8 == 1) && ((DAT_800e7fc5 & 1) == 0)) {
      iVar7 = func_0x00083e80((int)(short)uVar10);
      bVar2 = true;
      unaff_s6 = (uint)(iVar7 * -(int)*(short *)(*(int *)(param_1 + 200) + 4)) >> 0xc;
    }
    sVar3 = *(short *)(param_1 + 0x48) + *(short *)(param_1 + 0x4e);
    *(short *)(param_1 + 0x48) = sVar3;
    if (0x1600 < sVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (sVar3 < -0x1600) {
      *(undefined2 *)(param_1 + 0x48) = 0xea00;
    }
    iVar7 = uVar6 + ((int)((uint)*(ushort *)(param_1 + 0x48) << 0x10) >> 0x18);
    uVar4 = (ushort)iVar7;
    iVar9 = iVar7 * 0x10000 >> 0x10;
    if ((*(short *)(param_1 + 0x60) <= iVar9) &&
       (uVar5 = uVar4 & 0xfff, iVar9 <= *(short *)(param_1 + 0x62))) goto LAB_08023588;
    if ((*(char *)(param_1 + 1) != '\0') &&
       (((int)(short)uVar10 != (int)*(short *)(param_1 + 0x60) &&
        ((int)(short)uVar10 != (int)*(short *)(param_1 + 0x62))))) {
      func_0x00074af0(_DAT_80144e24);
      _DAT_80144e24 = 0;
    }
    iVar7 = iVar7 * 0x10000 >> 0x10;
    if (iVar7 < 0) {
      uVar4 = *(ushort *)(param_1 + 0x60);
      if ((*(char *)(param_1 + 0x29) == '\0') || (-0xa01 < *(short *)(param_1 + 0x48))) {
LAB_08023428:
        *(undefined2 *)(param_1 + 0x48) = 0;
        *(undefined2 *)(param_1 + 0x4e) = 0;
        if (iVar8 == 0) {
          *(undefined1 *)(param_1 + 5) = 0;
          *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x48) = 0xa00;
        *(undefined2 *)(param_1 + 0x4e) = 0xfe00;
        *(undefined1 *)(param_1 + 0x5e) = 1;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        if (_DAT_800e7fee != 0) {
          DAT_800bf9ce = DAT_800bf9ce & ~(byte)(1 << (*(byte *)(param_1 + 3) & 0x1f));
          halt_baddata();
        }
      }
    }
    else {
      uVar5 = uVar4 & 0xfff;
      if (iVar7 < 1) goto LAB_08023588;
      uVar4 = *(ushort *)(param_1 + 0x62);
      if ((*(char *)(param_1 + 0x29) == '\0') || (*(short *)(param_1 + 0x48) < 0xa01))
      goto LAB_08023428;
      *(undefined2 *)(param_1 + 0x48) = 0xf600;
      *(undefined2 *)(param_1 + 0x4e) = 0x200;
      *(undefined1 *)(param_1 + 0x5e) = 1;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      if (_DAT_800e7fee != 0) {
        DAT_800bf9ce = DAT_800bf9ce | (byte)(1 << (*(byte *)(param_1 + 3) & 0x1f));
        halt_baddata();
      }
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if ((*(char *)(param_1 + 1) == '\0') || (_DAT_80144e24 != 0)) goto LAB_0802318c;
      bVar2 = true;
      if (uVar10 == *(ushort *)(param_1 + 0x60)) {
        if (((*(byte *)(param_1 + 0x29) & 4) == 0) || (-1 < *(short *)(param_1 + 0x44))) {
          if ((*(byte *)(param_1 + 0x29) & 0x80) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else {
LAB_08023150:
          bVar2 = false;
        }
      }
      else if (uVar10 == *(ushort *)(param_1 + 0x62)) {
        if ((*(byte *)(param_1 + 0x29) & 4) == 0) {
          if ((*(byte *)(param_1 + 0x29) & 0x80) == 0) goto LAB_08023150;
        }
        else if (0 < *(short *)(param_1 + 0x44)) {
          halt_baddata();
        }
      }
      if (bVar2) {
        if ((int)(uVar6 << 0x10) < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        _DAT_80144e24 = func_0x00074590(0x88,0xfffffff6,0xfffffff2);
      }
LAB_0802318c:
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      halt_baddata();
    }
    if (bVar1 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar8 = func_0x0011c848(param_1,0);
    if ((iVar8 == 1) && ((DAT_800e7fc5 & 1) == 0)) {
      iVar8 = func_0x00083e80((int)(short)uVar10);
      bVar2 = true;
      unaff_s6 = (uint)(iVar8 * -(int)*(short *)(*(int *)(param_1 + 200) + 4)) >> 0xc;
    }
    sVar3 = *(short *)(param_1 + 0x48) + *(short *)(param_1 + 0x4e);
    *(short *)(param_1 + 0x48) = sVar3;
    if (0x1600 < sVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (sVar3 < -0x1600) {
      *(undefined2 *)(param_1 + 0x48) = 0xea00;
    }
    iVar8 = uVar6 + ((int)((uint)*(ushort *)(param_1 + 0x48) << 0x10) >> 0x18);
    uVar4 = (ushort)iVar8;
    iVar8 = iVar8 * 0x10000 >> 0x10;
    if ((short)uVar10 * iVar8 < 1) {
      *(undefined1 *)(param_1 + 6) = 1;
    }
    if ((*(short *)(param_1 + 0x60) <= iVar8) &&
       (uVar5 = uVar4 & 0xfff, iVar8 <= *(short *)(param_1 + 0x62))) goto LAB_08023588;
    if (iVar8 < 0) {
      *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x3e) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (0 < iVar8) {
      uVar4 = *(ushort *)(param_1 + 0x62);
      *(undefined1 *)(*(int *)(param_1 + 0xe0) + 0x3e) = 1;
    }
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined2 *)(param_1 + 0x72) = 1;
    *(undefined2 *)(param_1 + 0x74) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 0x5e) = 0;
  }
LAB_08023584:
  uVar5 = uVar4 & 0xfff;
LAB_08023588:
  *(ushort *)(*(int *)(param_1 + 0xc4) + 8) = uVar5;
  *(short *)(*(int *)(param_1 + 0xdc) + 8) = (short)uVar4 >> 1;
  if (*(short *)(param_1 + 0x68) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(*(int *)(param_1 + 0xe0) + 8) = (short)(-(int)(short)uVar4 >> 1);
  func_0x0011cedc(param_1);
  if (bVar2) {
    iVar8 = func_0x00083e80((int)(short)uVar4);
    iVar8 = (iVar8 * -(int)*(short *)(*(int *)(param_1 + 200) + 4) >> 0xc) - unaff_s6;
    if (iVar8 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_800e7eb2 = _DAT_800e7eb2 + (short)iVar8;
  }
  func_0x0011c974(param_1);
  return;
}

