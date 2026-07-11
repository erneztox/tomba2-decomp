// FUN_8011bebc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011bebc(uint *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,short param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  int iVar4;
  int in_v1;
  int *piVar5;
  uint in_t0;
  undefined4 *in_t1;
  undefined4 *in_t2;
  undefined4 uVar6;
  int unaff_s0;
  uint *unaff_s2;
  char unaff_s3;
  int unaff_s4;
  int in_stack_00000048;
  int iStack0000004c;
  
  iStack0000004c = -0x300;
  *(undefined2 *)(unaff_s0 + 0x50) = 0xfd00;
  do {
    iStack0000004c = iStack0000004c + in_v1;
    if (0x7fb < iStack0000004c - 4U) {
      iStack0000004c = -1;
    }
    iVar4 = iStack0000004c + -100;
    piVar5 = param_2;
    if (-1 < iStack0000004c) {
      iStack0000004c = iVar4;
      if (iVar4 < 4) {
        iStack0000004c = 4;
      }
      param_3[-0xb] = param_2[-3] & 0xffffffU | 0x3e000000;
      iVar4 = *param_4;
      param_3[-6] = in_t0 & 0x7fffff;
      param_3[-9] = iVar4;
      iVar4 = param_2[-4];
      param_3[-3] = iVar4;
      *param_3 = iVar4 >> 0x10;
      param_3[-8] = param_2[-2];
      param_3[-5] = param_2[-1];
      iVar4 = *param_2;
      *(char *)(param_3 + -6) = (char)param_3[-6] + unaff_s3;
      *(char *)(param_3 + -9) = (char)param_3[-9] + unaff_s3;
      *(char *)param_3 = (char)*param_3 + unaff_s3;
      param_3[-2] = iVar4;
      *(char *)(param_3 + -3) = (char)param_3[-3] + unaff_s3;
      param_1 = (uint *)(_DAT_800ed8c8 + iStack0000004c * 4);
      *unaff_s2 = *param_1 | 0xc000000;
      *param_1 = (uint)unaff_s2;
      param_3 = param_3 + 0xd;
      unaff_s2 = unaff_s2 + 0xd;
    }
    do {
      do {
        param_2 = piVar5 + 9;
        param_4 = param_4 + 9;
        if ((int)in_t0 < 1) {
          uVar1 = *(ushort *)(unaff_s4 + 0x40);
          _DAT_800bf544 = unaff_s2;
          func_0x800329e0(6);
          setCopReg(2,in_zero,*(undefined4 *)(unaff_s4 + 0x60));
          setCopReg(2,extraout_at,*(undefined4 *)(unaff_s4 + 100));
          iVar4 = func_0x800317cc(0);
          if (iVar4 == 0) {
            _DAT_1f800080 = _DAT_1f800080 + -100;
            if (_DAT_1f800080 < 4) {
              _DAT_1f800080 = 4;
            }
            _DAT_1f800084 = _DAT_1f800084 * *(short *)(unaff_s4 + 0x70) >> 0xb;
            _DAT_1f800088 = _DAT_1f800084;
            if (*(char *)(unaff_s4 + 3) == '\b') {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            func_0x800328ec(*(undefined4 *)(((int)((uint)uVar1 << 0x10) >> 0x18) * 4 + -0x7fec7870))
            ;
          }
          return;
        }
        sVar3 = (short)unaff_s0;
        in_t0 = piVar5[4];
        param_5 = CONCAT22(*(char *)((int)piVar5 + 0x2a) * sVar3,(char)piVar5[10] * sVar3);
        param_6 = CONCAT22(param_6._2_2_,*(char *)((int)piVar5 + 0x1b) * sVar3);
        param_7._0_2_ = *(char *)((int)piVar5 + 0x29) * sVar3;
        param_7._2_2_ = *(char *)((int)piVar5 + 0x2b) * sVar3;
        param_8 = *(char *)((int)piVar5 + 0x1f) * sVar3;
        param_9 = CONCAT22(*(char *)((int)piVar5 + 0x2e) * sVar3,(char)piVar5[0xb] * sVar3);
        param_10 = CONCAT22(param_10._2_2_,*(char *)((int)piVar5 + 0x23) * sVar3);
        param_11 = CONCAT22(*(char *)((int)piVar5 + 0x2f) * sVar3,
                            *(char *)((int)piVar5 + 0x2d) * sVar3);
        param_12 = CONCAT22(param_12._2_2_,*(char *)((int)piVar5 + 0x27) * sVar3);
        setCopReg(2,in_zero,param_5);
        setCopReg(2,in_at,param_6);
        setCopReg(2,&param_5,*in_t2);
        setCopReg(2,&param_9,in_t2[1]);
        setCopReg(2,param_1,param_9);
        setCopReg(2,param_2,param_10);
        copFunction(2,0x280030);
        uVar6 = getCopControlWord(2,0xf800);
        *in_t1 = uVar6;
        piVar5 = param_2;
      } while (in_stack_00000048 < 0);
      uVar2 = getCopReg(2,0xc);
      unaff_s2[2] = uVar2;
      uVar2 = getCopReg(2,0xd);
      unaff_s2[5] = uVar2;
      uVar2 = getCopReg(2,0xe);
      unaff_s2[8] = uVar2;
      setCopReg(2,in_zero,param_11);
      setCopReg(2,in_at,param_12);
      copFunction(2,0x180001);
      uVar6 = getCopControlWord(2,0xf800);
      *in_t1 = uVar6;
    } while (in_stack_00000048 < 0);
    uVar2 = getCopReg(2,0xe);
    unaff_s2[0xb] = uVar2;
    copFunction(2,0x168002e);
    iVar4 = getCopReg(2,7);
    iStack0000004c = iVar4 >> (iVar4 >> 10 & 0x1fU);
    in_v1 = (iVar4 >> 10) << 9;
  } while( true );
}

