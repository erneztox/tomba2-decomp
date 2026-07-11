// FUN_80115468

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_80115468(int param_1,int param_2)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_zero;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  char *in_t0;
  uint *in_t1;
  uint in_t2;
  int *in_t5;
  int in_t7;
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint *in_t8;
  code *pcVar12;
  
  pcVar12 = FUN_80115468;
  bVar1 = *(byte *)(param_1 + 4);
  iVar10 = 1;
  iVar11 = param_1;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return (uint *)0x3;
      }
      if (bVar1 == 3) {
        puVar6 = (uint *)func_0x8007a624(param_1);
        return puVar6;
      }
      goto LAB_8011e6c0;
    }
    if (bVar1 != 0) goto LAB_8011e6c0;
    if (2 < DAT_800bf9fb) {
      if (DAT_800bf909 == -1) {
        *(undefined1 *)(param_1 + 0x5e) = 5;
        puVar6 = (uint *)FUN_8011e4dc();
        return puVar6;
      }
      if (DAT_800bf909 != '\0') {
        if (DAT_800bf9fb == 4) {
          *(undefined1 *)(param_1 + 0x5e) = 4;
          puVar6 = (uint *)FUN_8011e4dc();
          return puVar6;
        }
        *(undefined1 *)(param_1 + 0x5e) = 3;
        puVar6 = (uint *)FUN_8011e4dc();
        return puVar6;
      }
      if (DAT_800bf907 == -1) {
        *(undefined1 *)(param_1 + 0x5e) = 2;
        puVar6 = (uint *)FUN_8011e4dc();
        return puVar6;
      }
      if (DAT_800bf9fb == 4) {
        *(undefined1 *)(param_1 + 0x5e) = 1;
        puVar6 = (uint *)FUN_8011e4dc();
        return puVar6;
      }
      *(undefined1 *)(param_1 + 0x5e) = 0;
      if (*(char *)(param_1 + 0x5e) == '\x05') {
        puVar6 = (uint *)func_0x80051b70(param_1,0x801393c0,3);
        if (puVar6 == (uint *)0x0) {
          *(undefined1 *)(param_1 + 0xb) = 0;
          *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
          *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x40;
          *(undefined1 *)(param_1 + 0x29) = 0;
          *(undefined1 *)(param_1 + 0x2b) = 0;
          *(undefined1 *)(param_1 + 0x5e) = 0;
          *(undefined2 *)(param_1 + 0x4a) = 0;
          *(undefined2 *)(param_1 + 0x60) = 0;
          puVar6 = (uint *)(*(byte *)(param_1 + 4) + 1);
          *(char *)(param_1 + 4) = (char)puVar6;
        }
        return puVar6;
      }
      func_0x80040cdc(param_1,0x801393c0,0x801363d4);
      *(undefined1 *)(param_1 + 5) = 3;
      puVar6 = (uint *)FUN_8011e5cc();
      return puVar6;
    }
    if (DAT_800bf909 == -1) {
      *(undefined1 *)(param_1 + 0x5e) = 6;
      return (uint *)&DAT_00000006;
    }
    if (DAT_800bf907 == -1) {
      if (DAT_800bfb15 == '\0') {
        *(undefined1 *)(param_1 + 0x5e) = 2;
        return (uint *)0x2;
      }
      if (DAT_800bf908 == -1) {
        if (DAT_800bf909 != '\0') {
          *(undefined1 *)(param_1 + 0x5e) = 3;
          return (uint *)0x3;
        }
        *(undefined1 *)(param_1 + 0x5e) = 4;
        return (uint *)0x4;
      }
      *(undefined1 *)(param_1 + 0x5e) = 5;
      return (uint *)&DAT_00000005;
    }
    if (DAT_800bf906 == -1) {
      *(undefined1 *)(param_1 + 0x5e) = 1;
      return (uint *)0xff;
    }
    *(undefined1 *)(param_1 + 0x5e) = 0;
    func_0x80040cdc(param_1,0x801393c0,0x800a3d40);
    param_2 = 0;
    iVar10 = 0;
    func_0x80041718(param_1);
    *(undefined2 *)(param_1 + 0x56) = 0x800;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x80077e7c(param_1);
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    func_0x80041098(param_1);
    func_0x8004190c(param_1);
    FUN_8011ea60(param_1);
    puVar6 = (uint *)FUN_8011e6a8();
    return puVar6;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      puVar6 = (uint *)FUN_8011e6a8();
      return puVar6;
    }
    func_0x80041098(param_1);
    func_0x8004190c(param_1);
    FUN_8011e9e8(param_1);
    puVar6 = (uint *)FUN_8011e6a8();
    return puVar6;
  }
  if (bVar1 == 2) {
    func_0x80041098(param_1);
    func_0x8004190c(param_1);
    FUN_8011e6d0(param_1);
    puVar6 = (uint *)FUN_8011e6a8();
    return puVar6;
  }
  if (bVar1 != 3) {
    puVar6 = (uint *)FUN_8011e6a8();
    return puVar6;
  }
  FUN_8011e804(param_1);
  func_0x800518fc();
  *(undefined1 *)(param_1 + 0x2b) = 0;
LAB_8011e6c0:
  DAT_800e807e = (undefined1)iVar11;
  if (DAT_800bf80f == '\0') {
    param_2 = 0;
    iVar10 = 0;
    func_0x80074590(0x84);
  }
  puVar7 = (undefined4 *)(((_DAT_1f80017c & 3) - 2) * 0xc);
  *(short *)(*(int *)(param_1 + 0xc0) + 2) = (short)puVar7;
  sVar2 = *(short *)(param_1 + 0x42);
  *(short *)(param_1 + 0x42) = sVar2 + -1;
  if (sVar2 == 1) {
    DAT_800e807e = 0;
    setCopReg(2,0x4000,0);
    setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x2d));
    copFunction(2,0x780010);
    uVar5 = getCopReg(2,0x16);
    *puVar7 = uVar5;
    setCopReg(2,0x4000,*(int *)(unaff_s1 + 0x88) >> 2);
    setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x21));
    copFunction(2,0x780010);
    uVar8 = getCopReg(2,0x16);
    in_t1[4] = uVar8;
    setCopReg(2,0x4000,*(int *)(param_1 + 0x8c) >> 2);
    setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x15));
    copFunction(2,0x780010);
    uVar8 = getCopReg(2,0x16);
    in_t1[7] = uVar8;
    setCopReg(2,0x4000,*(int *)(param_2 + 0x90) >> 2);
    setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -9));
    copFunction(2,0x780010);
    uVar8 = getCopReg(2,0x16);
    in_t1[10] = uVar8;
    if ((in_t2 & 0x10) != 0) {
      in_t0[-0x25] = in_t0[-0x25] + *(char *)(unaff_s5 + -0x7714);
      in_t0[-0x24] = in_t0[-0x24] + (&DAT_ffff88ee)[unaff_s4];
      in_t0[-0x19] = in_t0[-0x19] + *(char *)(unaff_s5 + -0x7714);
      in_t0[-0x18] = in_t0[-0x18] + (&DAT_ffff88ee)[unaff_s4];
      in_t0[-0xd] = in_t0[-0xd] + *(char *)(unaff_s5 + -0x7714);
      in_t0[-0xc] = in_t0[-0xc] + (&DAT_ffff88ee)[unaff_s4];
      in_t0[-1] = in_t0[-1] + *(char *)(unaff_s5 + -0x7714);
      *in_t0 = *in_t0 + (&DAT_ffff88ee)[unaff_s4];
    }
    puVar6 = (uint *)(unaff_s6 + *in_t5 * 4);
    *in_t1 = *puVar6 | 0xc000000;
    *puVar6 = (uint)in_t1;
    do {
      do {
        do {
          do {
            puVar6 = in_t8;
            iVar9 = in_t7;
            in_t7 = iVar9 + 0x2c;
            in_t8 = puVar6 + 0xb;
            iVar11 = iVar10 + -1;
            if (iVar10 == 0) {
              _DAT_800bf544 = in_t1 + 0xd;
              return in_t8;
            }
            setCopReg(2,in_zero,puVar6[0x10]);
            setCopReg(2,0x800,puVar6[0x11]);
            setCopReg(2,0x1800,puVar6[0x11] >> 0x10);
            setCopReg(2,iVar10,puVar6[0x12]);
            setCopReg(2,0xc000000,puVar6[0x13]);
            setCopReg(2,0x2800,puVar6[0x14]);
            uVar8 = *in_t8;
            *(uint *)(in_t0 + 7) = uVar8 & 0xfff0f0f0;
            copFunction(2,0x280030);
            *(uint *)(in_t0 + 0x13) = uVar8 << 4 & unaff_s3;
            uVar8 = *(uint *)(iVar9 + 0x20);
            iVar10 = getCopControlWord(2,0xf800);
            *(int *)pcVar12 = iVar10;
            iVar10 = iVar11;
          } while (*(int *)pcVar12 < 0);
          copFunction(2,0x1400006);
          *(undefined4 *)(in_t0 + 0xf) = *(undefined4 *)(iVar9 + 0x24);
          iVar11 = getCopReg(2,0x18);
          *(int *)pcVar12 = iVar11;
        } while (*(int *)pcVar12 < 1);
        uVar4 = getCopReg(2,0xc);
        in_t1[0xf] = uVar4;
        uVar4 = getCopReg(2,0xd);
        in_t1[0x12] = uVar4;
        uVar4 = getCopReg(2,0xe);
        in_t1[0x15] = uVar4;
        setCopReg(2,in_zero,puVar6[0x15]);
        setCopReg(2,0x800,puVar6[0x14] >> 0x10);
        *(uint *)(in_t0 + 0x1f) = uVar8 & unaff_s3;
        copFunction(2,0x180001);
        *(uint *)(in_t0 + 0x2b) = uVar8 << 4 & unaff_s3;
        *(undefined4 *)(in_t0 + 0x1b) = *(undefined4 *)(iVar9 + 0x28);
        iVar11 = getCopControlWord(2,0xf800);
        *(int *)pcVar12 = iVar11;
      } while (*(int *)pcVar12 < 0);
      uVar4 = getCopReg(2,0xe);
      in_t1[0x18] = uVar4;
    } while (((((0x13f < *(ushort *)(in_t0 + 0xb)) && (0x13f < *(ushort *)(in_t0 + 0x17))) &&
              (0x13f < *(ushort *)(in_t0 + 0x23))) && (0x13f < *(ushort *)(in_t0 + 0x2f))) ||
            (((0xef < *(ushort *)(in_t0 + 0xd) && (0xef < *(ushort *)(in_t0 + 0x19))) &&
             ((0xef < *(ushort *)(in_t0 + 0x25) && (0xef < *(ushort *)(in_t0 + 0x31)))))));
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
      iVar10 = *(int *)(param_2 + 0x90);
      bVar3 = iVar10 < iVar11;
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
      iVar10 = *(int *)(param_2 + 0x90);
      iVar9 = *(int *)(param_1 + 0x8c);
      bVar3 = iVar11 < iVar10;
      if (iVar9 < iVar10) {
        bVar3 = iVar11 < iVar9;
        iVar10 = iVar9;
      }
    }
    if (bVar3) {
      iVar10 = iVar11;
    }
    *in_t5 = iVar10 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return (uint *)0x0;
}

