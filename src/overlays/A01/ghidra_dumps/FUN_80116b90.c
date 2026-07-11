// FUN_80116b90

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_80116b90(undefined4 param_1,undefined1 param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined4 in_zero;
  short sVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  undefined1 *puVar15;
  int iVar16;
  uint *puVar17;
  undefined1 *puVar18;
  short *psVar19;
  short *psVar20;
  int iVar21;
  uint *unaff_s6;
  uint *puVar22;
  int iVar23;
  int in_stack_00000034;
  short sVar24;
  short sVar25;
  
  iVar13 = 3;
  iVar23 = -0x7fee9450;
  iVar5 = func_0x8007a980(3,9,0);
  if (iVar5 == 0) {
    return (uint *)0x0;
  }
  *(undefined1 *)(iVar5 + 2) = 0x16;
  *(undefined1 *)(iVar5 + 3) = param_2;
  *(undefined4 *)(iVar5 + 0x1c) = 0x8011f7cc;
  puVar18 = &DAT_1f800034;
  puVar22 = (uint *)0x0;
  iVar5 = (uint)*(ushort *)(iVar13 + 0x6c) << 0x10;
  iVar5 = (iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1;
  iVar21 = *(int *)(iVar13 + 0xc0);
  uVar6 = -iVar5;
  sVar25 = (short)uVar6;
  sVar24 = (short)iVar5;
  _DAT_1f800034 = sVar25;
  _DAT_1f80003c = sVar24;
  _DAT_1f800044 = sVar25;
  _DAT_1f80004c = sVar24;
  if (*(char *)(iVar13 + 0x47) != '\x02') {
    DAT_1f800007 = 0x3c;
    _DAT_1f80001a = *(undefined2 *)(iVar13 + 0x60);
    _DAT_1f80000e = *(undefined2 *)(iVar13 + 0x62);
    uVar1 = *(undefined2 *)(iVar13 + 0x68);
    uVar2 = *(undefined2 *)(iVar13 + 0x6a);
    DAT_1f80000d = (char)((ushort)uVar1 >> 8);
    DAT_1f800019 = (char)((ushort)uVar2 >> 8);
    _DAT_1f800024 = CONCAT11(DAT_1f80000d + '\n',(char)uVar1);
    _DAT_1f800030 = CONCAT11(DAT_1f800019 + '\n',(char)uVar2);
    _DAT_1f800036 = *(undefined2 *)(iVar21 + 0x3a);
    _DAT_1f800038 = 0;
    _DAT_1f80003e = *(undefined2 *)(iVar21 + 0x3a);
    _DAT_1f800040 = 0;
    _DAT_1f800048 = 0x14;
    _DAT_1f800046 = *(short *)(iVar21 + 0x3a) + 0x32;
    _DAT_1f800050 = 0x14;
    _DAT_1f80004e = *(short *)(iVar21 + 0x3a) + 0x32;
    _DAT_1f80000c = uVar1;
    _DAT_1f800018 = uVar2;
    sVar4 = FUN_80128864();
    if (10 < *(byte *)(iVar13 + 3)) {
      sVar4 = 0x20;
    }
    func_0x80133f38(0x1f800000,&DAT_1f800034,(int)sVar4);
    _DAT_1f80000c = *(undefined2 *)(iVar13 + 100);
    _DAT_1f800018 = *(undefined2 *)(iVar13 + 0x66);
    _DAT_1f800024 = *(undefined2 *)(iVar13 + 0x68);
    _DAT_1f800030 = *(undefined2 *)(iVar13 + 0x6a);
    _DAT_1f800048 = 0;
    _DAT_1f800050 = 0;
    _DAT_1f800036 = *(short *)(iVar21 + 0x3a) - 0x50;
    _DAT_1f80003e = *(short *)(iVar21 + 0x3a) + -0x50;
    _DAT_1f800046 = *(ushort *)(iVar21 + 0x3a);
    _DAT_1f80004e = *(ushort *)(iVar21 + 0x3a);
    iVar5 = 0;
    uVar6 = *(ushort *)(iVar21 + 0x3a) / 0x50;
    iVar23 = uVar6 + 1;
    while( true ) {
      if (*(short *)(iVar13 + 0x7e) != 0) {
        iVar7 = func_0x80083e80((int)*(short *)(iVar13 + 0x7c));
        iVar14 = (iVar5 + 1) * 0x800;
        if (iVar23 == 0) {
          trap(0x1c00);
        }
        if ((iVar23 == -1) && (iVar14 == -0x80000000)) {
          trap(0x1800);
        }
        sVar4 = *(short *)(iVar13 + 0x7e);
        iVar14 = func_0x80083e80(iVar14 / iVar23);
        if (iVar23 == 0) {
          trap(0x1c00);
        }
        if ((iVar23 == -1) && (iVar5 << 0xb == -0x80000000)) {
          trap(0x1800);
        }
        iVar16 = (int)(short)(sVar4 * iVar7 >> 0xc);
        _DAT_1f80003c = (short)(iVar16 * iVar14 >> 0xc);
        _DAT_1f800034 = _DAT_1f80003c + sVar25;
        _DAT_1f80003c = _DAT_1f80003c + sVar24;
        iVar7 = func_0x80083e80((iVar5 << 0xb) / iVar23);
        sVar4 = (short)(iVar16 * iVar7 >> 0xc);
        _DAT_1f800044 = sVar4 + sVar25;
        _DAT_1f80004c = sVar4 + sVar24;
        if (*(char *)(iVar13 + 0x29) != '\0') {
          if ((*(int *)(iVar21 + 0x30) + (int)(short)_DAT_1f800036 <= (int)_DAT_1f800162) &&
             ((int)_DAT_1f800162 < *(int *)(iVar21 + 0x30) + (int)(short)_DAT_1f800046)) {
            if ((DAT_800e7fc7 & 1) == 0) {
              _DAT_800e7fd2 = *(short *)(iVar13 + 0x82) - (*(short *)(iVar13 + 0x80) + sVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            _DAT_800e7fd2 = *(short *)(iVar13 + 0x80) + sVar4;
          }
        }
      }
      sVar4 = FUN_80128864(iVar13,(int)(((uint)*(ushort *)(iVar21 + 0x30) + (uint)_DAT_1f800036) *
                                       0x10000) >> 0x10,0x1f800000);
      if (10 < *(byte *)(iVar13 + 3)) {
        sVar4 = 0x20;
      }
      iVar7 = func_0x80133f38(0x1f800000,&DAT_1f800034,(int)sVar4);
      if (iVar7 != 0) break;
      _DAT_1f800036 = _DAT_1f800036 - 0x50;
      _DAT_1f80003e = _DAT_1f80003e + -0x50;
      _DAT_1f800046 = _DAT_1f800046 - 0x50;
      _DAT_1f80004e = _DAT_1f80004e - 0x50;
      iVar5 = iVar5 + 1;
      if ((int)(uVar6 + 2) < iVar5) {
        func_0x80133f38(0x1f800000,&DAT_1f800034,(int)sVar4);
        puVar22 = (uint *)FUN_801290e4();
        return puVar22;
      }
    }
    _DAT_1f800036 = _DAT_1f800036 - 0xa0;
    _DAT_1f80003e = _DAT_1f80003e + -0xa0;
    iVar13 = _DAT_1f80004e - 0xa0;
LAB_80128f58:
    iVar5 = iVar13;
LAB_80128f5c:
    _DAT_1f800000 = iVar5 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar17 = (uint *)0x10;
  if ((*(char *)(iVar13 + 3) != '\x01') && (puVar17 = (uint *)0x0, *(char *)(iVar13 + 3) == '\x04'))
  {
    puVar17 = (uint *)&DAT_0000005c;
  }
  DAT_1f800007 = 0x3d;
  _DAT_1f80001a = *(undefined2 *)(iVar13 + 0x60);
  _DAT_1f80000e = *(undefined2 *)(iVar13 + 0x62);
  _DAT_1f80000c = *(undefined2 *)(iVar13 + 100);
  _DAT_1f800018 = *(undefined2 *)(iVar13 + 0x66);
  _DAT_1f800024 = *(undefined2 *)(iVar13 + 0x68);
  _DAT_1f800030 = *(undefined2 *)(iVar13 + 0x6a);
  _DAT_1f800038 = 0;
  _DAT_1f800046 = *(ushort *)(iVar21 + 0x3a) >> 1;
  _DAT_1f800040 = 0;
  _DAT_1f800048 = 0;
  _DAT_1f800050 = 0;
  _DAT_1f80004e = *(ushort *)(iVar21 + 0x3a) >> 1;
  iVar5 = (int)((ulonglong)*(ushort *)(iVar21 + 0x3a) * 0xcccccccd >> 0x20);
  iVar7 = 0;
  uVar8 = *(ushort *)(iVar21 + 0x3a) / 0x50;
  uVar10 = uVar8;
  _DAT_1f800036 = _DAT_1f800046;
  _DAT_1f80003e = _DAT_1f80004e;
  while( true ) {
    _DAT_1f80003e = _DAT_1f80003e - 0x50;
    _DAT_1f800036 = _DAT_1f800036 - 0x50;
    if (uVar10 == 0) {
      return (uint *)0x0;
    }
    iVar16 = 0x1f800000;
    puVar15 = puVar18;
    iVar14 = func_0x80133f38(0x1f800000,&DAT_1f800034,(short)puVar17);
    if (iVar14 != 0) break;
    _DAT_1f800046 = _DAT_1f800046 - 0x50;
    _DAT_1f80004e = _DAT_1f80004e - 0x50;
    iVar7 = iVar7 + 1;
    uVar10 = (uint)(iVar7 < (int)uVar8);
  }
  psVar19 = (short *)(iVar7 + 1);
  _DAT_1f800036 = _DAT_1f800036 - 0xa0;
  _DAT_1f80003e = _DAT_1f80003e - 0xa0;
  iVar7 = _DAT_1f800046 - 0xa0;
  iVar14 = _DAT_1f80004e - 0xa0;
  do {
    iVar5 = func_0x80078240(iVar14 - iVar16,(int)psVar19[2] - (int)puVar15,
                            iVar7 - *(short *)(iVar5 + 0x164));
    iVar5 = iVar5 << 1;
    if (0x4000 < iVar21) {
      iVar21 = 0x4000;
    }
    if (0x4000 < iVar13) {
      iVar13 = 0x4000;
    }
    if (0x4000 < (int)puVar18) {
      puVar18 = (undefined1 *)0x4000;
    }
    if (0x4000 < iVar5) {
      iVar5 = 0x4000;
    }
    setCopReg(2,0x4000,iVar21);
    setCopReg(2,0x3000,puVar17[-9]);
    copFunction(2,0x780010);
    uVar10 = getCopReg(2,0x16);
    unaff_s6[1] = uVar10;
    setCopReg(2,0x4000,iVar13);
    setCopReg(2,0x3000,puVar17[-6]);
    copFunction(2,0x780010);
    uVar10 = getCopReg(2,0x16);
    unaff_s6[4] = uVar10;
    setCopReg(2,0x4000,puVar18);
    setCopReg(2,0x3000,puVar17[-3]);
    copFunction(2,0x780010);
    uVar10 = getCopReg(2,0x16);
    unaff_s6[7] = uVar10;
    setCopReg(2,0x4000,iVar5);
    setCopReg(2,0x3000,*puVar17);
    copFunction(2,0x780010);
    uVar10 = getCopReg(2,0x16);
    *puVar17 = uVar10;
    puVar9 = (uint *)(iVar23 + _DAT_1f800000 * 4);
    *unaff_s6 = *puVar9 | 0xc000000;
    *puVar9 = (uint)unaff_s6;
    uVar10 = uVar8;
    do {
      do {
        do {
          do {
            do {
              puVar9 = puVar22;
              psVar20 = psVar19;
              psVar19 = psVar20 + 0x16;
              puVar22 = puVar9 + 0xb;
              uVar8 = uVar10 - 1;
              if (uVar10 == 0) {
                _DAT_800bf544 = unaff_s6 + 0xd;
                return puVar22;
              }
              setCopReg(2,in_zero,puVar9[0x10]);
              setCopReg(2,0x800,puVar9[0x11]);
              setCopReg(2,0x1800,puVar9[0x11] >> 0x10);
              setCopReg(2,uVar10,puVar9[0x12]);
              setCopReg(2,0xc000000,puVar9[0x13]);
              setCopReg(2,0x2800,puVar9[0x14]);
              uVar10 = *puVar22;
              puVar17[4] = uVar10 & 0xfff0f0f0;
              copFunction(2,0x280030);
              puVar17[7] = uVar10 << 4 & uVar6;
              uVar11 = *(uint *)(psVar20 + 5);
              _DAT_1f800000 = getCopControlWord(2,0xf800);
              uVar10 = uVar8;
            } while (_DAT_1f800000 < 0);
            copFunction(2,0x1400006);
            puVar17[6] = *(uint *)(psVar20 + 7);
            _DAT_1f800000 = getCopReg(2,0x18);
          } while (_DAT_1f800000 < 1);
          uVar12 = getCopReg(2,0xc);
          unaff_s6[0xf] = uVar12;
          uVar12 = getCopReg(2,0xd);
          unaff_s6[0x12] = uVar12;
          uVar12 = getCopReg(2,0xe);
          unaff_s6[0x15] = uVar12;
          setCopReg(2,in_zero,puVar9[0x15]);
          setCopReg(2,0x800,puVar9[0x14] >> 0x10);
          puVar17[10] = uVar11 & uVar6;
          copFunction(2,0x180001);
          puVar17[0xd] = uVar11 << 4 & uVar6;
          puVar17[9] = *(uint *)(psVar20 + 9);
          _DAT_1f800000 = getCopControlWord(2,0xf800);
        } while (_DAT_1f800000 < 0);
        uVar12 = getCopReg(2,0xe);
        unaff_s6[0x18] = uVar12;
      } while ((((((0x13f < (ushort)puVar17[5]) && (0x13f < (ushort)puVar17[8])) &&
                 (0x13f < (ushort)puVar17[0xb])) && (0x13f < (ushort)puVar17[0xe])) ||
               (((uVar11 = uVar11 >> 0x18, 0xef < *(ushort *)((int)puVar17 + 0x16) &&
                 (0xef < *(ushort *)((int)puVar17 + 0x22))) &&
                ((0xef < *(ushort *)((int)puVar17 + 0x2e) &&
                 (0xef < *(ushort *)((int)puVar17 + 0x3a))))))) ||
              (((uVar11 & 0x40) != 0 && (_DAT_1f80009c != 0))));
      _DAT_1f800084 = getCopReg(2,0x10);
      _DAT_1f800088 = getCopReg(2,0x11);
      _DAT_1f80008c = getCopReg(2,0x12);
      _DAT_1f800090 = getCopReg(2,0x13);
      uVar12 = uVar11 & 3;
      iVar5 = _DAT_1f800090;
      iVar13 = _DAT_1f800088;
      if (uVar12 == 2) {
        if (_DAT_1f800084 < _DAT_1f800088) {
          iVar13 = _DAT_1f800084;
        }
        bVar3 = iVar13 < _DAT_1f800090;
        if (_DAT_1f80008c < _DAT_1f800090) {
          bVar3 = iVar13 < _DAT_1f80008c;
          iVar5 = _DAT_1f80008c;
        }
LAB_80128f4c:
        if (!bVar3) goto LAB_80128f5c;
        goto LAB_80128f58;
      }
      if (uVar12 < 3) {
        if (uVar12 != 1) {
          halt_baddata();
        }
LAB_80128ebc:
        if (_DAT_1f800088 < _DAT_1f800084) {
          iVar13 = _DAT_1f800084;
        }
        bVar3 = _DAT_1f800090 < iVar13;
        if (_DAT_1f800090 < _DAT_1f80008c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_80128f4c;
      }
      if (uVar12 == 3) goto LAB_80128ebc;
      copFunction(2,0x168002e);
      _DAT_1f800000 = getCopReg(2,7);
      if (((uVar11 & 8) != 0) && (_DAT_1f800000 = _DAT_1f800000 + 0x80, 0x7ff < _DAT_1f800000)) {
        _DAT_1f800000 = 0x7ff;
      }
      _DAT_1f800000 =
           (_DAT_1f800000 >> (_DAT_1f800000 >> 10 & 0x1fU)) + (_DAT_1f800000 >> 10) * 0x200;
      if (0x7fb < _DAT_1f800000 - 4U) {
        _DAT_1f800000 = -1;
      }
    } while (_DAT_1f800000 < 0);
    uVar10 = *(uint *)(psVar20 + 0xb);
    puVar17[0xc] = uVar10;
    puVar17[0xf] = uVar10 >> 0x10;
    if (in_stack_00000034 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar21 = func_0x80078240((int)psVar20[0xd] - (int)_DAT_1f800160,
                             (int)psVar20[0xe] - (int)_DAT_1f800162,
                             (int)psVar20[0xf] - (int)_DAT_1f800164);
    iVar21 = iVar21 << 1;
    iVar13 = func_0x80078240((int)psVar20[0x11] - (int)_DAT_1f800160,
                             (int)psVar20[0x12] - (int)_DAT_1f800162,
                             (int)psVar20[0x10] - (int)_DAT_1f800164);
    iVar13 = iVar13 << 1;
    iVar5 = func_0x80078240((int)psVar20[0x13] - (int)_DAT_1f800160,
                            (int)psVar20[0x14] - (int)_DAT_1f800162,
                            (int)psVar20[0x15] - (int)_DAT_1f800164);
    puVar18 = (undefined1 *)(iVar5 << 1);
    iVar16 = (int)_DAT_1f800160;
    puVar15 = (undefined1 *)(int)_DAT_1f800162;
    iVar5 = 0x1f800000;
    iVar14 = (int)psVar20[0x17];
    iVar7 = (int)*psVar19;
    puVar17 = puVar17 + 0xd;
    unaff_s6 = unaff_s6 + 0xd;
  } while( true );
}

