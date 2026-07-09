// FUN_8012c090

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012c090(uint *param_1)

{
  short sVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  uint unaff_s0;
  uint *unaff_s3;
  undefined4 *unaff_s4;
  undefined4 *puVar7;
  int unaff_s5;
  uint unaff_s6;
  short unaff_s7;
  int unaff_s8;
  int in_stack_0000001c;
  
  if (unaff_s0 == 3) {
    func_0x8007a624();
    return;
  }
  do {
    uVar5 = 0;
    func_0x80083de0(param_1,0,1,0x55);
    puVar4 = (uint *)(*(int *)(unaff_s5 + -0x2738) + in_stack_0000001c * 4);
    *unaff_s3 = *puVar4 | unaff_s0;
    *puVar4 = (uint)unaff_s3;
    puVar4 = unaff_s3 + 3;
    puVar7 = unaff_s4;
    sVar1 = unaff_s7 + 1;
    do {
      do {
        unaff_s7 = sVar1;
        unaff_s4 = puVar7 + 4;
        if (6 < unaff_s7) {
          _DAT_800bf544 = puVar4;
          return;
        }
        setCopReg(2,in_zero,*unaff_s4);
        setCopReg(2,extraout_at,puVar7[5]);
        setCopReg(2,puVar7 + 8,puVar7[6]);
        setCopReg(2,puVar7 + 6,puVar7[7]);
        setCopReg(2,param_1,puVar7[8]);
        setCopReg(2,uVar5,puVar7[9]);
        copFunction(2,0x280030);
        iVar6 = getCopControlWord(2,0xf800);
        puVar7 = unaff_s4;
        sVar1 = unaff_s7 + 1;
      } while (iVar6 < 0);
      copFunction(2,0x158002d);
      iVar6 = getCopReg(2,7);
      iVar6 = iVar6 + *(short *)(unaff_s8 + 0x32);
      uVar2 = iVar6 >> 10;
      in_stack_0000001c = (iVar6 >> (uVar2 & 0x1f)) + uVar2 * 0x200;
      if (0x7fb < in_stack_0000001c - 4U) {
        in_stack_0000001c = -1;
      }
      sVar1 = unaff_s7 + 1;
    } while (in_stack_0000001c < 1);
    uVar2 = getCopReg(2,0xc);
    unaff_s3[5] = uVar2;
    uVar2 = getCopReg(2,0xd);
    unaff_s3[6] = uVar2;
    uVar2 = getCopReg(2,0xe);
    unaff_s3[7] = uVar2;
    unaff_s3[4] = unaff_s6;
    unaff_s3[8] = 0x55555555;
    puVar3 = (uint *)(*(int *)(unaff_s5 + -0x2738) + in_stack_0000001c * 4);
    *puVar4 = *puVar3 | 0x5000000;
    *puVar3 = (uint)puVar4;
    puVar3 = unaff_s3 + 9;
    func_0x80083de0(puVar3,0,1,0x35);
    puVar4 = (uint *)(*(int *)(unaff_s5 + -0x2738) + in_stack_0000001c * 4);
    unaff_s0 = 0x2000000;
    *puVar3 = *puVar4 | 0x2000000;
    *puVar4 = (uint)puVar3;
    uVar2 = getCopReg(2,0xc);
    unaff_s3[0xe] = uVar2;
    uVar2 = getCopReg(2,0xd);
    unaff_s3[0xf] = uVar2;
    uVar2 = getCopReg(2,0xe);
    unaff_s3[0x10] = uVar2;
    unaff_s3[0xd] = unaff_s6;
    unaff_s3[0x11] = 0x55555555;
    *(short *)(unaff_s3 + 0xe) = (short)unaff_s3[0xe] + 2;
    *(short *)(unaff_s3 + 0xf) = (short)unaff_s3[0xf] + 2;
    *(short *)(unaff_s3 + 0x10) = (short)unaff_s3[0x10] + 2;
    *(short *)((int)unaff_s3 + 0x3a) = *(short *)((int)unaff_s3 + 0x3a) + 1;
    *(short *)((int)unaff_s3 + 0x3e) = *(short *)((int)unaff_s3 + 0x3e) + 1;
    *(short *)((int)unaff_s3 + 0x42) = *(short *)((int)unaff_s3 + 0x42) + 1;
    puVar4 = (uint *)(*(int *)(unaff_s5 + -0x2738) + in_stack_0000001c * 4);
    unaff_s3[0xc] = *puVar4 | 0x5000000;
    *puVar4 = (uint)(unaff_s3 + 0xc);
    param_1 = unaff_s3 + 0x12;
    unaff_s3 = param_1;
  } while( true );
}

