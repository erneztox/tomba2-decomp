// FUN_80126be4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 *
FUN_80126be4(uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  bool bVar1;
  short sVar2;
  undefined4 in_zero;
  uint in_v0;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  char *unaff_s0;
  ushort *unaff_s1;
  ushort *puVar8;
  uint *unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int unaff_s6;
  undefined4 *unaff_s7;
  int unaff_s8;
  undefined4 in_f0;
  undefined4 extraout_f0;
  int in_stack_00000044;
  
  if (0x7fb < in_v0) {
    *unaff_s3 = -1;
  }
  if (-1 < *unaff_s3) {
    *(ushort *)(unaff_s0 + -1) = unaff_s1[1];
    iVar4 = _DAT_1f800084;
    if ((unaff_s4 & 8) == 0) {
      if ((unaff_s4 & 0x40) != 0) {
        if (_DAT_1f80009c == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        goto LAB_80127020;
      }
      if ((unaff_s4 & 4) != 0) {
        uVar6 = *(int *)(unaff_s8 + 0x80) * param_5 + 0x3039;
        bVar1 = _DAT_1f800084 < 0;
        *(uint *)(unaff_s8 + 0x80) = uVar6;
        if (bVar1) {
          iVar4 = iVar4 + 3;
        }
        setCopReg(2,0x4000,(iVar4 >> 2) + (uVar6 >> 0x16));
        setCopReg(2,0x3000,*(undefined4 *)(unaff_s0 + -0x21));
        copFunction(2,0x780010);
        uVar6 = getCopReg(2,0x16);
        unaff_s2[1] = uVar6;
        iVar4 = _DAT_1f800088;
        uVar6 = *(int *)(unaff_s8 + 0x80) * param_5 + 0x3039;
        bVar1 = _DAT_1f800088 < 0;
        *(uint *)(unaff_s8 + 0x80) = uVar6;
        if (bVar1) {
          iVar4 = iVar4 + 3;
        }
        setCopReg(2,0x4000,(iVar4 >> 2) + (uVar6 >> 0x16));
        setCopReg(2,0x3000,*(undefined4 *)(unaff_s0 + -0x15));
        copFunction(2,0x780010);
        uVar6 = getCopReg(2,0x16);
        unaff_s2[4] = uVar6;
        iVar4 = _DAT_1f80008c;
        uVar6 = *(int *)(unaff_s8 + 0x80) * param_5 + 0x3039;
        bVar1 = _DAT_1f80008c < 0;
        *(uint *)(unaff_s8 + 0x80) = uVar6;
        if (bVar1) {
          iVar4 = iVar4 + 3;
        }
        setCopReg(2,0x4000,(iVar4 >> 2) + (uVar6 >> 0x16));
        setCopReg(2,0x3000,*(undefined4 *)(unaff_s0 + -9));
        copFunction(2,0x780010);
        uVar6 = getCopReg(2,0x16);
        unaff_s2[7] = uVar6;
        halt_baddata();
      }
      setCopReg(2,0x4000,_DAT_1f800084 >> 2);
      setCopReg(2,0x3000,*(undefined4 *)(unaff_s0 + -0x21));
      copFunction(2,0x780010);
      uVar6 = getCopReg(2,0x16);
      unaff_s2[1] = uVar6;
      setCopReg(2,0x4000,_DAT_1f800088 >> 2);
      setCopReg(2,0x3000,*(undefined4 *)(unaff_s0 + -0x15));
      copFunction(2,0x780010);
      uVar6 = getCopReg(2,0x16);
      unaff_s2[4] = uVar6;
      setCopReg(2,0x4000,_DAT_1f80008c >> 2);
      setCopReg(2,0x3000,*(undefined4 *)(unaff_s0 + -9));
      copFunction(2,0x780010);
      uVar6 = getCopReg(2,0x16);
      unaff_s2[7] = uVar6;
    }
    else {
      if ((unaff_s1[-6] & 1) != 0) {
        func_0x80083f50((int)*(short *)(unaff_s5 + -0x6ffc) + (int)(short)unaff_s1[-8]);
        puVar3 = (undefined4 *)FUN_8012fc08();
        return puVar3;
      }
      iVar4 = func_0x80083f50((int)*(short *)(unaff_s5 + -0x6ffc) + (int)(short)unaff_s1[-8]);
      *(short *)(unaff_s0 + -0x1d) = *(short *)(unaff_s0 + -0x1d) - (short)(iVar4 >> 9);
      if ((unaff_s1[-5] & 1) != 0) {
        func_0x80083f50((int)*(short *)(unaff_s5 + -0x6ffc) + (int)(short)unaff_s1[-4]);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar4 = func_0x80083f50((int)*(short *)(unaff_s5 + -0x6ffc) + (int)(short)unaff_s1[-4]);
      *(short *)(unaff_s0 + -0x11) = *(short *)(unaff_s0 + -0x11) - (short)(iVar4 >> 9);
      if ((*unaff_s1 & 1) != 0) {
        func_0x80083f50((int)*(short *)(unaff_s5 + -0x6ffc) + (int)(short)unaff_s1[-2]);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar4 = func_0x80083f50((int)*(short *)(unaff_s5 + -0x6ffc) + (int)(short)unaff_s1[-2]);
      *(short *)(unaff_s0 + -5) = *(short *)(unaff_s0 + -5) - (short)(iVar4 >> 9);
      iVar4 = func_0x80083e80((int)*(short *)(unaff_s5 + -0x6ffc) + (int)(short)unaff_s1[-6]);
      sVar2 = *(short *)(unaff_s5 + -0x6ffc);
      *(short *)(unaff_s0 + -0x1b) = *(short *)(unaff_s0 + -0x1b) + (short)(iVar4 >> 9);
      iVar4 = func_0x80083e80((int)sVar2 + (int)(short)unaff_s1[-5]);
      sVar2 = *(short *)(unaff_s5 + -0x6ffc);
      *(short *)(unaff_s0 + -0xf) = *(short *)(unaff_s0 + -0xf) + (short)(iVar4 >> 9);
      iVar4 = func_0x80083e80((int)sVar2 + (int)(short)*unaff_s1);
      iVar7 = *unaff_s3;
      *(short *)(unaff_s0 + -3) = *(short *)(unaff_s0 + -3) + (short)(iVar4 >> 9);
      *unaff_s3 = iVar7 + 0x96;
      in_f0 = extraout_f0;
      if (0x7ff < iVar7 + 0x96) {
        *unaff_s3 = 0x7ff;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    param_2 = 0x80140000;
    if ((unaff_s4 & 0x10) != 0) {
      unaff_s0[-0x19] = unaff_s0[-0x19] + DAT_801388ec;
      unaff_s0[-0x18] = unaff_s0[-0x18] + DAT_801388ee;
      unaff_s0[-0xd] = unaff_s0[-0xd] + DAT_801388ec;
      unaff_s0[-0xc] = unaff_s0[-0xc] + DAT_801388ee;
      unaff_s0[-1] = unaff_s0[-1] + DAT_801388ec;
      *unaff_s0 = *unaff_s0 + DAT_801388ee;
    }
    puVar5 = (uint *)(in_stack_00000044 + *unaff_s3 * 4);
    param_1 = 0x9000000;
    *unaff_s2 = *puVar5 | 0x9000000;
    *puVar5 = (uint)unaff_s2;
    unaff_s0 = unaff_s0 + 0x28;
    unaff_s2 = unaff_s2 + 10;
  }
LAB_80127020:
  do {
    do {
      do {
        puVar8 = unaff_s1 + 0x12;
        puVar3 = unaff_s7 + 9;
        iVar4 = unaff_s6 + -1;
        if (unaff_s6 == 0) {
          _DAT_800bf544 = unaff_s2;
          return puVar3;
        }
        setCopReg(2,in_zero,unaff_s7[0xd]);
        setCopReg(2,unaff_s6,unaff_s7[0xf]);
        setCopReg(2,0x800,unaff_s7[0xe]);
        setCopReg(2,param_1,unaff_s7[0x10]);
        setCopReg(2,0x1800,(uint)unaff_s7[0xe] >> 0x10);
        setCopReg(2,param_2,unaff_s7[0x11]);
        *(undefined4 *)(unaff_s0 + -0x21) = *puVar3;
        copFunction(2,0x280030);
        *(undefined4 *)(unaff_s0 + -0x19) = *(undefined4 *)(unaff_s1 + 6);
        *(undefined4 *)(unaff_s0 + -0xd) = *(undefined4 *)(unaff_s1 + 8);
        param_1 = *(uint *)(unaff_s1 + 4);
        _DAT_1f800000 = getCopControlWord(2,0xf800);
        unaff_s1 = puVar8;
        unaff_s6 = iVar4;
        unaff_s7 = puVar3;
      } while (_DAT_1f800000 < 0);
      copFunction(2,0x1400006);
      *(uint *)(unaff_s0 + -0x15) = param_1 & 0xf0f0f0;
      _DAT_1f800000 = getCopReg(2,0x18);
    } while (_DAT_1f800000 < 1);
    uVar6 = getCopReg(2,0xc);
    unaff_s2[2] = uVar6;
    uVar6 = getCopReg(2,0xd);
    unaff_s2[5] = uVar6;
    uVar6 = getCopReg(2,0xe);
    unaff_s2[8] = uVar6;
  } while ((((0x13f < *(ushort *)(unaff_s0 + -0x1d)) && (0x13f < *(ushort *)(unaff_s0 + -0x11))) &&
           (0x13f < *(ushort *)(unaff_s0 + -5))) ||
          (((0xef < *(ushort *)(unaff_s0 + -0x1b) && (0xef < *(ushort *)(unaff_s0 + -0xf))) &&
           (0xef < *(ushort *)(unaff_s0 + -3)))));
  *(uint *)(unaff_s0 + -9) = (param_1 & 0xf0f0f) << 4;
  _DAT_1f800084 = getCopReg(2,0x11);
  _DAT_1f800088 = getCopReg(2,0x12);
  _DAT_1f80008c = getCopReg(2,0x13);
  uVar6 = param_1 >> 0x18 & 3;
  iVar4 = _DAT_1f80008c >> 2;
  if (uVar6 == 1) {
    if (_DAT_1f800084 <= _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (_DAT_1f80008c < _DAT_1f800084) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (uVar6 != 2) {
      puVar3 = (undefined4 *)FUN_8012fb58();
      return puVar3;
    }
    if (_DAT_1f800084 < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (_DAT_1f800088 < _DAT_1f80008c) {
      iVar4 = _DAT_1f800088 >> 2;
    }
  }
  *unaff_s3 = iVar4;
  *(undefined4 *)(unaff_s0 + 0x393f) = in_f0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

