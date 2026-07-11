// FUN_80128864

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_80128864(uint param_1,int param_2)

{
  undefined4 in_zero;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
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
    psVar8 = unaff_s3;
    iVar1 = unaff_s6;
    piVar9 = unaff_s7;
    if (((*(ushort *)((int)unaff_s2 + -0x12) < 0xf0) || (*(ushort *)((int)unaff_s2 + -6) < 0xf0)) ||
       (*(ushort *)((int)unaff_s2 + 6) < 0xf0)) {
      *unaff_s2 = (param_1 & 0xf0f0f) << 4;
      _DAT_1f800084 = getCopReg(2,0x11);
      _DAT_1f800088 = getCopReg(2,0x12);
      _DAT_1f80008c = getCopReg(2,0x13);
      uVar7 = param_1 >> 0x18;
      if (((uVar7 & 0x40) == 0) || (_DAT_1f80009c == 0)) {
        uVar6 = uVar7 & 3;
        if (uVar6 == 2) {
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
        if (uVar6 < 3) {
          if (uVar6 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        else if (uVar6 != 3) {
          copFunction(2,0x158002d);
          iVar2 = getCopReg(2,7);
          *unaff_s4 = iVar2;
          if (((uVar7 & 8) != 0) &&
             (iVar2 = *unaff_s4, *unaff_s4 = iVar2 + 0x80, 0x7ff < iVar2 + 0x80)) {
            *unaff_s4 = 0x7ff;
          }
          uVar7 = *unaff_s4 >> 10;
          iVar2 = (*unaff_s4 >> (uVar7 & 0x1f)) + uVar7 * 0x200;
          *unaff_s4 = iVar2;
          if (0x7fb < iVar2 - 4U) {
            *unaff_s4 = -1;
          }
          if (-1 < *unaff_s4) {
            *(short *)(unaff_s2 + 2) = unaff_s3[1];
            if (in_stack_0000004c != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            iVar2 = func_0x80078240((int)unaff_s3[-8] - (int)_DAT_1f800160,
                                    (int)unaff_s3[-7] - (int)_DAT_1f800162,
                                    (int)unaff_s3[-6] - (int)_DAT_1f800164);
            iVar2 = iVar2 << 1;
            iVar3 = func_0x80078240((int)unaff_s3[-4] - (int)_DAT_1f800160,
                                    (int)unaff_s3[-3] - (int)_DAT_1f800162,
                                    (int)unaff_s3[-5] - (int)_DAT_1f800164);
            iVar3 = iVar3 << 1;
            param_2 = (int)unaff_s3[-1] - (int)_DAT_1f800162;
            iVar4 = func_0x80078240((int)unaff_s3[-2] - (int)_DAT_1f800160,param_2,
                                    (int)*unaff_s3 - (int)_DAT_1f800164);
            iVar4 = iVar4 << 1;
            if (0x4000 < iVar2) {
              iVar2 = 0x4000;
            }
            if (0x4000 < iVar3) {
              iVar3 = 0x4000;
            }
            if (0x4000 < iVar4) {
              iVar4 = 0x4000;
            }
            setCopReg(2,0x4000,iVar2);
            setCopReg(2,0x3000,unaff_s2[-6]);
            copFunction(2,0x780010);
            uVar7 = getCopReg(2,0x16);
            unaff_s5[1] = uVar7;
            setCopReg(2,0x4000,iVar3);
            setCopReg(2,0x3000,unaff_s2[-3]);
            copFunction(2,0x780010);
            uVar7 = getCopReg(2,0x16);
            unaff_s5[4] = uVar7;
            setCopReg(2,0x4000,iVar4);
            setCopReg(2,0x3000,*unaff_s2);
            copFunction(2,0x780010);
            iVar2 = getCopReg(2,0x16);
            *unaff_s2 = iVar2;
            puVar5 = (uint *)(in_stack_00000044 + *unaff_s4 * 4);
            param_1 = 0x9000000;
            *unaff_s5 = *puVar5 | 0x9000000;
            *puVar5 = (uint)unaff_s5;
            unaff_s2 = unaff_s2 + 10;
            unaff_s5 = unaff_s5 + 10;
          }
          goto LAB_80128bc4;
        }
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
    }
LAB_80128bc4:
    do {
      do {
        do {
          unaff_s3 = psVar8 + 0x12;
          unaff_s7 = piVar9 + 9;
          unaff_s6 = iVar1 + -1;
          if (iVar1 == 0) {
            _DAT_800bf544 = unaff_s5;
            return unaff_s7;
          }
          setCopReg(2,in_zero,piVar9[0xd]);
          setCopReg(2,iVar1,piVar9[0xf]);
          setCopReg(2,0x800,piVar9[0xe]);
          setCopReg(2,param_1,piVar9[0x10]);
          setCopReg(2,0x1800,(uint)piVar9[0xe] >> 0x10);
          setCopReg(2,param_2,piVar9[0x11]);
          unaff_s2[-6] = *unaff_s7;
          copFunction(2,0x280030);
          unaff_s2[-4] = *(int *)(psVar8 + 6);
          unaff_s2[-1] = *(int *)(psVar8 + 8);
          param_1 = *(uint *)(psVar8 + 4);
          _DAT_1f800000 = getCopControlWord(2,0xf800);
          psVar8 = unaff_s3;
          iVar1 = unaff_s6;
          piVar9 = unaff_s7;
        } while (_DAT_1f800000 < 0);
        copFunction(2,0x1400006);
        unaff_s2[-3] = param_1 & 0xf0f0f0;
        _DAT_1f800000 = getCopReg(2,0x18);
      } while (_DAT_1f800000 < 1);
      uVar7 = getCopReg(2,0xc);
      unaff_s5[2] = uVar7;
      uVar7 = getCopReg(2,0xd);
      unaff_s5[5] = uVar7;
      uVar7 = getCopReg(2,0xe);
      unaff_s5[8] = uVar7;
    } while (((0x13f < *(ushort *)(unaff_s2 + -5)) && (0x13f < *(ushort *)(unaff_s2 + -2))) &&
            (0x13f < *(ushort *)(unaff_s2 + 1)));
  } while( true );
}

