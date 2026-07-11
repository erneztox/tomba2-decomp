// FUN_80124cf8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80124cf8(uint *param_1,int *param_2,int *param_3,int *param_4,undefined4 param_5,
                 undefined4 param_6)

{
  ushort uVar1;
  uint uVar2;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  short in_v0;
  int iVar3;
  uint in_t0;
  undefined4 *in_t1;
  undefined4 *in_t2;
  undefined4 uVar4;
  short unaff_s0;
  uint *unaff_s2;
  char unaff_s3;
  int unaff_s4;
  short sStack00000018;
  short sStack0000001a;
  short sStack0000001c;
  undefined4 uStack00000020;
  undefined4 in_stack_00000024;
  undefined4 uStack00000028;
  undefined4 in_stack_0000002c;
  int in_stack_00000048;
  int in_stack_0000004c;
  
  while( true ) {
    sStack00000018 = in_v0 * unaff_s0;
    sStack0000001a = *(char *)((int)param_2 + 7) * unaff_s0;
    sStack0000001c = *(char *)((int)param_2 + -5) * unaff_s0;
    uStack00000020 = CONCAT22(*(char *)((int)param_2 + 10) * unaff_s0,(char)param_2[2] * unaff_s0);
    in_stack_00000024 = CONCAT22(in_stack_00000024._2_2_,*(char *)((int)param_2 + -1) * unaff_s0);
    uStack00000028 =
         CONCAT22(*(char *)((int)param_2 + 0xb) * unaff_s0,*(char *)((int)param_2 + 9) * unaff_s0);
    in_stack_0000002c = CONCAT22(in_stack_0000002c._2_2_,*(char *)((int)param_2 + 3) * unaff_s0);
    setCopReg(2,in_zero,param_5);
    setCopReg(2,in_at,param_6);
    setCopReg(2,&param_5,*in_t2);
    setCopReg(2,&stack0x00000020,in_t2[1]);
    setCopReg(2,param_1,uStack00000020);
    setCopReg(2,param_2,in_stack_00000024);
    copFunction(2,0x280030);
    uVar4 = getCopControlWord(2,0xf800);
    *in_t1 = uVar4;
    if (-1 < in_stack_00000048) {
      uVar2 = getCopReg(2,0xc);
      unaff_s2[2] = uVar2;
      uVar2 = getCopReg(2,0xd);
      unaff_s2[5] = uVar2;
      uVar2 = getCopReg(2,0xe);
      unaff_s2[8] = uVar2;
      setCopReg(2,in_zero,uStack00000028);
      setCopReg(2,in_at,in_stack_0000002c);
      copFunction(2,0x180001);
      uVar4 = getCopControlWord(2,0xf800);
      *in_t1 = uVar4;
      if (-1 < in_stack_00000048) {
        uVar2 = getCopReg(2,0xe);
        unaff_s2[0xb] = uVar2;
        copFunction(2,0x168002e);
        iVar3 = getCopReg(2,7);
        in_stack_0000004c = (iVar3 >> (iVar3 >> 10 & 0x1fU)) + (iVar3 >> 10) * 0x200;
        if (0x7fb < in_stack_0000004c - 4U) {
          in_stack_0000004c = -1;
        }
        iVar3 = in_stack_0000004c + -100;
        if (-1 < in_stack_0000004c) {
          in_stack_0000004c = iVar3;
          if (iVar3 < 4) {
            in_stack_0000004c = 4;
          }
          param_3[-0xb] = param_2[-3] & 0xffffffU | 0x3e000000;
          iVar3 = *param_4;
          param_3[-6] = in_t0 & 0x7fffff;
          param_3[-9] = iVar3;
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
          param_1 = (uint *)(_DAT_800ed8c8 + in_stack_0000004c * 4);
          *unaff_s2 = *param_1 | 0xc000000;
          *param_1 = (uint)unaff_s2;
          param_3 = param_3 + 0xd;
          unaff_s2 = unaff_s2 + 0xd;
        }
      }
    }
    param_4 = param_4 + 9;
    if ((int)in_t0 < 1) break;
    in_t0 = param_2[4];
    param_5 = CONCAT22(*(char *)((int)param_2 + 0x2a) * unaff_s0,(char)param_2[10] * unaff_s0);
    param_6 = CONCAT22(param_6._2_2_,*(char *)((int)param_2 + 0x1b) * unaff_s0);
    in_v0 = (short)*(char *)((int)param_2 + 0x29);
    param_2 = param_2 + 9;
  }
  uVar1 = *(ushort *)(unaff_s4 + 0x40);
  _DAT_800bf544 = unaff_s2;
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
    func_0x800328ec(*(undefined4 *)(((int)((uint)uVar1 << 0x10) >> 0x18) * 4 + -0x7fec7870));
  }
  return;
}

