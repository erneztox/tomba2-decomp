// FUN_80124efc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80124efc(undefined4 param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6,undefined4 param_7,short param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  ushort uVar1;
  uint uVar2;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  int in_v0;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint in_t0;
  undefined4 *in_t1;
  undefined4 *in_t2;
  undefined4 uVar6;
  short unaff_s0;
  uint *unaff_s2;
  char unaff_s3;
  int unaff_s4;
  int in_stack_00000048;
  int in_stack_0000004c;
  
  do {
    param_3[-9] = in_v0;
    iVar3 = param_2[-4];
    param_3[-3] = iVar3;
    *param_3 = iVar3 >> 0x10;
    param_3[-8] = param_2[-2];
    param_3[-5] = param_2[-1];
    iVar3 = *param_2;
    *(char *)(param_3 + -6) = (char)param_3[-6] + unaff_s3;
    *(char *)(param_3 + -9) = (char)param_3[-9] + unaff_s3;
    *(char *)param_3 = (char)*param_3 + unaff_s3;
    param_3[-2] = iVar3;
    *(char *)(param_3 + -3) = (char)param_3[-3] + unaff_s3;
    puVar4 = (uint *)(_DAT_800ed8c8 + in_stack_0000004c * 4);
    *unaff_s2 = *puVar4 | 0xc000000;
    *puVar4 = (uint)unaff_s2;
    _DAT_800bf544 = unaff_s2 + 0xd;
    do {
      do {
        do {
          piVar5 = param_2;
          param_2 = piVar5 + 9;
          param_4 = param_4 + 9;
          if ((int)in_t0 < 1) {
            uVar1 = *(ushort *)(unaff_s4 + 0x40);
            func_0x800329e0(6);
            setCopReg(2,in_zero,*(undefined4 *)(unaff_s4 + 0x60));
            setCopReg(2,extraout_at,*(undefined4 *)(unaff_s4 + 100));
            iVar3 = func_0x800317cc(0);
            if (iVar3 == 0) {
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
              func_0x800328ec(*(undefined4 *)
                               (((int)((uint)uVar1 << 0x10) >> 0x18) * 4 + -0x7fec7870));
            }
            return;
          }
          in_t0 = piVar5[4];
          param_5 = CONCAT22(*(char *)((int)piVar5 + 0x2a) * unaff_s0,(char)piVar5[10] * unaff_s0);
          param_6 = CONCAT22(param_6._2_2_,*(char *)((int)piVar5 + 0x1b) * unaff_s0);
          param_7._0_2_ = *(char *)((int)piVar5 + 0x29) * unaff_s0;
          param_7._2_2_ = *(char *)((int)piVar5 + 0x2b) * unaff_s0;
          param_8 = *(char *)((int)piVar5 + 0x1f) * unaff_s0;
          param_9 = CONCAT22(*(char *)((int)piVar5 + 0x2e) * unaff_s0,(char)piVar5[0xb] * unaff_s0);
          param_10 = CONCAT22(param_10._2_2_,*(char *)((int)piVar5 + 0x23) * unaff_s0);
          param_11 = CONCAT22(*(char *)((int)piVar5 + 0x2f) * unaff_s0,
                              *(char *)((int)piVar5 + 0x2d) * unaff_s0);
          param_12 = CONCAT22(param_12._2_2_,*(char *)((int)piVar5 + 0x27) * unaff_s0);
          setCopReg(2,in_zero,param_5);
          setCopReg(2,in_at,param_6);
          setCopReg(2,&param_5,*in_t2);
          setCopReg(2,&param_9,in_t2[1]);
          setCopReg(2,puVar4,param_9);
          setCopReg(2,param_2,param_10);
          copFunction(2,0x280030);
          uVar6 = getCopControlWord(2,0xf800);
          *in_t1 = uVar6;
        } while (in_stack_00000048 < 0);
        uVar2 = getCopReg(2,0xc);
        unaff_s2[0xf] = uVar2;
        uVar2 = getCopReg(2,0xd);
        unaff_s2[0x12] = uVar2;
        uVar2 = getCopReg(2,0xe);
        unaff_s2[0x15] = uVar2;
        setCopReg(2,in_zero,param_11);
        setCopReg(2,in_at,param_12);
        copFunction(2,0x180001);
        uVar6 = getCopControlWord(2,0xf800);
        *in_t1 = uVar6;
      } while (in_stack_00000048 < 0);
      uVar2 = getCopReg(2,0xe);
      unaff_s2[0x18] = uVar2;
      copFunction(2,0x168002e);
      iVar3 = getCopReg(2,7);
      in_stack_0000004c = (iVar3 >> (iVar3 >> 10 & 0x1fU)) + (iVar3 >> 10) * 0x200;
      if (0x7fb < in_stack_0000004c - 4U) {
        in_stack_0000004c = -1;
      }
      iVar3 = in_stack_0000004c + -100;
    } while (in_stack_0000004c < 0);
    in_stack_0000004c = iVar3;
    if (iVar3 < 4) {
      in_stack_0000004c = 4;
    }
    param_3[2] = piVar5[6] & 0xffffffU | 0x3e000000;
    in_v0 = *param_4;
    param_3[7] = in_t0 & 0x7fffff;
    param_3 = param_3 + 0xd;
    unaff_s2 = _DAT_800bf544;
  } while( true );
}

