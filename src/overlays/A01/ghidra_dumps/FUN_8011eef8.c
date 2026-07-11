// FUN_8011eef8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8011eef8(undefined1 *param_1,undefined4 param_2,undefined4 param_3,char *param_4)

{
  byte bVar1;
  short sVar2;
  bool bVar3;
  undefined4 in_zero;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  undefined4 extraout_at_02;
  byte bVar4;
  ushort uVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  char cVar11;
  char extraout_v1;
  char extraout_v1_00;
  uint in_v1;
  uint uVar12;
  int iVar13;
  uint extraout_v1_01;
  undefined4 *puVar14;
  undefined1 *puVar15;
  undefined1 *puVar16;
  int iVar17;
  undefined4 *puVar18;
  int iVar19;
  undefined4 *puVar20;
  int iVar21;
  byte *pbVar22;
  byte *pbVar23;
  int in_t0;
  int *in_t1;
  uint *in_t2;
  uint in_t3;
  int in_t5;
  uint *in_t6;
  int *in_t7;
  undefined1 *unaff_s1;
  int unaff_s2;
  undefined4 unaff_s3;
  uint *unaff_s5;
  int unaff_s6;
  int unaff_s7;
  uint in_t8;
  code *pcVar24;
  undefined4 unaff_s8;
  undefined4 unaff_retaddr;
  undefined8 uVar25;
  
  pcVar24 = FUN_8011eef8;
  bVar4 = param_1[4];
  puVar15 = (undefined1 *)(uint)bVar4;
  if (puVar15 != (undefined1 *)0x1) {
    if (puVar15 < (undefined1 *)0x2) {
      uVar5 = 1;
      puVar16 = param_1;
      if (puVar15 != (undefined1 *)0x0) goto LAB_80128650;
      iVar19 = 0xc;
      iVar21 = 5;
      puVar15 = param_1;
      puVar6 = (uint *)func_0x80051b70();
      if (puVar6 != (uint *)0x0) {
        return puVar6;
      }
      param_1[0xd] = param_1[0xd] | 4;
      *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x10;
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x2c8;
      uVar12 = (uint)(byte)param_1[3];
      if (uVar12 == 3) {
        uVar7 = 0xfffffc00;
        *(undefined2 *)(param_1 + 0x56) = 0xfc00;
        goto LAB_80127f5c;
      }
      uVar7 = 0x200;
      if (uVar12 == 9) {
        *(undefined2 *)(param_1 + 0x56) = 0x200;
        goto LAB_80127f5c;
      }
      *(undefined2 *)(param_1 + 0x56) = 0;
      iVar17 = 1;
      *(undefined2 *)(param_1 + 0x80) = 0x82;
      *(undefined2 *)(param_1 + 0x82) = 0x104;
      *(undefined2 *)(param_1 + 0x84) = 0x19;
      cVar11 = '2';
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *param_1 = 1;
      param_1[0x29] = 0;
      param_1[0x2b] = 0;
      param_1[0x5e] = 0;
      *(undefined2 *)(param_1 + 0x86) = 0x32;
      param_1[4] = param_1[4] + '\x01';
      unaff_s1 = &DAT_800bf870;
      uVar8 = 2;
      if (DAT_800bf873 == '\0') {
        unaff_s2 = -0x7fec8994;
        iVar19 = func_0x8004d7ec((int)*(short *)((uint)(byte)param_1[3] * 10 + -0x7fec8992),1);
        if (iVar19 != 0) {
          DAT_800bf9fc = DAT_800bf9fc & 0xe3;
          param_1[0xbf] = 1;
          *(undefined4 *)(param_1 + 0x14) = 0;
          iVar21 = *(int *)(*(int *)(param_1 + 0x10) + 0xc0);
          *(undefined2 *)(param_1 + 0x88) = 0;
          sVar2 = *(short *)(iVar21 + 0x3a);
          *(undefined2 *)(param_1 + 0x8c) = 0;
          *(short *)(param_1 + 0x8a) = sVar2 + -0x28;
          func_0x80051d90(iVar21,param_1 + 0x88,param_1 + 0x90);
          *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x90);
          *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x92);
          *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x94);
          uVar25 = func_0x800517f8();
          in_v1 = (uint)((ulonglong)uVar25 >> 0x20);
          uVar5 = (ushort)uVar25;
          puVar16 = param_1;
          goto LAB_80128650;
        }
        cVar11 = param_1[3];
        unaff_s1 = (undefined1 *)0x2;
        iVar17 = 4;
        if (cVar11 == '\x02') {
          iVar19 = 0;
          uVar8 = func_0x8004cc64(param_1);
          *(undefined4 *)(param_1 + 0x14) = uVar8;
          param_1[0xbf] = 2;
          cVar11 = extraout_v1;
        }
        else {
          if (cVar11 == '\x04') goto LAB_8012803c;
          if (cVar11 == '\x06') {
            iVar19 = 2;
            uVar8 = func_0x8004cc64();
            *(undefined4 *)(param_1 + 0x14) = uVar8;
            uVar8 = 3;
            param_1[0xbf] = 3;
            cVar11 = extraout_v1_00;
          }
          else {
            iVar19 = 2;
            iVar21 = 2;
            param_4 = &DAT_00000008;
            uVar25 = func_0x80072ddc(param_1);
            iVar13 = (int)((ulonglong)uVar25 >> 0x20);
            iVar9 = (int)uVar25;
            uVar8 = 0;
            if (iVar9 != 0) {
              *(undefined4 *)(iVar9 + 0x1c) = 0x80040558;
              *(undefined2 *)(iVar9 + 0x88) = 0;
              *(undefined2 *)(iVar9 + 0x8a) = 0x2c8;
              *(undefined2 *)(iVar9 + 0x8c) = 0;
              *(undefined1 *)(iVar9 + 0x5e) = 2;
              *(undefined2 *)(iVar9 + 0xe) =
                   *(undefined2 *)((uint)(byte)param_1[3] * 10 + -0x7fec8992);
              *(undefined1 *)(iVar9 + 3) =
                   *(undefined1 *)((uint)(byte)param_1[3] * 10 + -0x7fec8990);
              *(undefined2 *)(iVar9 + 0x68) =
                   *(undefined2 *)((uint)(byte)param_1[3] * 10 + -0x7fec898e);
              iVar13 = (int)*(short *)(iVar9 + 0x68);
              *(undefined2 *)(iVar9 + 0x60) =
                   *(undefined2 *)((uint)(byte)param_1[3] * 10 + -0x7fec898c);
              if (iVar13 == 0) {
                *(undefined2 *)(iVar9 + 0x62) = 1;
                puVar6 = (uint *)FUN_80128134();
                return puVar6;
              }
              *(undefined2 *)(iVar9 + 0x62) = 4;
              uVar8 = 2;
              *(undefined2 *)(iVar9 + 100) = 2;
              *(undefined1 *)(iVar9 + 0x2a) = 0;
            }
            cVar11 = (char)iVar13;
            *(int *)(param_1 + 0x14) = iVar9;
            param_1[0xbf] = 0;
          }
        }
      }
      else {
        param_1[0xbf] = 2;
      }
      param_4[-0x25] = (char)uVar8 + cVar11;
      param_4[-0x24] = param_4[-0x24] + (&DAT_ffff88ee)[(int)pcVar24];
      param_4[-0x19] = param_4[-0x19] + *(char *)(iVar19 + -0x7714);
      param_4[-0x18] = param_4[-0x18] + (&DAT_ffff88ee)[(int)pcVar24];
      param_4[-0xd] = param_4[-0xd] + *(char *)(iVar19 + -0x7714);
      param_4[-0xc] = param_4[-0xc] + (&DAT_ffff88ee)[(int)pcVar24];
      param_4[-1] = param_4[-1] + *(char *)(iVar19 + -0x7714);
      *param_4 = *param_4 + (&DAT_ffff88ee)[(int)pcVar24];
      puVar6 = (uint *)(iVar17 + *in_t1 * 4);
      puVar15 = (undefined1 *)0xc000000;
      *in_t2 = *puVar6 | 0xc000000;
      *puVar6 = (uint)in_t2;
      param_4 = param_4 + 0x34;
      in_t2 = in_t2 + 0xd;
      do {
        do {
          do {
            do {
              puVar6 = in_t6;
              iVar17 = in_t5;
              in_t5 = iVar17 + 0x2c;
              in_t6 = puVar6 + 0xb;
              iVar19 = iVar21 + -1;
              if (iVar21 == 0) {
                _DAT_800bf544 = in_t2;
                return in_t6;
              }
              setCopReg(2,in_zero,puVar6[0x10]);
              setCopReg(2,0x800,puVar6[0x11]);
              setCopReg(2,0x1800,puVar6[0x11] >> 0x10);
              setCopReg(2,iVar21,puVar6[0x12]);
              setCopReg(2,puVar15,puVar6[0x13]);
              setCopReg(2,0x2800,puVar6[0x14]);
              uVar12 = *in_t6;
              *(uint *)(param_4 + -0x2d) = uVar12 & 0xfff0f0f0;
              copFunction(2,0x280030);
              *(uint *)(param_4 + -0x21) = uVar12 << 4 & in_t8;
              uVar12 = *(uint *)(iVar17 + 0x20);
              iVar21 = getCopControlWord(2,0xf800);
              *in_t7 = iVar21;
              iVar21 = iVar19;
            } while (*in_t7 < 0);
            copFunction(2,0x1400006);
            *(undefined4 *)(param_4 + -0x25) = *(undefined4 *)(iVar17 + 0x24);
            iVar19 = getCopReg(2,0x18);
            *in_t7 = iVar19;
          } while (*in_t7 < 1);
          uVar7 = getCopReg(2,0xc);
          in_t2[2] = uVar7;
          uVar7 = getCopReg(2,0xd);
          in_t2[5] = uVar7;
          uVar7 = getCopReg(2,0xe);
          in_t2[8] = uVar7;
          setCopReg(2,in_zero,puVar6[0x15]);
          setCopReg(2,0x800,puVar6[0x14] >> 0x10);
          *(uint *)(param_4 + -0x15) = uVar12 & in_t8;
          copFunction(2,0x180001);
          *(uint *)(param_4 + -9) = uVar12 << 4 & in_t8;
          *(undefined4 *)(param_4 + -0x19) = *(undefined4 *)(iVar17 + 0x28);
          iVar19 = getCopControlWord(2,0xf800);
          *in_t7 = iVar19;
        } while (*in_t7 < 0);
        uVar7 = getCopReg(2,0xe);
        in_t2[0xb] = uVar7;
        uVar7 = (uint)(*(ushort *)(param_4 + -0x29) < 0x140);
LAB_80127f5c:
      } while (((((uVar7 == 0) && (0x13f < *(ushort *)(param_4 + -0x1d))) &&
                (0x13f < *(ushort *)(param_4 + -0x11))) && (0x13f < *(ushort *)(param_4 + -5))) ||
              ((((in_t3 = uVar12 >> 0x18, 0xef < *(ushort *)(param_4 + -0x27) &&
                 (0xef < *(ushort *)(param_4 + -0x1b))) &&
                ((0xef < *(ushort *)(param_4 + -0xf) && (0xef < *(ushort *)(param_4 + -3))))) ||
               (((in_t3 & 0x40) != 0 && (_DAT_1f80009c != 0))))));
      _DAT_1f800084 = getCopReg(2,0x10);
      _DAT_1f800088 = getCopReg(2,0x11);
      _DAT_1f80008c = getCopReg(2,0x12);
      _DAT_1f800090 = getCopReg(2,0x13);
LAB_8012803c:
      iVar21 = _DAT_1f800090;
      if ((in_t3 & 3) == 1) {
        iVar19 = *(int *)(unaff_s1 + 0x88);
        if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
          iVar19 = *(int *)(unaff_s2 + 0x84);
        }
        bVar3 = _DAT_1f800090 < iVar19;
        if (_DAT_1f800090 < *(int *)(param_1 + 0x8c)) {
          puVar6 = (uint *)FUN_80131074();
          return puVar6;
        }
      }
      else {
        if ((in_t3 & 3) != 2) {
          halt_baddata();
        }
        iVar19 = *(int *)(unaff_s1 + 0x88);
        if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
          iVar19 = *(int *)(unaff_s2 + 0x84);
        }
        iVar17 = *(int *)(param_1 + 0x8c);
        bVar3 = iVar19 < _DAT_1f800090;
        if (iVar17 < _DAT_1f800090) {
          bVar3 = iVar19 < iVar17;
          iVar21 = iVar17;
        }
      }
      if (bVar3) {
        iVar21 = iVar19;
      }
      *in_t1 = iVar21 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar5 = 3;
    if (puVar15 == (undefined1 *)0x2) {
      return (uint *)0x3;
    }
    puVar16 = puVar15;
    if (puVar15 == (undefined1 *)0x3) {
      puVar6 = (uint *)func_0x8007a624(param_1);
      return puVar6;
    }
    goto LAB_80128650;
  }
  bVar1 = param_1[5];
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(*(int *)(param_1 + 0x10) + 0x4a);
  if (bVar1 == 1) {
    if (param_1[0x29] == '\0') goto LAB_8011f330;
    *(byte *)(*(int *)(param_1 + 0x10) + 0xbf) = bVar4;
    if ((param_1[0x29] == '\x01') && (DAT_800e7fc5 == '\0')) {
      _DAT_800e7eb0 = _DAT_800e7eb0 + *(short *)(*(int *)(param_1 + 0x10) + 0x4a) * 0x100;
      puVar6 = (uint *)FUN_801282dc();
      return puVar6;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      puVar6 = (uint *)FUN_801282dc();
      return puVar6;
    }
    if (param_1[0x29] != '\0') {
      *(byte *)(*(int *)(param_1 + 0x10) + 0xbf) = bVar4;
      param_1[5] = param_1[5] + '\x01';
      puVar6 = (uint *)FUN_801282dc();
      return puVar6;
    }
    if (param_1[0x5e] != '\0') {
      *(byte *)(*(int *)(param_1 + 0x10) + 0xbf) = bVar4;
      param_1[5] = 2;
      puVar6 = (uint *)FUN_801282dc();
      return puVar6;
    }
  }
  else {
    if (bVar1 != 2) {
      puVar6 = (uint *)FUN_801282dc();
      return puVar6;
    }
    if (param_1[0x5e] != '\0') {
      *(byte *)(*(int *)(param_1 + 0x10) + 0xbf) = bVar4;
      puVar6 = (uint *)FUN_801282dc();
      return puVar6;
    }
LAB_8011f330:
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0xbf) = 0;
    param_1[5] = 0;
  }
  param_1[0x29] = 0;
  iVar21 = *(int *)(*(int *)(param_1 + 0x10) + 0xc0);
  *(undefined2 *)(param_1 + 0x88) = 0;
  sVar2 = *(short *)(iVar21 + 0x3a);
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(short *)(param_1 + 0x8a) = sVar2 + -0x28;
  func_0x80051d90(iVar21,param_1 + 0x88,param_1 + 0x90);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x90);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x92);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x94);
  func_0x800517f8(param_1);
  iVar21 = func_0x800778e4(param_1,0x2c8);
  uVar8 = extraout_at;
  if (iVar21 == 0) {
    func_0x80077ebc(param_1);
    uVar8 = extraout_at_00;
  }
  puVar16 = (undefined1 *)(uint)(byte)param_1[0xbf];
  pbVar22 = (byte *)0x1;
  if (puVar16 == (undefined1 *)0x0) {
    puVar16 = (undefined1 *)(int)*(short *)((uint)(byte)param_1[3] * 10 + -0x7fec8992);
    uVar25 = func_0x8004d7ec(puVar16,1);
    in_v1 = (uint)((ulonglong)uVar25 >> 0x20);
    uVar5 = 1;
    if ((int)uVar25 == 0) {
      return (uint *)0x1;
    }
    param_1[0xbf] = 1;
    *(undefined4 *)(param_1 + 0x14) = 0;
    goto LAB_80128650;
  }
  puVar20 = (undefined4 *)0x2;
  if (puVar16 != (undefined1 *)0x1) {
    puVar6 = (uint *)0x3;
    if (puVar16 != (undefined1 *)0x2) {
      if (puVar16 == (undefined1 *)0x3) {
        puVar6 = (uint *)0x0;
        if ((*(int *)(param_1 + 0x14) != 0) &&
           (puVar6 = (uint *)0x4, *(char *)(*(int *)(param_1 + 0x14) + 4) == '\x02')) {
          if (param_1[3] == '\x04') {
            bVar4 = DAT_800bfa0f | 1;
            pbVar23 = pbVar22;
            goto LAB_80128630;
          }
          if (param_1[3] != '\x06') {
            puVar6 = (uint *)FUN_80128634();
            return puVar6;
          }
          DAT_800bfa0f = DAT_800bfa0f | 2;
          puVar16 = &DAT_0000004c;
          func_0x80040b48();
          uVar5 = 1;
          param_1[0xbf] = 1;
          in_v1 = extraout_v1_01;
          goto LAB_80128650;
        }
      }
      return puVar6;
    }
    iVar21 = *(int *)(param_1 + 0x14);
    if (iVar21 == 0) {
      return (uint *)0x3;
    }
    if (*(char *)(iVar21 + 4) != '\x02') {
      *(undefined2 *)(iVar21 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
      *(short *)(*(int *)(param_1 + 0x14) + 0x32) = *(short *)(param_1 + 0x32) + 0x2b8;
      in_v1 = *(uint *)(param_1 + 0x14);
      uVar5 = *(ushort *)(param_1 + 0x36);
      *(ushort *)(in_v1 + 0x36) = uVar5;
      goto LAB_80128650;
    }
    in_v1 = (uint)(byte)param_1[3];
    puVar18 = (undefined4 *)0x2;
    if (in_v1 == 2) {
LAB_8012858c:
      do {
        if (0xef < *(ushort *)((int)puVar20 + 0x2a)) goto LAB_80128628;
        do {
          bVar4 = pbVar22[4];
          if ((bVar4 & 1) != 0) {
            puVar20[9] = param_4;
            puVar6 = (uint *)FUN_8013155c();
            return puVar6;
          }
          puVar20[9] = 0;
          if ((bVar4 & 2) != 0) {
            puVar20[6] = param_4;
            puVar6 = (uint *)FUN_80131574();
            return puVar6;
          }
          puVar20[6] = 0;
          if ((bVar4 & 4) != 0) {
            puVar20[3] = param_4;
            puVar6 = (uint *)FUN_8013158c(puVar18);
            return puVar6;
          }
          puVar20[3] = 0;
          if ((bVar4 & 8) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          *puVar20 = 0x3c000000;
          *unaff_s5 = *(uint *)(unaff_s7 + 0x1ffc) | 0xc000000;
          *(uint **)(unaff_s7 + 0x1ffc) = unaff_s5;
          puVar20 = puVar20 + 0xd;
          unaff_s5 = unaff_s5 + 0xd;
LAB_80128628:
          do {
            unaff_s6 = unaff_s6 + 1;
            bVar4 = unaff_s6 < 0x2c;
            pbVar23 = pbVar22;
LAB_80128630:
            pbVar22 = pbVar23 + 5;
            if (bVar4 == 0) {
              param_4 = (char *)0x800c0000;
              goto LAB_8012863c;
            }
            puVar18 = (undefined4 *)((uint)*pbVar22 * 8 + in_t0);
            puVar14 = (undefined4 *)((uint)pbVar23[6] * 8 + in_t0);
            puVar10 = (undefined4 *)((uint)pbVar23[7] * 8 + in_t0);
            setCopReg(2,in_zero,*puVar18);
            setCopReg(2,uVar8,puVar18[1]);
            setCopReg(2,puVar10,*puVar14);
            setCopReg(2,puVar14,puVar14[1]);
            setCopReg(2,puVar18,*puVar10);
            setCopReg(2,puVar20,puVar10[1]);
            puVar20[2] = unaff_s2;
            copFunction(2,0x280030);
            puVar20[5] = unaff_s3;
            uVar12 = getCopReg(2,0xc);
            unaff_s5[2] = uVar12;
            uVar12 = getCopReg(2,0xd);
            unaff_s5[5] = uVar12;
            uVar12 = getCopReg(2,0xe);
            unaff_s5[8] = uVar12;
            puVar10 = (undefined4 *)((uint)pbVar23[8] * 8 + in_t0);
LAB_801284dc:
            setCopReg(2,in_zero,*puVar10);
            setCopReg(2,uVar8,puVar10[1]);
            puVar20[8] = unaff_retaddr;
            copFunction(2,0x180001);
            puVar20[0xb] = unaff_s8;
            uVar12 = getCopReg(2,0xe);
            unaff_s5[0xb] = uVar12;
          } while ((((0x13f < *(ushort *)(puVar20 + 1)) && (0x13f < *(ushort *)(puVar20 + 4))) &&
                   (0x13f < *(ushort *)(puVar20 + 7))) && (0x13f < *(ushort *)(puVar20 + 10)));
        } while (((*(ushort *)((int)puVar20 + 6) < 0xf0) ||
                 (*(ushort *)((int)puVar20 + 0x12) < 0xf0)) ||
                (*(ushort *)((int)puVar20 + 0x1e) < 0xf0));
      } while( true );
    }
    if (in_v1 < 3) {
      if (in_v1 == 1) goto LAB_8012858c;
      iVar21 = 1;
    }
    else {
      uVar5 = 1;
      if (in_v1 != 4) {
        param_1[0xbf] = 1;
        goto LAB_80128650;
      }
      DAT_800bf9fc = DAT_800bf9fc & 0xef;
LAB_8012863c:
      iVar21 = -0x7fec0000;
    }
    in_v1 = (uint)_DAT_801388ee;
    uVar5 = (ushort)&DAT_00000040;
    puVar16 = (undefined1 *)(uint)*(ushort *)(iVar21 + -0x7714);
    goto LAB_80128650;
  }
  puVar6 = (uint *)(uint)*(byte *)(*(int *)(param_1 + 0x10) + 0x46);
  if (puVar6 != (uint *)0x0) {
    return puVar6;
  }
  if (*(short *)(*(int *)(param_1 + 0x10) + 0x4a) == 0) {
    return (uint *)0x0;
  }
  in_v1 = (uint)(byte)param_1[3];
  uVar5 = (ushort)(in_v1 < 3);
  if (in_v1 == 2) {
    puVar15 = (undefined1 *)(uint)(*(short *)(param_1 + 0x32) < -1999);
    puVar16 = (undefined1 *)0x0;
    if ((puVar15 == (undefined1 *)0x0) &&
       (puVar15 = (undefined1 *)((int)(uint)DAT_800bf9fc >> 3 & 1), puVar15 == (undefined1 *)0x0)) {
      puVar10 = (undefined4 *)FUN_80112948(param_1);
      uVar8 = extraout_at_02;
      puVar18 = puVar10;
      goto LAB_801284dc;
    }
  }
  else if (in_v1 < 3) {
    if (in_v1 != 1) goto LAB_80128650;
    puVar15 = (undefined1 *)(uint)(*(short *)(param_1 + 0x32) < -1999);
    puVar16 = (undefined1 *)0x0;
    if ((puVar15 == (undefined1 *)0x0) &&
       (puVar15 = (undefined1 *)((int)(uint)DAT_800bf9fc >> 2 & 1), puVar15 == (undefined1 *)0x0)) {
      puVar10 = (undefined4 *)FUN_80112948(param_1);
      uVar8 = extraout_at_01;
      puVar18 = puVar10;
      goto LAB_801284dc;
    }
  }
  else {
    uVar5 = 4;
    if (in_v1 != 4) goto LAB_80128650;
    puVar15 = (undefined1 *)(uint)(*(short *)(param_1 + 0x32) < -1999);
    puVar16 = (undefined1 *)0x0;
    if ((puVar15 == (undefined1 *)0x0) &&
       (puVar15 = (undefined1 *)((int)(uint)DAT_800bf9fc >> 4 & 1), puVar15 == (undefined1 *)0x0)) {
      puVar15 = (undefined1 *)FUN_80112948(param_1);
      in_v1 = DAT_800bf9fc | 0x10;
      DAT_800bf9fc = (byte)in_v1;
      param_1[0xbf] = 2;
      puVar16 = puVar15;
    }
  }
  uVar5 = (ushort)puVar15;
  *(undefined1 **)(param_1 + 0x14) = puVar16;
LAB_80128650:
  *(uint **)(param_4 + -0xabc) = unaff_s5;
  *(undefined1 *)((int)unaff_s5 + 3) = 2;
  unaff_s5[2] = 0;
  unaff_s5[1] = (in_v1 >> 3 & 0x1f) << 0xf | ((uint)puVar16 >> 3 & 0x1f) << 10 | 0xe2000000 |
                (-(int)(short)uVar5 & 0xf8U) << 2 | (int)(-(int)(short)uVar5 & 0xffU) >> 3;
  *unaff_s5 = *(uint *)(unaff_s7 + 0x1ffc) | 0x2000000;
  *(uint **)(unaff_s7 + 0x1ffc) = unaff_s5;
  *(uint **)(param_4 + -0xabc) = unaff_s5 + 3;
  return unaff_s5 + 3;
}

