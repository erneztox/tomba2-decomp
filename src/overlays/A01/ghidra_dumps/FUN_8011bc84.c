// FUN_8011bc84

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011bc84(undefined4 param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6,short param_7,short param_8,undefined4 param_9,
                 undefined4 param_10,undefined4 param_11,undefined4 param_12)

{
  ushort uVar1;
  uint uVar2;
  short sVar3;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined2 in_v0;
  short sVar4;
  int iVar5;
  uint *puVar6;
  uint in_t0;
  undefined4 *in_t1;
  undefined4 *in_t2;
  undefined4 uVar7;
  undefined1 *unaff_s0;
  int unaff_s1;
  uint *unaff_s2;
  char unaff_s3;
  int unaff_s4;
  short sStack0000001a;
  int in_stack_00000048;
  int in_stack_0000004c;
  
  *(undefined2 *)(unaff_s0 + 0x50) = in_v0;
  sVar4 = *(short *)(unaff_s0 + 0x50);
  *(short *)(unaff_s0 + 0x50) = sVar4 + 0x10;
  if (0x300 < (short)(sVar4 + 0x10)) {
    *(undefined2 *)(unaff_s0 + 0x50) = 0x300;
    unaff_s1 = 1;
  }
  puVar6 = (uint *)(uint)*(ushort *)(unaff_s0 + 0x50);
  uVar1 = _DAT_1f80017c & 0xf;
  *(ushort *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x5a) + *(ushort *)(unaff_s0 + 0x50);
  if (uVar1 == 0) {
    puVar6 = (uint *)&DAT_0000000d;
    param_2 = (int *)&DAT_ffffffe3;
    param_3 = (int *)0x0;
    func_0x80074590(0xd);
    in_at = extraout_at;
  }
  if (unaff_s1 != 0) {
    unaff_s0[5] = 2;
    *unaff_s0 = 2;
    *(undefined2 *)(unaff_s0 + 0x40) = 0xf;
    *(undefined1 *)(unaff_s2 + 1) = 4;
    *(undefined1 *)((int)unaff_s2 + 5) = 0x24;
    sVar4 = 0;
    *(undefined1 *)((int)unaff_s2 + 6) = 0;
    DAT_800bf81f = 0;
    while( true ) {
      sVar3 = (short)unaff_s0;
      param_6 = CONCAT22(param_6._2_2_,sVar4 * sVar3);
      param_7 = *(char *)((int)param_2 + 5) * sVar3;
      sStack0000001a = *(char *)((int)param_2 + 7) * sVar3;
      param_8 = *(char *)((int)param_2 + -5) * sVar3;
      param_9 = CONCAT22(*(char *)((int)param_2 + 10) * sVar3,(char)param_2[2] * sVar3);
      param_10 = CONCAT22(param_10._2_2_,*(char *)((int)param_2 + -1) * sVar3);
      param_11 = CONCAT22(*(char *)((int)param_2 + 0xb) * sVar3,*(char *)((int)param_2 + 9) * sVar3)
      ;
      param_12 = CONCAT22(param_12._2_2_,*(char *)((int)param_2 + 3) * sVar3);
      setCopReg(2,in_zero,param_5);
      setCopReg(2,in_at,param_6);
      setCopReg(2,&param_5,*in_t2);
      setCopReg(2,&param_9,in_t2[1]);
      setCopReg(2,puVar6,param_9);
      setCopReg(2,param_2,param_10);
      copFunction(2,0x280030);
      uVar7 = getCopControlWord(2,0xf800);
      *in_t1 = uVar7;
      if (-1 < in_stack_00000048) {
        uVar2 = getCopReg(2,0xc);
        unaff_s2[2] = uVar2;
        uVar2 = getCopReg(2,0xd);
        unaff_s2[5] = uVar2;
        uVar2 = getCopReg(2,0xe);
        unaff_s2[8] = uVar2;
        setCopReg(2,in_zero,param_11);
        setCopReg(2,in_at,param_12);
        copFunction(2,0x180001);
        uVar7 = getCopControlWord(2,0xf800);
        *in_t1 = uVar7;
        if (-1 < in_stack_00000048) {
          uVar2 = getCopReg(2,0xe);
          unaff_s2[0xb] = uVar2;
          copFunction(2,0x168002e);
          iVar5 = getCopReg(2,7);
          in_stack_0000004c = (iVar5 >> (iVar5 >> 10 & 0x1fU)) + (iVar5 >> 10) * 0x200;
          if (0x7fb < in_stack_0000004c - 4U) {
            in_stack_0000004c = -1;
          }
          iVar5 = in_stack_0000004c + -100;
          if (-1 < in_stack_0000004c) {
            in_stack_0000004c = iVar5;
            if (iVar5 < 4) {
              in_stack_0000004c = 4;
            }
            param_3[-0xb] = param_2[-3] & 0xffffffU | 0x3e000000;
            iVar5 = *param_4;
            param_3[-6] = in_t0 & 0x7fffff;
            param_3[-9] = iVar5;
            iVar5 = param_2[-4];
            param_3[-3] = iVar5;
            *param_3 = iVar5 >> 0x10;
            param_3[-8] = param_2[-2];
            param_3[-5] = param_2[-1];
            iVar5 = *param_2;
            *(char *)(param_3 + -6) = (char)param_3[-6] + unaff_s3;
            *(char *)(param_3 + -9) = (char)param_3[-9] + unaff_s3;
            *(char *)param_3 = (char)*param_3 + unaff_s3;
            param_3[-2] = iVar5;
            *(char *)(param_3 + -3) = (char)param_3[-3] + unaff_s3;
            puVar6 = (uint *)(_DAT_800ed8c8 + in_stack_0000004c * 4);
            *unaff_s2 = *puVar6 | 0xc000000;
            *puVar6 = (uint)unaff_s2;
            param_3 = param_3 + 0xd;
            unaff_s2 = unaff_s2 + 0xd;
          }
        }
      }
      param_4 = param_4 + 9;
      if ((int)in_t0 < 1) break;
      in_t0 = param_2[4];
      param_5 = CONCAT22(*(char *)((int)param_2 + 0x2a) * sVar3,(char)param_2[10] * sVar3);
      sVar4 = (short)*(char *)((int)param_2 + 0x1b);
      param_2 = param_2 + 9;
    }
    uVar1 = *(ushort *)(unaff_s4 + 0x40);
    _DAT_800bf544 = unaff_s2;
    func_0x800329e0(6);
    setCopReg(2,in_zero,*(undefined4 *)(unaff_s4 + 0x60));
    setCopReg(2,extraout_at_00,*(undefined4 *)(unaff_s4 + 100));
    iVar5 = func_0x800317cc(0);
    if (iVar5 == 0) {
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
      func_0x800328ec(*(undefined4 *)(((int)((uint)uVar1 << 0x10) >> 0x18) * 4 + -0x7fec7870));
    }
    return;
  }
  return;
}

