// FUN_801290e4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_801290e4(void)

{
  bool bVar1;
  undefined4 in_zero;
  int iVar2;
  int in_v0;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint *unaff_s0;
  int unaff_s1;
  short *unaff_s2;
  short *psVar8;
  int unaff_s3;
  int unaff_s4;
  int *unaff_s5;
  uint *unaff_s6;
  uint *unaff_s7;
  int unaff_s8;
  uint in_stack_00000014;
  int in_stack_00000044;
  int in_stack_0000004c;
  
  do {
    iVar6 = in_v0 << 1;
    if (0x4000 < unaff_s4) {
      unaff_s4 = 0x4000;
    }
    if (0x4000 < unaff_s3) {
      unaff_s3 = 0x4000;
    }
    if (0x4000 < unaff_s1) {
      unaff_s1 = 0x4000;
    }
    if (0x4000 < iVar6) {
      iVar6 = 0x4000;
    }
    setCopReg(2,0x4000,unaff_s4);
    setCopReg(2,0x3000,unaff_s0[-9]);
    copFunction(2,0x780010);
    uVar4 = getCopReg(2,0x16);
    unaff_s6[1] = uVar4;
    setCopReg(2,0x4000,unaff_s3);
    setCopReg(2,0x3000,unaff_s0[-6]);
    copFunction(2,0x780010);
    uVar4 = getCopReg(2,0x16);
    unaff_s6[4] = uVar4;
    setCopReg(2,0x4000,unaff_s1);
    setCopReg(2,0x3000,unaff_s0[-3]);
    copFunction(2,0x780010);
    uVar4 = getCopReg(2,0x16);
    unaff_s6[7] = uVar4;
    setCopReg(2,0x4000,iVar6);
    setCopReg(2,0x3000,*unaff_s0);
    copFunction(2,0x780010);
    uVar4 = getCopReg(2,0x16);
    *unaff_s0 = uVar4;
    puVar3 = (uint *)(in_stack_00000044 + *unaff_s5 * 4);
    *unaff_s6 = *puVar3 | 0xc000000;
    *puVar3 = (uint)unaff_s6;
    iVar6 = unaff_s8;
    do {
      do {
        do {
          do {
            do {
              puVar3 = unaff_s7;
              psVar8 = unaff_s2;
              unaff_s2 = psVar8 + 0x16;
              unaff_s7 = puVar3 + 0xb;
              unaff_s8 = iVar6 + -1;
              if (iVar6 == 0) {
                _DAT_800bf544 = unaff_s6 + 0xd;
                return unaff_s7;
              }
              setCopReg(2,in_zero,puVar3[0x10]);
              setCopReg(2,0x800,puVar3[0x11]);
              setCopReg(2,0x1800,puVar3[0x11] >> 0x10);
              setCopReg(2,iVar6,puVar3[0x12]);
              setCopReg(2,0xc000000,puVar3[0x13]);
              setCopReg(2,0x2800,puVar3[0x14]);
              uVar4 = *unaff_s7;
              unaff_s0[4] = uVar4 & 0xfff0f0f0;
              copFunction(2,0x280030);
              unaff_s0[7] = uVar4 << 4 & in_stack_00000014;
              uVar4 = *(uint *)(psVar8 + 5);
              _DAT_1f800000 = getCopControlWord(2,0xf800);
              iVar6 = unaff_s8;
            } while (_DAT_1f800000 < 0);
            copFunction(2,0x1400006);
            unaff_s0[6] = *(uint *)(psVar8 + 7);
            _DAT_1f800000 = getCopReg(2,0x18);
          } while (_DAT_1f800000 < 1);
          uVar5 = getCopReg(2,0xc);
          unaff_s6[0xf] = uVar5;
          uVar5 = getCopReg(2,0xd);
          unaff_s6[0x12] = uVar5;
          uVar5 = getCopReg(2,0xe);
          unaff_s6[0x15] = uVar5;
          setCopReg(2,in_zero,puVar3[0x15]);
          setCopReg(2,0x800,puVar3[0x14] >> 0x10);
          unaff_s0[10] = uVar4 & in_stack_00000014;
          copFunction(2,0x180001);
          unaff_s0[0xd] = uVar4 << 4 & in_stack_00000014;
          unaff_s0[9] = *(uint *)(psVar8 + 9);
          _DAT_1f800000 = getCopControlWord(2,0xf800);
        } while (_DAT_1f800000 < 0);
        uVar5 = getCopReg(2,0xe);
        unaff_s6[0x18] = uVar5;
      } while ((((((0x13f < (ushort)unaff_s0[5]) && (0x13f < (ushort)unaff_s0[8])) &&
                 (0x13f < (ushort)unaff_s0[0xb])) && (0x13f < (ushort)unaff_s0[0xe])) ||
               (((uVar4 = uVar4 >> 0x18, 0xef < *(ushort *)((int)unaff_s0 + 0x16) &&
                 (0xef < *(ushort *)((int)unaff_s0 + 0x22))) &&
                ((0xef < *(ushort *)((int)unaff_s0 + 0x2e) &&
                 (0xef < *(ushort *)((int)unaff_s0 + 0x3a))))))) ||
              (((uVar4 & 0x40) != 0 && (_DAT_1f80009c != 0))));
      _DAT_1f800084 = getCopReg(2,0x10);
      _DAT_1f800088 = getCopReg(2,0x11);
      _DAT_1f80008c = getCopReg(2,0x12);
      _DAT_1f800090 = getCopReg(2,0x13);
      uVar5 = uVar4 & 3;
      iVar2 = _DAT_1f800090;
      iVar7 = _DAT_1f800088;
      if (uVar5 == 2) {
        if (_DAT_1f800084 < _DAT_1f800088) {
          iVar7 = _DAT_1f800084;
        }
        bVar1 = iVar7 < _DAT_1f800090;
        if (_DAT_1f80008c < _DAT_1f800090) {
          bVar1 = iVar7 < _DAT_1f80008c;
          iVar2 = _DAT_1f80008c;
        }
        goto LAB_80128f4c;
      }
      if (uVar5 < 3) {
        if (uVar5 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_80128ebc:
        if (_DAT_1f800088 < _DAT_1f800084) {
          iVar7 = _DAT_1f800084;
        }
        bVar1 = _DAT_1f800090 < iVar7;
        if (_DAT_1f800090 < _DAT_1f80008c) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_80128f4c:
        if (bVar1) {
          iVar2 = iVar7;
        }
        *unaff_s5 = iVar2 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar5 == 3) goto LAB_80128ebc;
      copFunction(2,0x168002e);
      iVar2 = getCopReg(2,7);
      *unaff_s5 = iVar2;
      if (((uVar4 & 8) != 0) && (iVar2 = *unaff_s5, *unaff_s5 = iVar2 + 0x80, 0x7ff < iVar2 + 0x80))
      {
        *unaff_s5 = 0x7ff;
      }
      uVar4 = *unaff_s5 >> 10;
      iVar2 = (*unaff_s5 >> (uVar4 & 0x1f)) + uVar4 * 0x200;
      *unaff_s5 = iVar2;
      if (0x7fb < iVar2 - 4U) {
        *unaff_s5 = -1;
      }
    } while (*unaff_s5 < 0);
    uVar4 = *(uint *)(psVar8 + 0xb);
    unaff_s0[0xc] = uVar4;
    unaff_s0[0xf] = uVar4 >> 0x10;
    if (in_stack_0000004c != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar6 = func_0x80078240((int)psVar8[0xd] - (int)_DAT_1f800160,
                            (int)psVar8[0xe] - (int)_DAT_1f800162,
                            (int)psVar8[0xf] - (int)_DAT_1f800164);
    unaff_s4 = iVar6 << 1;
    iVar6 = func_0x80078240((int)psVar8[0x11] - (int)_DAT_1f800160,
                            (int)psVar8[0x12] - (int)_DAT_1f800162,
                            (int)psVar8[0x10] - (int)_DAT_1f800164);
    unaff_s3 = iVar6 << 1;
    iVar6 = func_0x80078240((int)psVar8[0x13] - (int)_DAT_1f800160,
                            (int)psVar8[0x14] - (int)_DAT_1f800162,
                            (int)psVar8[0x15] - (int)_DAT_1f800164);
    unaff_s1 = iVar6 << 1;
    in_v0 = func_0x80078240((int)psVar8[0x17] - (int)_DAT_1f800160,
                            (int)psVar8[0x18] - (int)_DAT_1f800162,
                            (int)*unaff_s2 - (int)_DAT_1f800164);
    unaff_s0 = unaff_s0 + 0xd;
    unaff_s6 = unaff_s6 + 0xd;
  } while( true );
}

