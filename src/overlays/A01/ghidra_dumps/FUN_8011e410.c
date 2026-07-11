// FUN_8011e410

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8011e410(int param_1,int param_2,int param_3)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 in_zero;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  int in_t0;
  uint *in_t1;
  uint in_t2;
  int in_t3;
  int iVar8;
  int *in_t5;
  int in_t6;
  int in_t7;
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  int unaff_s6;
  uint *in_t8;
  code *pcVar9;
  
  pcVar9 = FUN_8011e410;
  bVar1 = *(byte *)(param_1 + 4);
  uVar4 = (uint)(bVar1 < 2);
  if (bVar1 == 1) {
    uVar4 = FUN_8012702c(param_1);
  }
  else if (uVar4 == 0) {
    uVar4 = 3;
    if (bVar1 == 2) {
      return (uint *)0x3;
    }
    if (bVar1 == 3) {
      puVar6 = (uint *)func_0x8007a624(param_1);
      return puVar6;
    }
  }
  else if (bVar1 == 0) {
    param_2 = 0xc;
    param_3 = 3;
    iVar5 = func_0x80051b70(param_1);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 4;
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x40;
      *(undefined1 *)(param_1 + 0x29) = 0;
      *(undefined1 *)(param_1 + 0x2b) = 0;
      *(undefined1 *)(param_1 + 0x5e) = 0;
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
    *(undefined2 *)(param_1 + 0x2e) = 0x4180;
    *(undefined2 *)(param_1 + 0x32) = 0xe60e;
    *(undefined2 *)(param_1 + 0x36) = 0x2340;
    uVar4 = func_0x800517f8();
  }
  if (uVar4 != 0) {
    iVar5 = *(int *)(param_1 + 0x8c);
    uVar4 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
    *(uint *)(in_t3 + 0x80) = uVar4;
    if (iVar5 < 0) {
      iVar5 = iVar5 + 3;
    }
    setCopReg(2,0x4000,(iVar5 >> 2) + (uVar4 >> 0x16));
    setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -0x15));
    copFunction(2,0x780010);
    uVar4 = getCopReg(2,0x16);
    in_t1[7] = uVar4;
  }
  if ((in_t2 & 0x40) == 0) {
    puVar6 = (uint *)(unaff_s6 + *in_t5 * 4);
    *in_t1 = *puVar6 | 0xc000000;
    *puVar6 = (uint)in_t1;
    do {
      do {
        do {
          do {
            puVar6 = in_t8;
            iVar7 = in_t7;
            in_t7 = iVar7 + 0x2c;
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
            uVar4 = *in_t8;
            *(uint *)(in_t0 + 7) = uVar4 & 0xfff0f0f0;
            copFunction(2,0x280030);
            *(uint *)(in_t0 + 0x13) = uVar4 << 4 & unaff_s3;
            uVar4 = *(uint *)(iVar7 + 0x20);
            iVar8 = getCopControlWord(2,0xf800);
            *(int *)pcVar9 = iVar8;
            param_3 = iVar5;
          } while (*(int *)pcVar9 < 0);
          copFunction(2,0x1400006);
          *(undefined4 *)(in_t0 + 0xf) = *(undefined4 *)(iVar7 + 0x24);
          iVar5 = getCopReg(2,0x18);
          *(int *)pcVar9 = iVar5;
        } while (*(int *)pcVar9 < 1);
        uVar3 = getCopReg(2,0xc);
        in_t1[0xf] = uVar3;
        uVar3 = getCopReg(2,0xd);
        in_t1[0x12] = uVar3;
        uVar3 = getCopReg(2,0xe);
        in_t1[0x15] = uVar3;
        setCopReg(2,in_zero,puVar6[0x15]);
        setCopReg(2,0x800,puVar6[0x14] >> 0x10);
        *(uint *)(in_t0 + 0x1f) = uVar4 & unaff_s3;
        copFunction(2,0x180001);
        *(uint *)(in_t0 + 0x2b) = uVar4 << 4 & unaff_s3;
        *(undefined4 *)(in_t0 + 0x1b) = *(undefined4 *)(iVar7 + 0x28);
        iVar5 = getCopControlWord(2,0xf800);
        *(int *)pcVar9 = iVar5;
      } while (*(int *)pcVar9 < 0);
      uVar3 = getCopReg(2,0xe);
      in_t1[0x18] = uVar3;
    } while (((((0x13f < *(ushort *)(in_t0 + 0xb)) && (0x13f < *(ushort *)(in_t0 + 0x17))) &&
              (0x13f < *(ushort *)(in_t0 + 0x23))) && (0x13f < *(ushort *)(in_t0 + 0x2f))) ||
            (((0xef < *(ushort *)(in_t0 + 0xd) && (0xef < *(ushort *)(in_t0 + 0x19))) &&
             ((0xef < *(ushort *)(in_t0 + 0x25) && (0xef < *(ushort *)(in_t0 + 0x31)))))));
    _DAT_1f800084 = getCopReg(2,0x10);
    _DAT_1f800088 = getCopReg(2,0x11);
    _DAT_1f80008c = getCopReg(2,0x12);
    _DAT_1f800090 = getCopReg(2,0x13);
    uVar4 = uVar4 >> 0x18 & 3;
    if (uVar4 == 1) {
      iVar5 = *(int *)(unaff_s1 + 0x88);
      if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
        iVar5 = *(int *)(unaff_s2 + 0x84);
      }
      iVar7 = *(int *)(param_2 + 0x90);
      bVar2 = iVar7 < iVar5;
      if (iVar7 < *(int *)(param_1 + 0x8c)) {
        puVar6 = (uint *)FUN_801302f0();
        return puVar6;
      }
    }
    else {
      if (uVar4 != 2) {
        halt_baddata();
      }
      iVar5 = *(int *)(unaff_s1 + 0x88);
      if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
        iVar5 = *(int *)(unaff_s2 + 0x84);
      }
      iVar7 = *(int *)(param_2 + 0x90);
      iVar8 = *(int *)(param_1 + 0x8c);
      bVar2 = iVar5 < iVar7;
      if (iVar8 < iVar7) {
        bVar2 = iVar5 < iVar8;
        iVar7 = iVar8;
      }
    }
    if (bVar2) {
      iVar7 = iVar5;
    }
    *in_t5 = iVar7 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar5 = *(int *)(param_2 + 0x90);
  uVar4 = *(int *)(in_t3 + 0x80) * in_t6 + 0x3039;
  *(uint *)(in_t3 + 0x80) = uVar4;
  if (iVar5 < 0) {
    iVar5 = iVar5 + 3;
  }
  setCopReg(2,0x4000,(iVar5 >> 2) + (uVar4 >> 0x16));
  setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -9));
  copFunction(2,0x780010);
  uVar4 = getCopReg(2,0x16);
  in_t1[10] = uVar4;
  puVar6 = (uint *)FUN_801307c4();
  return puVar6;
}

