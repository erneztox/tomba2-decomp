// FUN_8011dc80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_8011dc80(char *param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  uint uVar4;
  undefined4 in_zero;
  undefined4 *puVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  uint uVar9;
  uint *unaff_s2;
  int *unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int iVar10;
  undefined4 *unaff_s7;
  undefined4 extraout_f0;
  int in_stack_00000024;
  
  bVar1 = param_1[4];
  puVar5 = (undefined4 *)(uint)(bVar1 < 2);
  if (bVar1 == 1) {
    puVar5 = (undefined4 *)FUN_801267e8(param_1);
  }
  else {
    if (puVar5 == (undefined4 *)0x0) {
      puVar5 = (undefined4 *)0x3;
      if (bVar1 != 2) {
        if (bVar1 != 3) goto LAB_80126d3c;
        puVar5 = (undefined4 *)func_0x8007a624(param_1);
      }
      return puVar5;
    }
    if (bVar1 == 0) {
      FUN_80126a80(param_1);
      cVar2 = param_1[3];
      if (cVar2 == '\x01') {
        puVar5 = (undefined4 *)FUN_80126cb0();
        return puVar5;
      }
      if (cVar2 == '\x02') {
        puVar5 = (undefined4 *)FUN_80126cb0();
        return puVar5;
      }
      if (cVar2 == '\x03') {
        param_1[0x56] = -0x60;
        param_1[0x57] = '\0';
      }
      param_1[0x47] = '\0';
      FUN_80126608(param_1);
      param_1[0x80] = '2';
      param_1[0x81] = '\0';
      param_1[0x82] = 'd';
      param_1[0x83] = '\0';
      *(short *)(param_1 + 0x84) = *(short *)((uint)(byte)param_1[3] * 2 + -0x7fec8a00) + 0x5a;
      sVar3 = *(short *)((uint)(byte)param_1[3] * 2 + -0x7fec8a00);
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0xaf;
      *(short *)(param_1 + 0x86) = sVar3 + 0xdc;
      puVar5 = (undefined4 *)func_0x800517f8();
    }
  }
LAB_80126d3c:
  iVar6 = func_0x80083e80((int)puVar5 + (int)_DAT_fffffff7);
  sVar3 = *(short *)(unaff_s5 + -0x6ffc);
  *(short *)(param_1 + -0xf) = *(short *)(param_1 + -0xf) + (short)(iVar6 >> 9);
  iVar6 = func_0x80083e80((int)sVar3 + (int)sRam00000001);
  iVar8 = *unaff_s3;
  *(short *)(param_1 + -3) = *(short *)(param_1 + -3) + (short)(iVar6 >> 9);
  *unaff_s3 = iVar8 + 0x96;
  if (0x7ff < iVar8 + 0x96) {
    *unaff_s3 = 0x7ff;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((unaff_s4 & 0x10) != 0) {
    param_1[-0x19] = param_1[-0x19] + DAT_801388ec;
    param_1[-0x18] = param_1[-0x18] + DAT_801388ee;
    param_1[-0xd] = param_1[-0xd] + DAT_801388ec;
    param_1[-0xc] = param_1[-0xc] + DAT_801388ee;
    param_1[-1] = param_1[-1] + DAT_801388ec;
    *param_1 = *param_1 + DAT_801388ee;
  }
  puVar7 = (uint *)(in_stack_00000024 + *unaff_s3 * 4);
  uVar9 = 0x9000000;
  *unaff_s2 = *puVar7 | 0x9000000;
  *puVar7 = (uint)unaff_s2;
  iVar6 = 1;
  do {
    do {
      do {
        iVar8 = iVar6 + 0x24;
        puVar5 = unaff_s7 + 9;
        iVar10 = unaff_s6 + -1;
        if (unaff_s6 == 0) {
          _DAT_800bf544 = unaff_s2 + 10;
          return puVar5;
        }
        setCopReg(2,in_zero,unaff_s7[0xd]);
        setCopReg(2,unaff_s6,unaff_s7[0xf]);
        setCopReg(2,0x800,unaff_s7[0xe]);
        setCopReg(2,uVar9,unaff_s7[0x10]);
        setCopReg(2,0x1800,(uint)unaff_s7[0xe] >> 0x10);
        setCopReg(2,0x80140000,unaff_s7[0x11]);
        *(undefined4 *)(param_1 + 7) = *puVar5;
        copFunction(2,0x280030);
        *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(iVar6 + 0xc);
        *(undefined4 *)(param_1 + 0x1b) = *(undefined4 *)(iVar6 + 0x10);
        uVar9 = *(uint *)(iVar6 + 8);
        _DAT_1f800000 = getCopControlWord(2,0xf800);
        iVar6 = iVar8;
        unaff_s6 = iVar10;
        unaff_s7 = puVar5;
      } while (_DAT_1f800000 < 0);
      copFunction(2,0x1400006);
      *(uint *)(param_1 + 0x13) = uVar9 & 0xf0f0f0;
      _DAT_1f800000 = getCopReg(2,0x18);
    } while (_DAT_1f800000 < 1);
    uVar4 = getCopReg(2,0xc);
    unaff_s2[0xc] = uVar4;
    uVar4 = getCopReg(2,0xd);
    unaff_s2[0xf] = uVar4;
    uVar4 = getCopReg(2,0xe);
    unaff_s2[0x12] = uVar4;
  } while ((((0x13f < *(ushort *)(param_1 + 0xb)) && (0x13f < *(ushort *)(param_1 + 0x17))) &&
           (0x13f < *(ushort *)(param_1 + 0x23))) ||
          (((0xef < *(ushort *)(param_1 + 0xd) && (0xef < *(ushort *)(param_1 + 0x19))) &&
           (0xef < *(ushort *)(param_1 + 0x25)))));
  *(uint *)(param_1 + 0x1f) = (uVar9 & 0xf0f0f) << 4;
  _DAT_1f800084 = getCopReg(2,0x11);
  _DAT_1f800088 = getCopReg(2,0x12);
  _DAT_1f80008c = getCopReg(2,0x13);
  uVar9 = uVar9 >> 0x18 & 3;
  iVar6 = _DAT_1f80008c >> 2;
  if (uVar9 == 1) {
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
    if (uVar9 != 2) {
      puVar5 = (undefined4 *)FUN_8012fb58();
      return puVar5;
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
  *(undefined4 *)(param_1 + 0x3967) = extraout_f0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

