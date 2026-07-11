// FUN_80135414

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80135414(uint *param_1,undefined4 param_2)

{
  short sVar1;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 in_at;
  int iVar2;
  int in_v0;
  uint uVar3;
  uint *puVar4;
  int in_v1;
  uint *puVar5;
  uint unaff_s0;
  uint *unaff_s3;
  undefined4 *unaff_s4;
  undefined4 *puVar6;
  int unaff_s5;
  uint unaff_s6;
  short unaff_s7;
  int unaff_s8;
  undefined4 uStack00000010;
  int iStack00000018;
  int iStack0000001c;
  
  iStack0000001c = in_v0;
  do {
    puVar5 = (uint *)(in_v1 + iStack0000001c * 4);
    *unaff_s3 = *puVar5 | unaff_s0;
    *puVar5 = (uint)unaff_s3;
    puVar5 = unaff_s3 + 3;
    puVar6 = unaff_s4;
    sVar1 = unaff_s7 + 1;
    do {
      do {
        unaff_s7 = sVar1;
        unaff_s4 = puVar6 + 4;
        if (6 < unaff_s7) {
          _DAT_800bf544 = puVar5;
          return;
        }
        setCopReg(2,in_zero,*unaff_s4);
        setCopReg(2,in_at,puVar6[5]);
        setCopReg(2,puVar6 + 8,puVar6[6]);
        setCopReg(2,puVar6 + 6,puVar6[7]);
        setCopReg(2,param_1,puVar6[8]);
        setCopReg(2,param_2,puVar6[9]);
        copFunction(2,0x280030);
        iStack00000018 = getCopControlWord(2,0xf800);
        puVar6 = unaff_s4;
        sVar1 = unaff_s7 + 1;
      } while (iStack00000018 < 0);
      copFunction(2,0x158002d);
      iVar2 = getCopReg(2,7);
      iVar2 = iVar2 + *(short *)(unaff_s8 + 0x32);
      uVar3 = iVar2 >> 10;
      iStack0000001c = (iVar2 >> (uVar3 & 0x1f)) + uVar3 * 0x200;
      if (0x7fb < iStack0000001c - 4U) {
        iStack0000001c = -1;
      }
      sVar1 = unaff_s7 + 1;
    } while (iStack0000001c < 1);
    uVar3 = getCopReg(2,0xc);
    unaff_s3[5] = uVar3;
    uVar3 = getCopReg(2,0xd);
    unaff_s3[6] = uVar3;
    uVar3 = getCopReg(2,0xe);
    unaff_s3[7] = uVar3;
    unaff_s3[4] = unaff_s6;
    unaff_s3[8] = 0x55555555;
    puVar4 = (uint *)(*(int *)(unaff_s5 + -0x2738) + iStack0000001c * 4);
    *puVar5 = *puVar4 | 0x5000000;
    *puVar4 = (uint)puVar5;
    puVar4 = unaff_s3 + 9;
    uStack00000010 = 0;
    func_0x80083de0(puVar4,0,1,0x35);
    puVar5 = (uint *)(*(int *)(unaff_s5 + -0x2738) + iStack0000001c * 4);
    unaff_s0 = 0x2000000;
    *puVar4 = *puVar5 | 0x2000000;
    *puVar5 = (uint)puVar4;
    uVar3 = getCopReg(2,0xc);
    unaff_s3[0xe] = uVar3;
    uVar3 = getCopReg(2,0xd);
    unaff_s3[0xf] = uVar3;
    uVar3 = getCopReg(2,0xe);
    unaff_s3[0x10] = uVar3;
    unaff_s3[0xd] = unaff_s6;
    unaff_s3[0x11] = 0x55555555;
    *(short *)(unaff_s3 + 0xe) = (short)unaff_s3[0xe] + 2;
    *(short *)(unaff_s3 + 0xf) = (short)unaff_s3[0xf] + 2;
    *(short *)(unaff_s3 + 0x10) = (short)unaff_s3[0x10] + 2;
    *(short *)((int)unaff_s3 + 0x3a) = *(short *)((int)unaff_s3 + 0x3a) + 1;
    *(short *)((int)unaff_s3 + 0x3e) = *(short *)((int)unaff_s3 + 0x3e) + 1;
    *(short *)((int)unaff_s3 + 0x42) = *(short *)((int)unaff_s3 + 0x42) + 1;
    puVar5 = (uint *)(*(int *)(unaff_s5 + -0x2738) + iStack0000001c * 4);
    unaff_s3[0xc] = *puVar5 | 0x5000000;
    *puVar5 = (uint)(unaff_s3 + 0xc);
    unaff_s3 = unaff_s3 + 0x12;
    param_2 = 0;
    uStack00000010 = 0;
    param_1 = unaff_s3;
    func_0x80083de0(unaff_s3,0,1,0x55);
    in_v1 = *(int *)(unaff_s5 + -0x2738);
    in_at = extraout_at;
  } while( true );
}

