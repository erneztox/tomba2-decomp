// FUN_8012212c

/* WARNING: Control flow encountered bad instruction data */

undefined4
FUN_8012212c(undefined4 param_1,undefined4 *param_2,int *param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 uVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  int in_v0;
  uint uVar5;
  int iVar6;
  int unaff_s0;
  int iVar7;
  
  if (in_v0 == 0) {
    param_2 = &param_5;
    param_5 = CONCAT22(*(undefined2 *)(unaff_s0 + 0x2e),(undefined2)param_5);
    param_6 = CONCAT22(*(short *)(unaff_s0 + 0x32) + -100 +
                       (*(short *)(unaff_s0 + 0x60) >> 2) * -0x46,(undefined2)param_6);
    param_3 = (int *)&DAT_fffffff6;
    param_7 = CONCAT22(*(undefined2 *)(unaff_s0 + 0x36),(undefined2)param_7);
    func_0x8003116c(0x206);
  }
  *(short *)(unaff_s0 + 0x60) = *(short *)(unaff_s0 + 0x60) + 1;
  uVar4 = *(short *)(unaff_s0 + 0x40) - 1;
  *(ushort *)(unaff_s0 + 0x40) = uVar4;
  if ((int)((uint)uVar4 << 0x10) < 1) {
    uVar5 = func_0x8009a450();
    for (iVar7 = (uVar5 & 3) + (*(byte *)(unaff_s0 + 5) >> 1) + 2; iVar7 != 0; iVar7 = iVar7 + -1) {
      sVar3 = func_0x80070698(0x80);
      param_5 = CONCAT22(*(short *)(unaff_s0 + 0x2e) + sVar3 + -300,(undefined2)param_5);
      uVar4 = func_0x8009a450();
      param_6 = CONCAT22(*(short *)(unaff_s0 + 0x32) - ((uVar4 & 0x1ff) - 100),(undefined2)param_6);
      sVar3 = func_0x80070698(0x200);
      param_7 = CONCAT22(*(short *)(unaff_s0 + 0x36) + sVar3,(undefined2)param_7);
      uVar5 = func_0x8009a450();
      func_0x80027144(*(undefined4 *)(*(int *)(unaff_s0 + 0xc0) + 0x40),&param_5,
                      uVar5 & 0x3ff | 0x800,8);
      param_2 = &param_5;
      param_3 = (int *)&DAT_fffffff6;
      func_0x8003116c(0x205);
    }
    uVar4 = func_0x8009a450();
    *(ushort *)(unaff_s0 + 0x40) = (uVar4 & 3) + 2;
    uVar4 = *(short *)(unaff_s0 + 0x42) + 1;
    *(ushort *)(unaff_s0 + 0x42) = uVar4;
    if ((uVar4 & 0xf) == 0) {
      *(undefined2 *)(unaff_s0 + 0x42) = 0;
      *(undefined2 *)(unaff_s0 + 0x40) = 0;
      *(undefined2 *)(unaff_s0 + 0x60) = 0;
      DAT_800bf9fa = *(char *)(unaff_s0 + 5) + '\x1b';
      cVar2 = *(char *)(unaff_s0 + 5) + '\x01';
      *(char *)(unaff_s0 + 5) = cVar2;
      iVar7 = 0x208;
      if (cVar2 == '\x03') {
        param_2 = &param_5;
        param_5 = *(undefined4 *)(unaff_s0 + 0x2c);
        param_7 = *(undefined4 *)(unaff_s0 + 0x34);
        param_6._2_2_ = (short)((uint)*(undefined4 *)(unaff_s0 + 0x30) >> 0x10);
        param_3 = (int *)&DAT_ffffffce;
        param_6._0_2_ = (undefined2)*(undefined4 *)(unaff_s0 + 0x30);
        param_6 = CONCAT22(param_6._2_2_ + -200,(undefined2)param_6);
        func_0x8003116c();
        FUN_80111be0();
        copFunction(2,0x1400006);
        iVar6 = getCopReg(2,0x18);
        *param_3 = iVar6;
        iVar6 = *param_3;
        if (iVar6 < 0) {
          iVar6 = -iVar6;
        }
        uVar5 = (uint)(iVar6 < 8);
        uVar1 = extraout_at;
        unaff_s0 = iVar7;
        goto LAB_8012b2c4;
      }
    }
  }
  if (*(char *)(unaff_s0 + 1) == '\0') {
    return 0;
  }
  uVar5 = func_0x800517f8();
  uVar1 = extraout_at_00;
LAB_8012b2c4:
  if (uVar5 == 0) {
    setCopReg(2,in_zero,param_2[6]);
    setCopReg(2,uVar1,param_2[7]);
    copFunction(2,0x180001);
    iVar7 = getCopControlWord(2,0xf800);
    *param_3 = iVar7;
    if (-1 < *param_3) {
      uVar1 = getCopReg(2,0xe);
      *(undefined4 *)(unaff_s0 + 0x2c) = uVar1;
      copFunction(2,0x168002e);
      getCopReg(2,7);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return 0xffffffff;
}

