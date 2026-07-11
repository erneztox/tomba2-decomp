// FUN_80127bc8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_80127bc8(undefined4 param_1,undefined4 param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 in_zero;
  int in_v0;
  undefined4 *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int unaff_s0;
  ushort *unaff_s1;
  ushort *puVar8;
  int *unaff_s2;
  uint *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  undefined4 *unaff_s6;
  int unaff_s7;
  int *unaff_s8;
  int in_stack_0000003c;
  
  *(short *)(unaff_s0 + -0x1d) = *(short *)(unaff_s0 + -0x1d) - (short)(in_v0 >> 9);
  if ((unaff_s1[-5] & 1) != 0) {
    func_0x80083f50((int)*(short *)(unaff_s4 + -0x6ffc) + (int)(short)unaff_s1[-4]);
    puVar3 = (undefined4 *)FUN_80130bc8();
    return puVar3;
  }
  iVar4 = func_0x80083f50((int)*(short *)(unaff_s4 + -0x6ffc) + (int)(short)unaff_s1[-4]);
  *(short *)(unaff_s0 + -0x11) = *(short *)(unaff_s0 + -0x11) - (short)(iVar4 >> 9);
  if ((*unaff_s1 & 1) != 0) {
    func_0x80083f50((int)*(short *)(unaff_s4 + -0x6ffc) + (int)(short)unaff_s1[-2]);
    puVar3 = (undefined4 *)FUN_80130c1c();
    return puVar3;
  }
  iVar4 = func_0x80083f50((int)*(short *)(unaff_s4 + -0x6ffc) + (int)(short)unaff_s1[-2]);
  *(short *)(unaff_s0 + -5) = *(short *)(unaff_s0 + -5) - (short)(iVar4 >> 9);
  iVar4 = func_0x80083e80((int)*(short *)(unaff_s4 + -0x6ffc) + (int)(short)unaff_s1[-6]);
  sVar1 = *(short *)(unaff_s4 + -0x6ffc);
  *(short *)(unaff_s0 + -0x1b) = *(short *)(unaff_s0 + -0x1b) + (short)(iVar4 >> 9);
  iVar4 = func_0x80083e80((int)sVar1 + (int)(short)unaff_s1[-5]);
  sVar1 = *(short *)(unaff_s4 + -0x6ffc);
  *(short *)(unaff_s0 + -0xf) = *(short *)(unaff_s0 + -0xf) + (short)(iVar4 >> 9);
  iVar4 = func_0x80083e80((int)sVar1 + (int)(short)*unaff_s1);
  iVar6 = *unaff_s2;
  *(short *)(unaff_s0 + -3) = *(short *)(unaff_s0 + -3) + (short)(iVar4 >> 9);
  *unaff_s2 = iVar6 + 0x80;
  if (0x7ff < iVar6 + 0x80) {
    *unaff_s2 = 0x7ff;
    puVar3 = (undefined4 *)FUN_80130d20();
    return puVar3;
  }
  puVar5 = (uint *)(in_stack_0000003c + *unaff_s2 * 4);
  uVar7 = 0x9000000;
  *unaff_s3 = *puVar5 | 0x9000000;
  *puVar5 = (uint)unaff_s3;
  do {
    do {
      do {
        do {
          puVar8 = unaff_s1 + 0x12;
          puVar3 = unaff_s6 + 9;
          iVar4 = unaff_s5 + -1;
          if (unaff_s5 == 0) {
            _DAT_800bf544 = unaff_s3 + 10;
            return puVar3;
          }
          setCopReg(2,in_zero,unaff_s6[0xd]);
          setCopReg(2,unaff_s5,unaff_s6[0xf]);
          setCopReg(2,0x800,unaff_s6[0xe]);
          setCopReg(2,uVar7,unaff_s6[0x10]);
          setCopReg(2,0x1800,(uint)unaff_s6[0xe] >> 0x10);
          setCopReg(2,param_2,unaff_s6[0x11]);
          *(undefined4 *)(unaff_s0 + 7) = *puVar3;
          copFunction(2,0x280030);
          *(undefined4 *)(unaff_s0 + 0xf) = *(undefined4 *)(unaff_s1 + 6);
          *(undefined4 *)(unaff_s0 + 0x1b) = *(undefined4 *)(unaff_s1 + 8);
          uVar7 = *(uint *)(unaff_s1 + 4);
          iVar6 = getCopControlWord(2,0xf800);
          *unaff_s8 = iVar6;
          unaff_s1 = puVar8;
          unaff_s5 = iVar4;
          unaff_s6 = puVar3;
        } while (*unaff_s8 < 0);
        copFunction(2,0x1400006);
        *(uint *)(unaff_s0 + 0x13) = uVar7 & 0xf0f0f0;
        iVar4 = getCopReg(2,0x18);
        *unaff_s8 = iVar4;
      } while (*unaff_s8 < 1);
      uVar2 = getCopReg(2,0xc);
      unaff_s3[0xc] = uVar2;
      uVar2 = getCopReg(2,0xd);
      unaff_s3[0xf] = uVar2;
      uVar2 = getCopReg(2,0xe);
      unaff_s3[0x12] = uVar2;
    } while ((((0x13f < *(ushort *)(unaff_s0 + 0xb)) && (0x13f < *(ushort *)(unaff_s0 + 0x17))) &&
             (0x13f < *(ushort *)(unaff_s0 + 0x23))) ||
            (((0xef < *(ushort *)(unaff_s0 + 0xd) && (0xef < *(ushort *)(unaff_s0 + 0x19))) &&
             (0xef < *(ushort *)(unaff_s0 + 0x25)))));
    *(uint *)(unaff_s0 + 0x1f) = (uVar7 & 0xf0f0f) << 4;
    _DAT_1f800084 = getCopReg(2,0x11);
    _DAT_1f800088 = getCopReg(2,0x12);
    _DAT_1f80008c = getCopReg(2,0x13);
  } while (((uVar7 >> 0x18 & 0x40) != 0) && (_DAT_1f80009c != 0));
  uVar7 = uVar7 >> 0x18 & 3;
  if (uVar7 == 1) {
    if (_DAT_1f800084 <= _DAT_1f800088) {
      puVar3 = (undefined4 *)FUN_80130aac();
      return puVar3;
    }
    iVar4 = *(int *)(unaff_s7 + 0x8c) >> 2;
    if (_DAT_1f800084 <= *(int *)(unaff_s7 + 0x8c)) goto LAB_80127b20;
  }
  else if (uVar7 == 2) {
    if (_DAT_1f800084 < _DAT_1f800088) {
      puVar3 = (undefined4 *)FUN_80130a5c();
      return puVar3;
    }
    iVar4 = *(int *)(unaff_s7 + 0x8c) >> 2;
    if (_DAT_1f800088 < *(int *)(unaff_s7 + 0x8c)) {
      iVar4 = _DAT_1f800088 >> 2;
    }
LAB_80127b20:
    *unaff_s2 = iVar4;
    puVar3 = (undefined4 *)FUN_80130acc();
    return puVar3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

