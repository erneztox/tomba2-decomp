// FUN_8011dd38

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_8011dd38(int param_1,int param_2)

{
  short sVar1;
  uint uVar2;
  undefined4 in_zero;
  undefined2 in_v0;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  char *unaff_s0;
  short *unaff_s1;
  short *psVar8;
  uint *unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int unaff_s6;
  undefined4 *unaff_s7;
  undefined4 extraout_f0;
  int in_stack_00000044;
  
  *(undefined2 *)(param_1 + 0x82) = in_v0;
  *(short *)(param_1 + 0x84) =
       *(short *)((uint)*(byte *)(param_1 + 3) * 2 + param_2 + 0x7600) + 0x5a;
  sVar1 = *(short *)((uint)*(byte *)(param_1 + 3) * 2 + param_2 + 0x7600);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0xaf;
  *(short *)(param_1 + 0x86) = sVar1 + 0xdc;
  iVar3 = func_0x800517f8();
  iVar3 = func_0x80083e80(iVar3 + unaff_s1[-5]);
  sVar1 = *(short *)(unaff_s5 + -0x6ffc);
  *(short *)(unaff_s0 + -0xf) = *(short *)(unaff_s0 + -0xf) + (short)(iVar3 >> 9);
  iVar3 = func_0x80083e80((int)sVar1 + (int)*unaff_s1);
  iVar6 = *unaff_s3;
  *(short *)(unaff_s0 + -3) = *(short *)(unaff_s0 + -3) + (short)(iVar3 >> 9);
  *unaff_s3 = iVar6 + 0x96;
  if (0x7ff < iVar6 + 0x96) {
    *unaff_s3 = 0x7ff;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((unaff_s4 & 0x10) != 0) {
    unaff_s0[-0x19] = unaff_s0[-0x19] + DAT_801388ec;
    unaff_s0[-0x18] = unaff_s0[-0x18] + DAT_801388ee;
    unaff_s0[-0xd] = unaff_s0[-0xd] + DAT_801388ec;
    unaff_s0[-0xc] = unaff_s0[-0xc] + DAT_801388ee;
    unaff_s0[-1] = unaff_s0[-1] + DAT_801388ec;
    *unaff_s0 = *unaff_s0 + DAT_801388ee;
  }
  puVar5 = (uint *)(in_stack_00000044 + *unaff_s3 * 4);
  uVar7 = 0x9000000;
  *unaff_s2 = *puVar5 | 0x9000000;
  *puVar5 = (uint)unaff_s2;
  do {
    do {
      do {
        psVar8 = unaff_s1 + 0x12;
        puVar4 = unaff_s7 + 9;
        iVar3 = unaff_s6 + -1;
        if (unaff_s6 == 0) {
          _DAT_800bf544 = unaff_s2 + 10;
          return puVar4;
        }
        setCopReg(2,in_zero,unaff_s7[0xd]);
        setCopReg(2,unaff_s6,unaff_s7[0xf]);
        setCopReg(2,0x800,unaff_s7[0xe]);
        setCopReg(2,uVar7,unaff_s7[0x10]);
        setCopReg(2,0x1800,(uint)unaff_s7[0xe] >> 0x10);
        setCopReg(2,0x80140000,unaff_s7[0x11]);
        *(undefined4 *)(unaff_s0 + 7) = *puVar4;
        copFunction(2,0x280030);
        *(undefined4 *)(unaff_s0 + 0xf) = *(undefined4 *)(unaff_s1 + 6);
        *(undefined4 *)(unaff_s0 + 0x1b) = *(undefined4 *)(unaff_s1 + 8);
        uVar7 = *(uint *)(unaff_s1 + 4);
        _DAT_1f800000 = getCopControlWord(2,0xf800);
        unaff_s1 = psVar8;
        unaff_s6 = iVar3;
        unaff_s7 = puVar4;
      } while (_DAT_1f800000 < 0);
      copFunction(2,0x1400006);
      *(uint *)(unaff_s0 + 0x13) = uVar7 & 0xf0f0f0;
      _DAT_1f800000 = getCopReg(2,0x18);
    } while (_DAT_1f800000 < 1);
    uVar2 = getCopReg(2,0xc);
    unaff_s2[0xc] = uVar2;
    uVar2 = getCopReg(2,0xd);
    unaff_s2[0xf] = uVar2;
    uVar2 = getCopReg(2,0xe);
    unaff_s2[0x12] = uVar2;
  } while ((((0x13f < *(ushort *)(unaff_s0 + 0xb)) && (0x13f < *(ushort *)(unaff_s0 + 0x17))) &&
           (0x13f < *(ushort *)(unaff_s0 + 0x23))) ||
          (((0xef < *(ushort *)(unaff_s0 + 0xd) && (0xef < *(ushort *)(unaff_s0 + 0x19))) &&
           (0xef < *(ushort *)(unaff_s0 + 0x25)))));
  *(uint *)(unaff_s0 + 0x1f) = (uVar7 & 0xf0f0f) << 4;
  _DAT_1f800084 = getCopReg(2,0x11);
  _DAT_1f800088 = getCopReg(2,0x12);
  _DAT_1f80008c = getCopReg(2,0x13);
  uVar7 = uVar7 >> 0x18 & 3;
  iVar3 = _DAT_1f80008c >> 2;
  if (uVar7 == 1) {
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
    if (uVar7 != 2) {
      puVar4 = (undefined4 *)FUN_8012fb58();
      return puVar4;
    }
    if (_DAT_1f800084 < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (_DAT_1f800088 < _DAT_1f80008c) {
      iVar3 = _DAT_1f800088 >> 2;
    }
  }
  *unaff_s3 = iVar3;
  *(undefined4 *)(unaff_s0 + 0x3967) = extraout_f0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

