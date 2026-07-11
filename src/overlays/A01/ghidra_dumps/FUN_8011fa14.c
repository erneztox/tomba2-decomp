// FUN_8011fa14

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_8011fa14(uint param_1,undefined4 param_2,int param_3)

{
  undefined4 in_zero;
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  char cVar10;
  short in_t4;
  int *unaff_s2;
  short *unaff_s3;
  short *psVar11;
  int *unaff_s4;
  uint *unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  int unaff_s8;
  int in_stack_00000044;
  int in_stack_0000004c;
  
  cVar10 = -0x60;
  iVar9 = 0xa0;
  if (-0x918 < in_t4) {
    if ((_DAT_1f80017c & 3) == 0) {
      if (*(short *)(param_1 + 0x42) == 0) {
        uVar1 = *(ushort *)(param_1 + 0x40) - 1;
        while( true ) {
          if (uVar1 == 0) {
            *unaff_s4 = -1;
          }
          psVar11 = unaff_s3;
          iVar3 = unaff_s6;
          piVar2 = unaff_s7;
          if (-1 < *unaff_s4) {
            *(short *)(unaff_s2 + 2) = unaff_s3[1];
            if (in_stack_0000004c != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            iVar4 = func_0x80078240((int)unaff_s3[-8] - (int)_DAT_1f800160,
                                    (int)unaff_s3[-7] - (int)_DAT_1f800162,
                                    (int)unaff_s3[-6] - (int)_DAT_1f800164);
            iVar4 = iVar4 << 1;
            iVar5 = func_0x80078240((int)unaff_s3[-4] - (int)_DAT_1f800160,
                                    (int)unaff_s3[-3] - (int)_DAT_1f800162,
                                    (int)unaff_s3[-5] - (int)_DAT_1f800164);
            iVar5 = iVar5 << 1;
            iVar9 = (int)unaff_s3[-1] - (int)_DAT_1f800162;
            iVar6 = func_0x80078240((int)unaff_s3[-2] - (int)_DAT_1f800160,iVar9,
                                    (int)*unaff_s3 - (int)_DAT_1f800164);
            iVar6 = iVar6 << 1;
            if (0x4000 < iVar4) {
              iVar4 = 0x4000;
            }
            if (0x4000 < iVar5) {
              iVar5 = 0x4000;
            }
            if (0x4000 < iVar6) {
              iVar6 = 0x4000;
            }
            setCopReg(2,0x4000,iVar4);
            setCopReg(2,0x3000,unaff_s2[-6]);
            copFunction(2,0x780010);
            uVar1 = getCopReg(2,0x16);
            unaff_s5[1] = uVar1;
            setCopReg(2,0x4000,iVar5);
            setCopReg(2,0x3000,unaff_s2[-3]);
            copFunction(2,0x780010);
            uVar1 = getCopReg(2,0x16);
            unaff_s5[4] = uVar1;
            setCopReg(2,0x4000,iVar6);
            setCopReg(2,0x3000,*unaff_s2);
            copFunction(2,0x780010);
            iVar4 = getCopReg(2,0x16);
            *unaff_s2 = iVar4;
            puVar7 = (uint *)(in_stack_00000044 + *unaff_s4 * 4);
            param_1 = 0x9000000;
            *unaff_s5 = *puVar7 | 0x9000000;
            *puVar7 = (uint)unaff_s5;
            unaff_s2 = unaff_s2 + 10;
            unaff_s5 = unaff_s5 + 10;
          }
          do {
            do {
              do {
                do {
                  unaff_s3 = psVar11 + 0x12;
                  unaff_s7 = piVar2 + 9;
                  unaff_s6 = iVar3 + -1;
                  if (iVar3 == 0) {
                    _DAT_800bf544 = unaff_s5;
                    return unaff_s7;
                  }
                  setCopReg(2,in_zero,piVar2[0xd]);
                  setCopReg(2,iVar3,piVar2[0xf]);
                  setCopReg(2,0x800,piVar2[0xe]);
                  setCopReg(2,param_1,piVar2[0x10]);
                  setCopReg(2,0x1800,(uint)piVar2[0xe] >> 0x10);
                  setCopReg(2,iVar9,piVar2[0x11]);
                  unaff_s2[-6] = *unaff_s7;
                  copFunction(2,0x280030);
                  unaff_s2[-4] = *(int *)(psVar11 + 6);
                  unaff_s2[-1] = *(int *)(psVar11 + 8);
                  param_1 = *(uint *)(psVar11 + 4);
                  _DAT_1f800000 = getCopControlWord(2,0xf800);
                  psVar11 = unaff_s3;
                  iVar3 = unaff_s6;
                  piVar2 = unaff_s7;
                } while (_DAT_1f800000 < 0);
                copFunction(2,0x1400006);
                unaff_s2[-3] = param_1 & 0xf0f0f0;
                _DAT_1f800000 = getCopReg(2,0x18);
              } while (_DAT_1f800000 < 1);
              uVar1 = getCopReg(2,0xc);
              unaff_s5[2] = uVar1;
              uVar1 = getCopReg(2,0xd);
              unaff_s5[5] = uVar1;
              uVar1 = getCopReg(2,0xe);
              unaff_s5[8] = uVar1;
            } while ((((0x13f < *(ushort *)(unaff_s2 + -5)) && (0x13f < *(ushort *)(unaff_s2 + -2)))
                     && (0x13f < *(ushort *)(unaff_s2 + 1))) ||
                    (((0xef < *(ushort *)((int)unaff_s2 + -0x12) &&
                      (0xef < *(ushort *)((int)unaff_s2 + -6))) &&
                     (0xef < *(ushort *)((int)unaff_s2 + 6)))));
            *unaff_s2 = (param_1 & 0xf0f0f) << 4;
            _DAT_1f800084 = getCopReg(2,0x11);
            _DAT_1f800088 = getCopReg(2,0x12);
            _DAT_1f80008c = getCopReg(2,0x13);
            uVar1 = param_1 >> 0x18;
          } while (((uVar1 & 0x40) != 0) && (_DAT_1f80009c != 0));
          uVar8 = uVar1 & 3;
          if (uVar8 == 2) {
            if (_DAT_1f800084 < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            iVar9 = *(int *)(unaff_s8 + 0x8c) >> 2;
            if (_DAT_1f800088 < *(int *)(unaff_s8 + 0x8c)) {
              iVar9 = _DAT_1f800088 >> 2;
            }
            goto LAB_801289bc;
          }
          if (uVar8 < 3) break;
          if (uVar8 == 3) goto LAB_80128930;
          copFunction(2,0x158002d);
          iVar3 = getCopReg(2,7);
          *unaff_s4 = iVar3;
          if (((uVar1 & 8) != 0) &&
             (iVar3 = *unaff_s4, *unaff_s4 = iVar3 + 0x80, 0x7ff < iVar3 + 0x80)) {
            *unaff_s4 = 0x7ff;
          }
          uVar1 = *unaff_s4 >> 10;
          iVar3 = (*unaff_s4 >> (uVar1 & 0x1f)) + uVar1 * 0x200;
          *unaff_s4 = iVar3;
          uVar1 = (uint)(iVar3 - 4U < 0x7fc);
        }
        if (uVar8 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_80128930:
        if (_DAT_1f800084 <= _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar9 = *(int *)(unaff_s8 + 0x8c) >> 2;
        if (*(int *)(unaff_s8 + 0x8c) < _DAT_1f800084) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_801289bc:
        *unaff_s4 = iVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
      if ((-1 < *(short *)(param_1 + 0x40)) || (*(short *)(param_1 + 0x40) < -0x9f)) {
        *(short *)(param_1 + 0x42) = 1 - *(short *)(param_1 + 0x42);
      }
    }
    iVar9 = (int)((uint)*(ushort *)(param_1 + 0x40) << 0x10) >> 0x12;
    cVar10 = (char)iVar9 + -0x60;
    iVar9 = iVar9 + 0xa0;
  }
  *(undefined1 *)(param_3 + 4) = 0xf0;
  *(char *)(param_3 + 5) = cVar10;
  *(undefined1 *)(param_3 + 6) = 0;
  *(undefined1 *)(param_3 + 0x10) = 0xf0;
  *(char *)(param_3 + 0x11) = cVar10;
  *(undefined1 *)(param_3 + 0x12) = 0;
  *(undefined1 *)(param_3 + 0x1c) = 0xf0;
  *(char *)(param_3 + 0x1d) = (char)iVar9;
  *(undefined1 *)(param_3 + 0x1e) = 0;
  *(undefined1 *)(param_3 + 0x28) = 0xf0;
  *(char *)(param_3 + 0x29) = (char)iVar9;
  *(undefined1 *)(param_3 + 0x2a) = 0;
  piVar2 = (int *)FUN_80128ac8();
  return piVar2;
}

