// FUN_0002423c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_0002423c(undefined4 param_1,int param_2)

{
  undefined4 in_zero;
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  int in_v1;
  uint uVar5;
  int in_t0;
  int unaff_s0;
  int *unaff_s1;
  short *unaff_s3;
  short *psVar6;
  int *unaff_s4;
  uint *unaff_s5;
  int unaff_s6;
  int *unaff_s7;
  int *piVar7;
  int unaff_s8;
  int in_stack_00000044;
  int in_stack_0000004c;
  
  do {
    setCopReg(2,0x3000,in_t0);
    copFunction(2,0x780010);
    uVar5 = getCopReg(2,0x16);
    unaff_s5[1] = uVar5;
    setCopReg(2,0x4000,unaff_s0);
    setCopReg(2,0x3000,unaff_s1[-3]);
    copFunction(2,0x780010);
    uVar5 = getCopReg(2,0x16);
    unaff_s5[4] = uVar5;
    setCopReg(2,0x4000,in_v1);
    setCopReg(2,0x3000,*unaff_s1);
    copFunction(2,0x780010);
    iVar1 = getCopReg(2,0x16);
    *unaff_s1 = iVar1;
    puVar3 = (uint *)(in_stack_00000044 + *unaff_s4 * 4);
    uVar5 = 0x9000000;
    *unaff_s5 = *puVar3 | 0x9000000;
    *puVar3 = (uint)unaff_s5;
    iVar1 = unaff_s6;
    piVar7 = unaff_s7;
    do {
      do {
        do {
          do {
            psVar6 = unaff_s3;
            unaff_s3 = psVar6 + 0x12;
            unaff_s7 = piVar7 + 9;
            unaff_s6 = iVar1 + -1;
            if (iVar1 == 0) {
              _DAT_800bf544 = unaff_s5 + 10;
              return unaff_s7;
            }
            setCopReg(2,in_zero,piVar7[0xd]);
            setCopReg(2,iVar1,piVar7[0xf]);
            setCopReg(2,0x800,piVar7[0xe]);
            setCopReg(2,uVar5,piVar7[0x10]);
            setCopReg(2,0x1800,(uint)piVar7[0xe] >> 0x10);
            setCopReg(2,param_2,piVar7[0x11]);
            unaff_s1[4] = *unaff_s7;
            copFunction(2,0x280030);
            unaff_s1[6] = *(int *)(psVar6 + 6);
            unaff_s1[9] = *(int *)(psVar6 + 8);
            uVar5 = *(uint *)(psVar6 + 4);
            _DAT_1f800000 = getCopControlWord(2,0xf800);
            iVar1 = unaff_s6;
            piVar7 = unaff_s7;
          } while (_DAT_1f800000 < 0);
          copFunction(2,0x1400006);
          unaff_s1[7] = uVar5 & 0xf0f0f0;
          _DAT_1f800000 = getCopReg(2,0x18);
        } while (_DAT_1f800000 < 1);
        uVar4 = getCopReg(2,0xc);
        unaff_s5[0xc] = uVar4;
        uVar4 = getCopReg(2,0xd);
        unaff_s5[0xf] = uVar4;
        uVar4 = getCopReg(2,0xe);
        unaff_s5[0x12] = uVar4;
      } while ((((0x13f < *(ushort *)(unaff_s1 + 5)) && (0x13f < *(ushort *)(unaff_s1 + 8))) &&
               (0x13f < *(ushort *)(unaff_s1 + 0xb))) ||
              (((0xef < *(ushort *)((int)unaff_s1 + 0x16) &&
                (0xef < *(ushort *)((int)unaff_s1 + 0x22))) &&
               (0xef < *(ushort *)((int)unaff_s1 + 0x2e)))));
      unaff_s1[10] = (uVar5 & 0xf0f0f) << 4;
      _DAT_1f800084 = getCopReg(2,0x11);
      _DAT_1f800088 = getCopReg(2,0x12);
      _DAT_1f80008c = getCopReg(2,0x13);
      uVar4 = uVar5 >> 0x18 & 3;
      if (uVar4 == 2) {
        if (_DAT_1f800084 < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar1 = *(int *)(unaff_s8 + 0x8c) >> 2;
        if (_DAT_1f800088 < *(int *)(unaff_s8 + 0x8c)) {
          iVar1 = _DAT_1f800088 >> 2;
        }
        goto LAB_000240ec;
      }
      if (uVar4 < 3) {
        if (uVar4 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_00024060:
        if (_DAT_1f800084 <= _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar1 = *(int *)(unaff_s8 + 0x8c) >> 2;
        if (*(int *)(unaff_s8 + 0x8c) < _DAT_1f800084) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
LAB_000240ec:
        *unaff_s4 = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (uVar4 == 3) goto LAB_00024060;
      copFunction(2,0x158002d);
      iVar2 = getCopReg(2,7);
      *unaff_s4 = iVar2;
      uVar4 = *unaff_s4 >> 10;
      iVar2 = (*unaff_s4 >> (uVar4 & 0x1f)) + uVar4 * 0x200;
      *unaff_s4 = iVar2;
      if (0x7fb < iVar2 - 4U) {
        *unaff_s4 = -1;
      }
    } while (*unaff_s4 < 0);
    *(short *)(unaff_s1 + 0xc) = psVar6[0x13];
    if (in_stack_0000004c != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = func_0x00078240((int)psVar6[10] - (int)_DAT_1f800160,
                            (int)psVar6[0xb] - (int)_DAT_1f800162,
                            (int)psVar6[0xc] - (int)_DAT_1f800164);
    iVar1 = iVar1 << 1;
    iVar2 = func_0x00078240((int)psVar6[0xe] - (int)_DAT_1f800160,
                            (int)psVar6[0xf] - (int)_DAT_1f800162,
                            (int)psVar6[0xd] - (int)_DAT_1f800164);
    unaff_s0 = iVar2 << 1;
    param_2 = (int)psVar6[0x11] - (int)_DAT_1f800162;
    iVar2 = func_0x00078240((int)psVar6[0x10] - (int)_DAT_1f800160,param_2,
                            (int)*unaff_s3 - (int)_DAT_1f800164);
    in_v1 = iVar2 << 1;
    if (0x4000 < iVar1) {
      iVar1 = 0x4000;
    }
    if (0x4000 < unaff_s0) {
      unaff_s0 = 0x4000;
    }
    if (0x4000 < in_v1) {
      in_v1 = 0x4000;
    }
    setCopReg(2,0x4000,iVar1);
    in_t0 = unaff_s1[4];
    unaff_s1 = unaff_s1 + 10;
    unaff_s5 = unaff_s5 + 10;
  } while( true );
}

