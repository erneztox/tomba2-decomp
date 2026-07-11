// FUN_80115124

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_80115124(undefined1 *param_1)

{
  short sVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 in_zero;
  int iVar5;
  uint *puVar6;
  byte bVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  int iVar11;
  int in_t0;
  int in_t1;
  int *in_t5;
  int in_t7;
  int iVar12;
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint *in_t8;
  code *pcVar13;
  
  pcVar13 = FUN_80115124;
  bVar7 = param_1[3];
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
  uVar4 = _DAT_800ecfbc;
  iVar10 = 0xf;
  if ((bVar7 & 0x20) != 0) {
    iVar10 = 0x10;
  }
  if ((bVar7 & 0x40) != 0) {
    *(undefined1 *)(bVar7 + 0x46) = param_1[0x46];
    param_1[5] = (char)iVar10;
    puVar6 = (uint *)FUN_80127270(param_1,iVar10,uVar4,&DAT_80130000);
    return puVar6;
  }
  puVar9 = param_1;
  iVar11 = _DAT_800ecfb8;
  iVar5 = func_0x800519e0(param_1,iVar10,_DAT_800ecfb8,0x80135724);
  if (iVar5 == 0) {
    param_1[0xb] = 0x40;
    *param_1 = 9;
    *(undefined2 *)(param_1 + 0x80) = 0xaa;
    *(undefined2 *)(param_1 + 0x82) = 0x154;
    *(undefined2 *)(param_1 + 0x84) = 0xc0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x86) = 0x160;
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
  }
  bVar7 = param_1[3] & 0x1f;
  *(undefined2 *)(param_1 + 0x56) = 0;
  if (bVar7 == 6) {
    iVar5 = -0x7fee1bfc;
  }
  else if (bVar7 < 7) {
    iVar5 = -0x7fee0000;
    if ((param_1[3] & 0x1f) == 0) {
      iVar5 = -0x7fee1cdc;
    }
  }
  else {
    iVar5 = -0x7fee0000;
    if (bVar7 == 10) {
      *(undefined **)(param_1 + 0x1c) = &DAT_8011eb00;
      return (uint *)&DAT_8011eb00;
    }
  }
  if (iVar5 != 0) {
    uVar8 = 0;
    if (iVar5 < 0x1f00) {
      sVar1 = *(short *)(param_1 + 0x60);
      *(short *)(param_1 + 0x60) = sVar1 + 1;
      if ((0x1f00 - *(short *)(param_1 + 0x4a) >> 7) + 7 <= (int)(short)(sVar1 + 1)) {
        func_0x80074590(0x82,0,0);
        *(undefined2 *)(param_1 + 0x60) = 0;
        puVar6 = (uint *)FUN_80127270();
        return puVar6;
      }
      iVar10 = func_0x8007778c(param_1);
      puVar6 = (uint *)0x0;
      if (iVar10 != 0) {
        puVar6 = (uint *)func_0x800517f8(param_1);
      }
      return puVar6;
    }
    *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 1;
    do {
      iVar5 = getCopControlWord(2,0xf800);
      *(int *)pcVar13 = iVar5;
      iVar5 = iVar11;
      if (-1 < *(int *)pcVar13) {
        uVar4 = getCopReg(2,0xe);
        *(undefined4 *)(in_t1 + 0x2c) = uVar4;
        if (((((*(ushort *)(in_t0 + -0x29) < 0x140) || (*(ushort *)(in_t0 + -0x1d) < 0x140)) ||
             (*(ushort *)(in_t0 + -0x11) < 0x140)) || (*(ushort *)(in_t0 + -5) < 0x140)) &&
           (((*(ushort *)(in_t0 + -0x27) < 0xf0 || (*(ushort *)(in_t0 + -0x1b) < 0xf0)) ||
            ((*(ushort *)(in_t0 + -0xf) < 0xf0 || (*(ushort *)(in_t0 + -3) < 0xf0)))))) {
          _DAT_1f800084 = getCopReg(2,0x10);
          _DAT_1f800088 = getCopReg(2,0x11);
          _DAT_1f80008c = getCopReg(2,0x12);
          _DAT_1f800090 = getCopReg(2,0x13);
          uVar8 = uVar8 >> 0x18 & 3;
          if (uVar8 == 1) {
            iVar11 = *(int *)(unaff_s1 + 0x88);
            if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
              iVar11 = *(int *)(unaff_s2 + 0x84);
            }
            iVar10 = *(int *)(iVar10 + 0x90);
            bVar2 = iVar10 < iVar11;
            if (iVar10 < *(int *)(param_1 + 0x8c)) {
              puVar6 = (uint *)FUN_801302f0();
              return puVar6;
            }
          }
          else {
            if (uVar8 != 2) {
              halt_baddata();
            }
            iVar11 = *(int *)(unaff_s1 + 0x88);
            if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
              iVar11 = *(int *)(unaff_s2 + 0x84);
            }
            iVar10 = *(int *)(iVar10 + 0x90);
            iVar5 = *(int *)(param_1 + 0x8c);
            bVar2 = iVar11 < iVar10;
            if (iVar5 < iVar10) {
              bVar2 = iVar11 < iVar5;
              iVar10 = iVar5;
            }
          }
          if (bVar2) {
            iVar10 = iVar11;
          }
          *in_t5 = iVar10 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      do {
        do {
          puVar6 = in_t8;
          iVar12 = in_t7;
          in_t7 = iVar12 + 0x2c;
          in_t8 = puVar6 + 0xb;
          iVar11 = iVar5 + -1;
          if (iVar5 == 0) {
            _DAT_800bf544 = in_t1;
            return in_t8;
          }
          setCopReg(2,in_zero,puVar6[0x10]);
          setCopReg(2,0x800,puVar6[0x11]);
          setCopReg(2,0x1800,puVar6[0x11] >> 0x10);
          setCopReg(2,iVar5,puVar6[0x12]);
          setCopReg(2,puVar9,puVar6[0x13]);
          setCopReg(2,0x2800,puVar6[0x14]);
          uVar8 = *in_t8;
          *(uint *)(in_t0 + -0x2d) = uVar8 & 0xfff0f0f0;
          copFunction(2,0x280030);
          *(uint *)(in_t0 + -0x21) = uVar8 << 4 & unaff_s3;
          uVar8 = *(uint *)(iVar12 + 0x20);
          iVar5 = getCopControlWord(2,0xf800);
          *(int *)pcVar13 = iVar5;
          iVar5 = iVar11;
        } while (*(int *)pcVar13 < 0);
        copFunction(2,0x1400006);
        *(undefined4 *)(in_t0 + -0x25) = *(undefined4 *)(iVar12 + 0x24);
        iVar3 = getCopReg(2,0x18);
        *(int *)pcVar13 = iVar3;
      } while (*(int *)pcVar13 < 1);
      uVar4 = getCopReg(2,0xc);
      *(undefined4 *)(in_t1 + 8) = uVar4;
      uVar4 = getCopReg(2,0xd);
      *(undefined4 *)(in_t1 + 0x14) = uVar4;
      uVar4 = getCopReg(2,0xe);
      *(undefined4 *)(in_t1 + 0x20) = uVar4;
      setCopReg(2,in_zero,puVar6[0x15]);
      setCopReg(2,0x800,puVar6[0x14] >> 0x10);
      *(uint *)(in_t0 + -0x15) = uVar8 & unaff_s3;
      copFunction(2,0x180001);
      *(uint *)(in_t0 + -9) = uVar8 << 4 & unaff_s3;
      *(undefined4 *)(in_t0 + -0x19) = *(undefined4 *)(iVar12 + 0x28);
    } while( true );
  }
  param_1[5] = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 0;
  puVar6 = (uint *)FUN_80127270();
  return puVar6;
}

