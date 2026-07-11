// FUN_8011df24

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_8011df24(void)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 in_zero;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  char *unaff_s0;
  int unaff_s1;
  int iVar6;
  uint *unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  int unaff_s6;
  int iVar7;
  undefined4 *unaff_s7;
  undefined4 in_f0;
  int in_stack_00000044;
  
  puVar4 = (undefined4 *)(uint)(byte)unaff_s0[3];
  if ((puVar4 != (undefined4 *)0x1) && (puVar4 != (undefined4 *)0x2)) {
    if (puVar4 == (undefined4 *)0x3) {
      unaff_s0[0x56] = -0x60;
      unaff_s0[0x57] = '\0';
    }
    unaff_s0[0x47] = '\0';
    FUN_80126608();
    unaff_s0[0x80] = '2';
    unaff_s0[0x81] = '\0';
    unaff_s0[0x82] = 'd';
    unaff_s0[0x83] = '\0';
    *(short *)(unaff_s0 + 0x84) = *(short *)((uint)(byte)unaff_s0[3] * 2 + -0x7fec8a00) + 0x5a;
    puVar4 = (undefined4 *)(*(ushort *)((uint)(byte)unaff_s0[3] * 2 + -0x7fec8a00) + 0xdc);
    *(short *)(unaff_s0 + 0x86) = (short)puVar4;
    return puVar4;
  }
  setCopReg(2,0x3000,*(undefined4 *)(unaff_s0 + -0x21));
  copFunction(2,0x780010);
  uVar2 = getCopReg(2,0x16);
  *puVar4 = uVar2;
  setCopReg(2,0x4000,_DAT_1f800088 >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(unaff_s0 + -0x15));
  copFunction(2,0x780010);
  uVar5 = getCopReg(2,0x16);
  unaff_s2[4] = uVar5;
  setCopReg(2,0x4000,_DAT_1f80008c >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(unaff_s0 + -9));
  copFunction(2,0x780010);
  uVar5 = getCopReg(2,0x16);
  unaff_s2[7] = uVar5;
  if ((unaff_s4 & 0x10) != 0) {
    unaff_s0[-0x19] = unaff_s0[-0x19] + DAT_801388ec;
    unaff_s0[-0x18] = unaff_s0[-0x18] + DAT_801388ee;
    unaff_s0[-0xd] = unaff_s0[-0xd] + DAT_801388ec;
    unaff_s0[-0xc] = unaff_s0[-0xc] + DAT_801388ee;
    unaff_s0[-1] = unaff_s0[-1] + DAT_801388ec;
    *unaff_s0 = *unaff_s0 + DAT_801388ee;
  }
  puVar3 = (uint *)(in_stack_00000044 + *unaff_s3 * 4);
  uVar5 = 0x9000000;
  *unaff_s2 = *puVar3 | 0x9000000;
  *puVar3 = (uint)unaff_s2;
  do {
    do {
      do {
        iVar6 = unaff_s1 + 0x24;
        puVar4 = unaff_s7 + 9;
        iVar7 = unaff_s6 + -1;
        if (unaff_s6 == 0) {
          _DAT_800bf544 = unaff_s2 + 10;
          return puVar4;
        }
        setCopReg(2,in_zero,unaff_s7[0xd]);
        setCopReg(2,unaff_s6,unaff_s7[0xf]);
        setCopReg(2,0x800,unaff_s7[0xe]);
        setCopReg(2,uVar5,unaff_s7[0x10]);
        setCopReg(2,0x1800,(uint)unaff_s7[0xe] >> 0x10);
        setCopReg(2,0x80140000,unaff_s7[0x11]);
        *(undefined4 *)(unaff_s0 + 7) = *puVar4;
        copFunction(2,0x280030);
        *(undefined4 *)(unaff_s0 + 0xf) = *(undefined4 *)(unaff_s1 + 0xc);
        *(undefined4 *)(unaff_s0 + 0x1b) = *(undefined4 *)(unaff_s1 + 0x10);
        uVar5 = *(uint *)(unaff_s1 + 8);
        _DAT_1f800000 = getCopControlWord(2,0xf800);
        unaff_s1 = iVar6;
        unaff_s6 = iVar7;
        unaff_s7 = puVar4;
      } while (_DAT_1f800000 < 0);
      copFunction(2,0x1400006);
      *(uint *)(unaff_s0 + 0x13) = uVar5 & 0xf0f0f0;
      _DAT_1f800000 = getCopReg(2,0x18);
    } while (_DAT_1f800000 < 1);
    uVar1 = getCopReg(2,0xc);
    unaff_s2[0xc] = uVar1;
    uVar1 = getCopReg(2,0xd);
    unaff_s2[0xf] = uVar1;
    uVar1 = getCopReg(2,0xe);
    unaff_s2[0x12] = uVar1;
  } while ((((0x13f < *(ushort *)(unaff_s0 + 0xb)) && (0x13f < *(ushort *)(unaff_s0 + 0x17))) &&
           (0x13f < *(ushort *)(unaff_s0 + 0x23))) ||
          (((0xef < *(ushort *)(unaff_s0 + 0xd) && (0xef < *(ushort *)(unaff_s0 + 0x19))) &&
           (0xef < *(ushort *)(unaff_s0 + 0x25)))));
  *(uint *)(unaff_s0 + 0x1f) = (uVar5 & 0xf0f0f) << 4;
  _DAT_1f800084 = getCopReg(2,0x11);
  _DAT_1f800088 = getCopReg(2,0x12);
  _DAT_1f80008c = getCopReg(2,0x13);
  uVar5 = uVar5 >> 0x18 & 3;
  iVar6 = _DAT_1f80008c >> 2;
  if (uVar5 == 1) {
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
    if (uVar5 != 2) {
      puVar4 = (undefined4 *)FUN_8012fb58();
      return puVar4;
    }
    if (_DAT_1f800084 < _DAT_1f800088) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (_DAT_1f800088 < _DAT_1f80008c) {
      iVar6 = _DAT_1f800088 >> 2;
    }
  }
  *unaff_s3 = iVar6;
  *(undefined4 *)(unaff_s0 + 0x3967) = in_f0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

