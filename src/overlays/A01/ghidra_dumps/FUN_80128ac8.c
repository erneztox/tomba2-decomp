// FUN_80128ac8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_80128ac8(void)

{
  undefined4 in_zero;
  int in_v0;
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int unaff_s1;
  int *unaff_s2;
  short *unaff_s3;
  short *psVar8;
  int *unaff_s4;
  uint *unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  int *piVar9;
  int unaff_s8;
  int in_stack_00000044;
  int in_stack_0000004c;
  
  do {
    iVar7 = in_v0 << 1;
    iVar5 = (int)unaff_s3[-1] - (int)_DAT_1f800162;
    iVar1 = func_0x80078240((int)unaff_s3[-2] - (int)_DAT_1f800160,iVar5,
                            (int)*unaff_s3 - (int)_DAT_1f800164);
    iVar1 = iVar1 << 1;
    if (0x4000 < unaff_s1) {
      unaff_s1 = 0x4000;
    }
    if (0x4000 < iVar7) {
      iVar7 = 0x4000;
    }
    if (0x4000 < iVar1) {
      iVar1 = 0x4000;
    }
    setCopReg(2,0x4000,unaff_s1);
    setCopReg(2,0x3000,unaff_s2[-6]);
    copFunction(2,0x780010);
    uVar4 = getCopReg(2,0x16);
    unaff_s5[1] = uVar4;
    setCopReg(2,0x4000,iVar7);
    setCopReg(2,0x3000,unaff_s2[-3]);
    copFunction(2,0x780010);
    uVar4 = getCopReg(2,0x16);
    unaff_s5[4] = uVar4;
    setCopReg(2,0x4000,iVar1);
    setCopReg(2,0x3000,*unaff_s2);
    copFunction(2,0x780010);
    iVar1 = getCopReg(2,0x16);
    *unaff_s2 = iVar1;
    puVar2 = (uint *)(in_stack_00000044 + *unaff_s4 * 4);
    uVar4 = 0x9000000;
    *unaff_s5 = *puVar2 | 0x9000000;
    *puVar2 = (uint)unaff_s5;
    iVar1 = unaff_s6;
    piVar9 = unaff_s7;
    do {
      do {
        do {
          do {
            do {
              psVar8 = unaff_s3;
              unaff_s3 = psVar8 + 0x12;
              unaff_s7 = piVar9 + 9;
              unaff_s6 = iVar1 + -1;
              if (iVar1 == 0) {
                _DAT_800bf544 = unaff_s5 + 10;
                return unaff_s7;
              }
              setCopReg(2,in_zero,piVar9[0xd]);
              setCopReg(2,iVar1,piVar9[0xf]);
              setCopReg(2,0x800,piVar9[0xe]);
              setCopReg(2,uVar4,piVar9[0x10]);
              setCopReg(2,0x1800,(uint)piVar9[0xe] >> 0x10);
              setCopReg(2,iVar5,piVar9[0x11]);
              unaff_s2[4] = *unaff_s7;
              copFunction(2,0x280030);
              unaff_s2[6] = *(int *)(psVar8 + 6);
              unaff_s2[9] = *(int *)(psVar8 + 8);
              uVar4 = *(uint *)(psVar8 + 4);
              _DAT_1f800000 = getCopControlWord(2,0xf800);
              iVar1 = unaff_s6;
              piVar9 = unaff_s7;
            } while (_DAT_1f800000 < 0);
            copFunction(2,0x1400006);
            unaff_s2[7] = uVar4 & 0xf0f0f0;
            _DAT_1f800000 = getCopReg(2,0x18);
          } while (_DAT_1f800000 < 1);
          uVar6 = getCopReg(2,0xc);
          unaff_s5[0xc] = uVar6;
          uVar6 = getCopReg(2,0xd);
          unaff_s5[0xf] = uVar6;
          uVar6 = getCopReg(2,0xe);
          unaff_s5[0x12] = uVar6;
        } while ((((0x13f < *(ushort *)(unaff_s2 + 5)) && (0x13f < *(ushort *)(unaff_s2 + 8))) &&
                 (0x13f < *(ushort *)(unaff_s2 + 0xb))) ||
                (((0xef < *(ushort *)((int)unaff_s2 + 0x16) &&
                  (0xef < *(ushort *)((int)unaff_s2 + 0x22))) &&
                 (0xef < *(ushort *)((int)unaff_s2 + 0x2e)))));
        unaff_s2[10] = (uVar4 & 0xf0f0f) << 4;
        _DAT_1f800084 = getCopReg(2,0x11);
        _DAT_1f800088 = getCopReg(2,0x12);
        _DAT_1f80008c = getCopReg(2,0x13);
        uVar6 = uVar4 >> 0x18;
      } while (((uVar6 & 0x40) != 0) && (_DAT_1f80009c != 0));
      uVar3 = uVar6 & 3;
      if (uVar3 == 2) {
        if (_DAT_1f800084 < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar1 = *(int *)(unaff_s8 + 0x8c) >> 2;
        if (_DAT_1f800088 < *(int *)(unaff_s8 + 0x8c)) {
          iVar1 = _DAT_1f800088 >> 2;
        }
        goto LAB_801289bc;
      }
      if (uVar3 < 3) {
        if (uVar3 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_80128930:
        if (_DAT_1f800084 <= _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar1 = *(int *)(unaff_s8 + 0x8c) >> 2;
        if (*(int *)(unaff_s8 + 0x8c) < _DAT_1f800084) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_801289bc:
        *unaff_s4 = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar3 == 3) goto LAB_80128930;
      copFunction(2,0x158002d);
      iVar7 = getCopReg(2,7);
      *unaff_s4 = iVar7;
      if (((uVar6 & 8) != 0) && (iVar7 = *unaff_s4, *unaff_s4 = iVar7 + 0x80, 0x7ff < iVar7 + 0x80))
      {
        *unaff_s4 = 0x7ff;
      }
      uVar6 = *unaff_s4 >> 10;
      iVar7 = (*unaff_s4 >> (uVar6 & 0x1f)) + uVar6 * 0x200;
      *unaff_s4 = iVar7;
      if (0x7fb < iVar7 - 4U) {
        *unaff_s4 = -1;
      }
    } while (*unaff_s4 < 0);
    *(short *)(unaff_s2 + 0xc) = psVar8[0x13];
    if (in_stack_0000004c != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = func_0x80078240((int)psVar8[10] - (int)_DAT_1f800160,
                            (int)psVar8[0xb] - (int)_DAT_1f800162,
                            (int)psVar8[0xc] - (int)_DAT_1f800164);
    unaff_s1 = iVar1 << 1;
    in_v0 = func_0x80078240((int)psVar8[0xe] - (int)_DAT_1f800160,
                            (int)psVar8[0xf] - (int)_DAT_1f800162,
                            (int)psVar8[0xd] - (int)_DAT_1f800164);
    unaff_s2 = unaff_s2 + 10;
    unaff_s5 = unaff_s5 + 10;
  } while( true );
}

