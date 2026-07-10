// FUN_000331d8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_000331d8(undefined4 param_1,int param_2)

{
  undefined4 in_zero;
  int in_v0;
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int *unaff_s1;
  short *unaff_s3;
  int *unaff_s4;
  uint *unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  int *piVar7;
  int unaff_s8;
  int in_stack_00000044;
  int in_stack_0000004c;
  
  do {
    unaff_s1[-6] = in_v0;
    copFunction(2,0x280030);
    unaff_s1[-4] = *(int *)(unaff_s3 + -0xc);
    unaff_s1[-1] = *(int *)(unaff_s3 + -10);
    uVar6 = *(uint *)(unaff_s3 + -0xe);
    _DAT_1f800000 = getCopControlWord(2,0xf800);
    if (-1 < _DAT_1f800000) {
      copFunction(2,0x1400006);
      unaff_s1[-3] = uVar6 & 0xf0f0f0;
      _DAT_1f800000 = getCopReg(2,0x18);
      if (0 < _DAT_1f800000) {
        uVar5 = getCopReg(2,0xc);
        unaff_s5[2] = uVar5;
        uVar5 = getCopReg(2,0xd);
        unaff_s5[5] = uVar5;
        uVar5 = getCopReg(2,0xe);
        unaff_s5[8] = uVar5;
        if ((((*(ushort *)(unaff_s1 + -5) < 0x140) || (*(ushort *)(unaff_s1 + -2) < 0x140)) ||
            (*(ushort *)(unaff_s1 + 1) < 0x140)) &&
           (((*(ushort *)((int)unaff_s1 + -0x12) < 0xf0 || (*(ushort *)((int)unaff_s1 + -6) < 0xf0))
            || (*(ushort *)((int)unaff_s1 + 6) < 0xf0)))) {
          *unaff_s1 = (uVar6 & 0xf0f0f) << 4;
          _DAT_1f800084 = getCopReg(2,0x11);
          _DAT_1f800088 = getCopReg(2,0x12);
          _DAT_1f80008c = getCopReg(2,0x13);
          if (((uVar6 >> 0x18 & 4) == 0) || (_DAT_1f80009c == 0)) {
            uVar5 = uVar6 >> 0x18 & 3;
            if (uVar5 == 2) {
              if (_DAT_1f800084 < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              iVar1 = *(int *)(unaff_s8 + 0x8c) >> 2;
              if (_DAT_1f800088 < *(int *)(unaff_s8 + 0x8c)) {
                iVar1 = _DAT_1f800088 >> 2;
              }
              goto LAB_000333ec;
            }
            if (uVar5 < 3) {
              if (uVar5 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
            }
            else if (uVar5 != 3) {
              copFunction(2,0x158002d);
              iVar1 = getCopReg(2,7);
              *unaff_s4 = iVar1;
              uVar5 = *unaff_s4 >> 10;
              iVar1 = (*unaff_s4 >> (uVar5 & 0x1f)) + uVar5 * 0x200;
              *unaff_s4 = iVar1;
              if (0x7fb < iVar1 - 4U) {
                *unaff_s4 = -1;
              }
              if (-1 < *unaff_s4) {
                *(short *)(unaff_s1 + 2) = unaff_s3[1];
                if (in_stack_0000004c != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                iVar1 = func_0x00078240((int)unaff_s3[-8] - (int)_DAT_1f800160,
                                        (int)unaff_s3[-7] - (int)_DAT_1f800162,
                                        (int)unaff_s3[-6] - (int)_DAT_1f800164);
                iVar1 = iVar1 << 1;
                iVar2 = func_0x00078240((int)unaff_s3[-4] - (int)_DAT_1f800160,
                                        (int)unaff_s3[-3] - (int)_DAT_1f800162,
                                        (int)unaff_s3[-5] - (int)_DAT_1f800164);
                iVar2 = iVar2 << 1;
                param_2 = (int)unaff_s3[-1] - (int)_DAT_1f800162;
                iVar3 = func_0x00078240((int)unaff_s3[-2] - (int)_DAT_1f800160,param_2,
                                        (int)*unaff_s3 - (int)_DAT_1f800164);
                iVar3 = iVar3 << 1;
                if (0x4000 < iVar1) {
                  iVar1 = 0x4000;
                }
                if (0x4000 < iVar2) {
                  iVar2 = 0x4000;
                }
                if (0x4000 < iVar3) {
                  iVar3 = 0x4000;
                }
                setCopReg(2,0x4000,iVar1);
                setCopReg(2,0x3000,unaff_s1[-6]);
                copFunction(2,0x780010);
                uVar6 = getCopReg(2,0x16);
                unaff_s5[1] = uVar6;
                setCopReg(2,0x4000,iVar2);
                setCopReg(2,0x3000,unaff_s1[-3]);
                copFunction(2,0x780010);
                uVar6 = getCopReg(2,0x16);
                unaff_s5[4] = uVar6;
                setCopReg(2,0x4000,iVar3);
                setCopReg(2,0x3000,*unaff_s1);
                copFunction(2,0x780010);
                iVar1 = getCopReg(2,0x16);
                *unaff_s1 = iVar1;
                puVar4 = (uint *)(in_stack_00000044 + *unaff_s4 * 4);
                uVar6 = 0x9000000;
                *unaff_s5 = *puVar4 | 0x9000000;
                *puVar4 = (uint)unaff_s5;
                unaff_s1 = unaff_s1 + 10;
                unaff_s5 = unaff_s5 + 10;
              }
              goto LAB_000335c8;
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
LAB_000333ec:
            *unaff_s4 = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
    }
LAB_000335c8:
    unaff_s3 = unaff_s3 + 0x12;
    piVar7 = unaff_s7 + 9;
    if (unaff_s6 == 0) {
      _DAT_800bf544 = unaff_s5;
      return piVar7;
    }
    setCopReg(2,in_zero,unaff_s7[0xd]);
    setCopReg(2,unaff_s6,unaff_s7[0xf]);
    setCopReg(2,0x800,unaff_s7[0xe]);
    setCopReg(2,uVar6,unaff_s7[0x10]);
    setCopReg(2,0x1800,(uint)unaff_s7[0xe] >> 0x10);
    setCopReg(2,param_2,unaff_s7[0x11]);
    in_v0 = *piVar7;
    unaff_s6 = unaff_s6 + -1;
    unaff_s7 = piVar7;
  } while( true );
}

