// FUN_8011fb6c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8011fb6c(int param_1)

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
  undefined1 *puVar14;
  int iVar15;
  uint *puVar16;
  undefined1 *puVar17;
  short *psVar18;
  short *psVar19;
  int iVar20;
  uint *unaff_s6;
  int iVar21;
  uint *puVar22;
  int unaff_retaddr;
  int iStackX_4;
  short local_38;
  short local_34;
  
  puVar17 = &DAT_1f800034;
  puVar22 = (uint *)0x0;
  iVar5 = (uint)*(ushort *)(param_1 + 0x6c) << 0x10;
  iVar5 = (iVar5 >> 0x10) - (iVar5 >> 0x1f) >> 1;
  iVar20 = *(int *)(param_1 + 0xc0);
  uVar6 = -iVar5;
  local_34 = (short)uVar6;
  _DAT_1f800034 = local_34;
  local_38 = (short)iVar5;
  _DAT_1f80003c = local_38;
  _DAT_1f800044 = local_34;
  _DAT_1f80004c = local_38;
  if (*(char *)(param_1 + 0x47) != '\x02') {
    DAT_1f800007 = 0x3c;
    _DAT_1f80001a = *(undefined2 *)(param_1 + 0x60);
    _DAT_1f80000e = *(undefined2 *)(param_1 + 0x62);
    uVar1 = *(undefined2 *)(param_1 + 0x68);
    uVar2 = *(undefined2 *)(param_1 + 0x6a);
    DAT_1f80000d = (char)((ushort)uVar1 >> 8);
    DAT_1f800019 = (char)((ushort)uVar2 >> 8);
    _DAT_1f800024 = CONCAT11(DAT_1f80000d + '\n',(char)uVar1);
    _DAT_1f800030 = CONCAT11(DAT_1f800019 + '\n',(char)uVar2);
    _DAT_1f800036 = *(ushort *)(iVar20 + 0x3a);
    _DAT_1f800038 = 0;
    _DAT_1f80003e = *(undefined2 *)(iVar20 + 0x3a);
    _DAT_1f800040 = 0;
    _DAT_1f800048 = 0x14;
    _DAT_1f800046 = *(short *)(iVar20 + 0x3a) + 0x32;
    _DAT_1f800050 = 0x14;
    _DAT_1f80004e = *(short *)(iVar20 + 0x3a) + 0x32;
    _DAT_1f80000c = uVar1;
    _DAT_1f800018 = uVar2;
    sVar4 = FUN_80128864(param_1,(int)(((uint)*(ushort *)(iVar20 + 0x30) + (uint)_DAT_1f800036) *
                                      0x10000) >> 0x10,0x1f800000);
    if (10 < *(byte *)(param_1 + 3)) {
      sVar4 = 0x20;
    }
    func_0x80133f38(0x1f800000,&DAT_1f800034,(int)sVar4);
    _DAT_1f80000c = *(undefined2 *)(param_1 + 100);
    _DAT_1f800018 = *(undefined2 *)(param_1 + 0x66);
    _DAT_1f800024 = *(undefined2 *)(param_1 + 0x68);
    _DAT_1f800030 = *(undefined2 *)(param_1 + 0x6a);
    _DAT_1f800048 = 0;
    _DAT_1f800050 = 0;
    _DAT_1f800036 = *(short *)(iVar20 + 0x3a) - 0x50;
    _DAT_1f80003e = *(short *)(iVar20 + 0x3a) + -0x50;
    _DAT_1f800046 = *(ushort *)(iVar20 + 0x3a);
    _DAT_1f80004e = *(ushort *)(iVar20 + 0x3a);
    iVar5 = 0;
    uVar6 = *(ushort *)(iVar20 + 0x3a) / 0x50;
    iVar21 = uVar6 + 1;
    while( true ) {
      if (*(short *)(param_1 + 0x7e) != 0) {
        iVar7 = func_0x80083e80((int)*(short *)(param_1 + 0x7c));
        iVar13 = (iVar5 + 1) * 0x800;
        if (iVar21 == 0) {
          trap(0x1c00);
        }
        if ((iVar21 == -1) && (iVar13 == -0x80000000)) {
          trap(0x1800);
        }
        sVar4 = *(short *)(param_1 + 0x7e);
        iVar13 = func_0x80083e80(iVar13 / iVar21);
        if (iVar21 == 0) {
          trap(0x1c00);
        }
        if ((iVar21 == -1) && (iVar5 << 0xb == -0x80000000)) {
          trap(0x1800);
        }
        iVar15 = (int)(short)(sVar4 * iVar7 >> 0xc);
        _DAT_1f80003c = (short)(iVar15 * iVar13 >> 0xc);
        _DAT_1f800034 = _DAT_1f80003c + local_34;
        _DAT_1f80003c = _DAT_1f80003c + local_38;
        iVar7 = func_0x80083e80((iVar5 << 0xb) / iVar21);
        sVar4 = (short)(iVar15 * iVar7 >> 0xc);
        _DAT_1f800044 = sVar4 + local_34;
        _DAT_1f80004c = sVar4 + local_38;
        if (*(char *)(param_1 + 0x29) != '\0') {
          if ((*(int *)(iVar20 + 0x30) + (int)(short)_DAT_1f800036 <= (int)_DAT_1f800162) &&
             ((int)_DAT_1f800162 < *(int *)(iVar20 + 0x30) + (int)(short)_DAT_1f800046)) {
            if ((DAT_800e7fc7 & 1) == 0) {
              _DAT_800e7fd2 = *(short *)(param_1 + 0x82) - (*(short *)(param_1 + 0x80) + sVar4);
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            _DAT_800e7fd2 = *(short *)(param_1 + 0x80) + sVar4;
          }
        }
      }
      sVar4 = FUN_80128864(param_1,(int)(((uint)*(ushort *)(iVar20 + 0x30) + (uint)_DAT_1f800036) *
                                        0x10000) >> 0x10,0x1f800000);
      if (10 < *(byte *)(param_1 + 3)) {
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
    iVar20 = _DAT_1f80004e - 0xa0;
LAB_80128f58:
    iVar5 = iVar20;
LAB_80128f5c:
    _DAT_1f800000 = iVar5 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar16 = (uint *)0x10;
  if ((*(char *)(param_1 + 3) != '\x01') &&
     (puVar16 = (uint *)0x0, *(char *)(param_1 + 3) == '\x04')) {
    puVar16 = (uint *)&DAT_0000005c;
  }
  DAT_1f800007 = 0x3d;
  _DAT_1f80001a = *(undefined2 *)(param_1 + 0x60);
  _DAT_1f80000e = *(undefined2 *)(param_1 + 0x62);
  _DAT_1f80000c = *(undefined2 *)(param_1 + 100);
  _DAT_1f800018 = *(undefined2 *)(param_1 + 0x66);
  _DAT_1f800024 = *(undefined2 *)(param_1 + 0x68);
  _DAT_1f800030 = *(undefined2 *)(param_1 + 0x6a);
  _DAT_1f800038 = 0;
  _DAT_1f800046 = *(ushort *)(iVar20 + 0x3a) >> 1;
  _DAT_1f800040 = 0;
  _DAT_1f800048 = 0;
  _DAT_1f800050 = 0;
  _DAT_1f80004e = *(ushort *)(iVar20 + 0x3a) >> 1;
  iVar5 = (int)((ulonglong)*(ushort *)(iVar20 + 0x3a) * 0xcccccccd >> 0x20);
  iVar21 = 0;
  uVar8 = *(ushort *)(iVar20 + 0x3a) / 0x50;
  uVar10 = uVar8;
  _DAT_1f800036 = _DAT_1f800046;
  _DAT_1f80003e = _DAT_1f80004e;
  while( true ) {
    _DAT_1f80003e = _DAT_1f80003e - 0x50;
    _DAT_1f800036 = _DAT_1f800036 - 0x50;
    if (uVar10 == 0) {
      return (uint *)0x0;
    }
    iVar13 = 0x1f800000;
    puVar14 = puVar17;
    iVar7 = func_0x80133f38(0x1f800000,&DAT_1f800034,(short)puVar16);
    if (iVar7 != 0) break;
    _DAT_1f800046 = _DAT_1f800046 - 0x50;
    _DAT_1f80004e = _DAT_1f80004e - 0x50;
    iVar21 = iVar21 + 1;
    uVar10 = (uint)(iVar21 < (int)uVar8);
  }
  psVar18 = (short *)(iVar21 + 1);
  _DAT_1f800036 = _DAT_1f800036 - 0xa0;
  _DAT_1f80003e = _DAT_1f80003e - 0xa0;
  iVar21 = _DAT_1f800046 - 0xa0;
  iVar7 = _DAT_1f80004e - 0xa0;
  do {
    iVar5 = func_0x80078240(iVar7 - iVar13,(int)psVar18[2] - (int)puVar14,
                            iVar21 - *(short *)(iVar5 + 0x164));
    iVar5 = iVar5 << 1;
    if (0x4000 < iVar20) {
      iVar20 = 0x4000;
    }
    if (0x4000 < param_1) {
      param_1 = 0x4000;
    }
    if (0x4000 < (int)puVar17) {
      puVar17 = (undefined1 *)0x4000;
    }
    if (0x4000 < iVar5) {
      iVar5 = 0x4000;
    }
    setCopReg(2,0x4000,iVar20);
    setCopReg(2,0x3000,puVar16[-9]);
    copFunction(2,0x780010);
    uVar10 = getCopReg(2,0x16);
    unaff_s6[1] = uVar10;
    setCopReg(2,0x4000,param_1);
    setCopReg(2,0x3000,puVar16[-6]);
    copFunction(2,0x780010);
    uVar10 = getCopReg(2,0x16);
    unaff_s6[4] = uVar10;
    setCopReg(2,0x4000,puVar17);
    setCopReg(2,0x3000,puVar16[-3]);
    copFunction(2,0x780010);
    uVar10 = getCopReg(2,0x16);
    unaff_s6[7] = uVar10;
    setCopReg(2,0x4000,iVar5);
    setCopReg(2,0x3000,*puVar16);
    copFunction(2,0x780010);
    uVar10 = getCopReg(2,0x16);
    *puVar16 = uVar10;
    puVar9 = (uint *)(unaff_retaddr + _DAT_1f800000 * 4);
    *unaff_s6 = *puVar9 | 0xc000000;
    *puVar9 = (uint)unaff_s6;
    uVar10 = uVar8;
    do {
      do {
        do {
          do {
            do {
              puVar9 = puVar22;
              psVar19 = psVar18;
              psVar18 = psVar19 + 0x16;
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
              puVar16[4] = uVar10 & 0xfff0f0f0;
              copFunction(2,0x280030);
              puVar16[7] = uVar10 << 4 & uVar6;
              uVar11 = *(uint *)(psVar19 + 5);
              _DAT_1f800000 = getCopControlWord(2,0xf800);
              uVar10 = uVar8;
            } while (_DAT_1f800000 < 0);
            copFunction(2,0x1400006);
            puVar16[6] = *(uint *)(psVar19 + 7);
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
          puVar16[10] = uVar11 & uVar6;
          copFunction(2,0x180001);
          puVar16[0xd] = uVar11 << 4 & uVar6;
          puVar16[9] = *(uint *)(psVar19 + 9);
          _DAT_1f800000 = getCopControlWord(2,0xf800);
        } while (_DAT_1f800000 < 0);
        uVar12 = getCopReg(2,0xe);
        unaff_s6[0x18] = uVar12;
      } while ((((((0x13f < (ushort)puVar16[5]) && (0x13f < (ushort)puVar16[8])) &&
                 (0x13f < (ushort)puVar16[0xb])) && (0x13f < (ushort)puVar16[0xe])) ||
               (((uVar11 = uVar11 >> 0x18, 0xef < *(ushort *)((int)puVar16 + 0x16) &&
                 (0xef < *(ushort *)((int)puVar16 + 0x22))) &&
                ((0xef < *(ushort *)((int)puVar16 + 0x2e) &&
                 (0xef < *(ushort *)((int)puVar16 + 0x3a))))))) ||
              (((uVar11 & 0x40) != 0 && (_DAT_1f80009c != 0))));
      _DAT_1f800084 = getCopReg(2,0x10);
      _DAT_1f800088 = getCopReg(2,0x11);
      _DAT_1f80008c = getCopReg(2,0x12);
      _DAT_1f800090 = getCopReg(2,0x13);
      uVar12 = uVar11 & 3;
      iVar5 = _DAT_1f800090;
      iVar20 = _DAT_1f800088;
      if (uVar12 == 2) {
        if (_DAT_1f800084 < _DAT_1f800088) {
          iVar20 = _DAT_1f800084;
        }
        bVar3 = iVar20 < _DAT_1f800090;
        if (_DAT_1f80008c < _DAT_1f800090) {
          bVar3 = iVar20 < _DAT_1f80008c;
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
          iVar20 = _DAT_1f800084;
        }
        bVar3 = _DAT_1f800090 < iVar20;
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
    uVar10 = *(uint *)(psVar19 + 0xb);
    puVar16[0xc] = uVar10;
    puVar16[0xf] = uVar10 >> 0x10;
    if (iStackX_4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar20 = func_0x80078240((int)psVar19[0xd] - (int)_DAT_1f800160,
                             (int)psVar19[0xe] - (int)_DAT_1f800162,
                             (int)psVar19[0xf] - (int)_DAT_1f800164);
    iVar20 = iVar20 << 1;
    param_1 = func_0x80078240((int)psVar19[0x11] - (int)_DAT_1f800160,
                              (int)psVar19[0x12] - (int)_DAT_1f800162,
                              (int)psVar19[0x10] - (int)_DAT_1f800164);
    param_1 = param_1 << 1;
    iVar5 = func_0x80078240((int)psVar19[0x13] - (int)_DAT_1f800160,
                            (int)psVar19[0x14] - (int)_DAT_1f800162,
                            (int)psVar19[0x15] - (int)_DAT_1f800164);
    puVar17 = (undefined1 *)(iVar5 << 1);
    iVar13 = (int)_DAT_1f800160;
    puVar14 = (undefined1 *)(int)_DAT_1f800162;
    iVar5 = 0x1f800000;
    iVar7 = (int)psVar19[0x17];
    iVar21 = (int)*psVar18;
    puVar16 = puVar16 + 0xd;
    unaff_s6 = unaff_s6 + 0xd;
  } while( true );
}

