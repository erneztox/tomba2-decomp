// FUN_8011e5e0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8011e5e0(int param_1,int param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 in_zero;
  short sVar3;
  ushort uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  int iVar8;
  char *in_t0;
  uint *in_t1;
  uint in_t2;
  int iVar9;
  int *in_t5;
  int in_t7;
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  uint *in_t8;
  code *pcVar10;
  
  pcVar10 = FUN_8011e5e0;
  puVar6 = (uint *)(uint)*(byte *)(param_1 + 7);
  if (puVar6 == (uint *)0x1) {
LAB_8011e650:
    sVar3 = *(short *)(param_1 + 0x44) + 4;
    *(short *)(param_1 + 0x44) = sVar3;
    if (0x20 < sVar3) {
      *(undefined2 *)(param_1 + 0x44) = 0x20;
    }
    uVar4 = *(short *)(param_1 + 0x58) + *(short *)(param_1 + 0x44);
    *(ushort *)(param_1 + 0x58) = uVar4;
    iVar5 = 2;
    if ((int)((uint)uVar4 << 0x10) < 1) {
      *(undefined1 *)(param_1 + 0xbf) = 2;
    }
    else {
      *(undefined2 *)(param_1 + 0x58) = 0;
      iVar5 = *(byte *)(param_1 + 7) + 1;
      *(char *)(param_1 + 7) = (char)iVar5;
    }
    puVar6 = in_t1 + 1;
  }
  else {
    if (puVar6 < (uint *)0x2) {
      iVar5 = 0;
      if (puVar6 != (uint *)0x0) goto LAB_801276d4;
      puVar6 = (uint *)0x0;
      if (*(short *)(param_1 + 0x58) != 0) {
        if (*(short *)(param_1 + 0x58) == -0x400) {
          return (uint *)0x1;
        }
        *(undefined1 *)(param_1 + 7) = 1;
        *(undefined2 *)(param_1 + 0x44) = 0;
        goto LAB_8011e650;
      }
    }
    else {
      if (puVar6 == (uint *)0x2) {
        *(undefined1 *)(param_1 + 7) = 3;
        *(undefined2 *)(param_1 + 0x42) = 8;
        DAT_800e807e = 1;
        if (DAT_800bf80f == '\0') {
          param_2 = 0;
          param_3 = 0;
          func_0x80074590(0x84);
        }
      }
      else {
        iVar5 = 0;
        if (puVar6 != (uint *)0x3) goto LAB_801276d4;
      }
      puVar6 = (uint *)(((_DAT_1f80017c & 3) - 2) * 0xc);
      *(short *)(*(int *)(param_1 + 0xc0) + 2) = (short)puVar6;
      sVar3 = *(short *)(param_1 + 0x42);
      *(short *)(param_1 + 0x42) = sVar3 + -1;
      if (sVar3 != 1) {
        return (uint *)0x0;
      }
      DAT_800e807e = 0;
    }
    iVar5 = 1;
  }
LAB_801276d4:
  setCopReg(2,0x4000,iVar5 >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x2d));
  copFunction(2,0x780010);
  uVar7 = getCopReg(2,0x16);
  *puVar6 = uVar7;
  setCopReg(2,0x4000,*(int *)(unaff_s1 + 0x88) >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x21));
  copFunction(2,0x780010);
  uVar7 = getCopReg(2,0x16);
  in_t1[4] = uVar7;
  setCopReg(2,0x4000,*(int *)(param_1 + 0x8c) >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x15));
  copFunction(2,0x780010);
  uVar7 = getCopReg(2,0x16);
  in_t1[7] = uVar7;
  setCopReg(2,0x4000,*(int *)(param_2 + 0x90) >> 2);
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -9));
  copFunction(2,0x780010);
  uVar7 = getCopReg(2,0x16);
  in_t1[10] = uVar7;
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
          iVar8 = in_t7;
          in_t7 = iVar8 + 0x2c;
          in_t8 = puVar6 + 0xb;
          iVar5 = param_3 + -1;
          if (param_3 == 0) {
            _DAT_800bf544 = in_t1 + 0xd;
            return in_t8;
          }
          setCopReg(2,in_zero,puVar6[0x10]);
          setCopReg(2,0x800,puVar6[0x11]);
          setCopReg(2,0x1800,puVar6[0x11] >> 0x10);
          setCopReg(2,param_3,puVar6[0x12]);
          setCopReg(2,0xc000000,puVar6[0x13]);
          setCopReg(2,0x2800,puVar6[0x14]);
          uVar7 = *in_t8;
          *(uint *)(in_t0 + 7) = uVar7 & 0xfff0f0f0;
          copFunction(2,0x280030);
          *(uint *)(in_t0 + 0x13) = uVar7 << 4 & unaff_s3;
          uVar7 = *(uint *)(iVar8 + 0x20);
          iVar9 = getCopControlWord(2,0xf800);
          *(int *)pcVar10 = iVar9;
          param_3 = iVar5;
        } while (*(int *)pcVar10 < 0);
        copFunction(2,0x1400006);
        *(undefined4 *)(in_t0 + 0xf) = *(undefined4 *)(iVar8 + 0x24);
        iVar5 = getCopReg(2,0x18);
        *(int *)pcVar10 = iVar5;
      } while (*(int *)pcVar10 < 1);
      uVar2 = getCopReg(2,0xc);
      in_t1[0xf] = uVar2;
      uVar2 = getCopReg(2,0xd);
      in_t1[0x12] = uVar2;
      uVar2 = getCopReg(2,0xe);
      in_t1[0x15] = uVar2;
      setCopReg(2,in_zero,puVar6[0x15]);
      setCopReg(2,0x800,puVar6[0x14] >> 0x10);
      *(uint *)(in_t0 + 0x1f) = uVar7 & unaff_s3;
      copFunction(2,0x180001);
      *(uint *)(in_t0 + 0x2b) = uVar7 << 4 & unaff_s3;
      *(undefined4 *)(in_t0 + 0x1b) = *(undefined4 *)(iVar8 + 0x28);
      iVar5 = getCopControlWord(2,0xf800);
      *(int *)pcVar10 = iVar5;
    } while (*(int *)pcVar10 < 0);
    uVar2 = getCopReg(2,0xe);
    in_t1[0x18] = uVar2;
  } while (((((0x13f < *(ushort *)(in_t0 + 0xb)) && (0x13f < *(ushort *)(in_t0 + 0x17))) &&
            (0x13f < *(ushort *)(in_t0 + 0x23))) && (0x13f < *(ushort *)(in_t0 + 0x2f))) ||
          (((0xef < *(ushort *)(in_t0 + 0xd) && (0xef < *(ushort *)(in_t0 + 0x19))) &&
           ((0xef < *(ushort *)(in_t0 + 0x25) && (0xef < *(ushort *)(in_t0 + 0x31)))))));
  _DAT_1f800084 = getCopReg(2,0x10);
  _DAT_1f800088 = getCopReg(2,0x11);
  _DAT_1f80008c = getCopReg(2,0x12);
  _DAT_1f800090 = getCopReg(2,0x13);
  uVar7 = uVar7 >> 0x18 & 3;
  if (uVar7 == 1) {
    iVar5 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
      iVar5 = *(int *)(unaff_s2 + 0x84);
    }
    iVar8 = *(int *)(param_2 + 0x90);
    bVar1 = iVar8 < iVar5;
    if (iVar8 < *(int *)(param_1 + 0x8c)) {
      puVar6 = (uint *)FUN_801302f0();
      return puVar6;
    }
  }
  else {
    if (uVar7 != 2) {
      halt_baddata();
    }
    iVar5 = *(int *)(unaff_s1 + 0x88);
    if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
      iVar5 = *(int *)(unaff_s2 + 0x84);
    }
    iVar8 = *(int *)(param_2 + 0x90);
    iVar9 = *(int *)(param_1 + 0x8c);
    bVar1 = iVar5 < iVar8;
    if (iVar9 < iVar8) {
      bVar1 = iVar5 < iVar9;
      iVar8 = iVar9;
    }
  }
  if (bVar1) {
    iVar8 = iVar5;
  }
  *in_t5 = iVar8 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

