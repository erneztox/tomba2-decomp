// FUN_801141B0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8011d3ec) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_8011416c(code *param_1,undefined4 param_2,short *param_3)

{
  short sVar1;
  code cVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  code *pcVar9;
  short *psVar10;
  undefined4 uVar11;
  code *pcVar12;
  short *psVar13;
  short *psVar14;
  undefined2 *in_t0;
  int in_t1;
  short **ppsVar15;
  uint in_t3;
  undefined2 *in_t5;
  int in_t6;
  int in_t7;
  uint uVar16;
  code *unaff_s3;
  int unaff_s4;
  int unaff_s5;
  int unaff_s6;
  int in_t8;
  undefined2 in_lo;
  undefined8 uVar17;
  
  psVar14 = DAT_80109954;
  pcVar12 = FUN_8011416c;
  ppsVar15 = &DAT_80109954;
  uVar16 = (uint)(byte)param_1[5];
  pcVar9 = param_1;
  if (uVar16 != 1) {
    if (uVar16 < 2) {
      puVar3 = &LAB_800c0000;
      if (uVar16 != 0) goto LAB_8011d550;
      if ((((DAT_800bf89c == '\x02') || (DAT_1f800207 != '\n')) || (6999 < _DAT_1f8000d2)) &&
         (iVar6 = func_0x8007778c(param_1), iVar6 != 0)) {
        if (param_1[0x2b] == (code)0x3) {
          iVar6 = 0;
          if (DAT_1f800207 == '\n') {
            FUN_8011d208();
            return;
          }
        }
        else {
          iVar6 = 2;
          if ((_DAT_800bf808 & 0xffff0000) != 0x63010000) {
            iVar6 = 0;
          }
        }
        iVar8 = 1;
        if (iVar6 != 0) {
          func_0x80042354(1,3);
          if (iVar6 == 1) {
            func_0x80040d68(param_1,0x80149174);
            param_1[6] = (code)0x0;
            FUN_8011d260();
            return;
          }
          if (iVar6 != 2) {
            param_1[0x70] = (code)0x2;
            *(undefined1 *)(iVar8 + 4) = 1;
            psVar10 = (short *)(int)_DAT_800e7ed6;
            iVar6 = (int)*(short *)(iVar8 + 0x56);
            psVar13 = (short *)0x0;
            uVar17 = func_0x80077768();
            if ((int)uVar17 != 0) {
              iVar7 = *(int *)(psVar10 + 0x60);
              iVar5 = unaff_s5 +
                      *(int *)((int)((ulonglong)uVar17 >> 0x20) +
                              *(short *)(iVar8 + 0x56) + 0x800 + unaff_s6);
              while( true ) {
                if (iVar6 == 0) {
                  trap(0x1c00);
                }
                if ((iVar6 == -1) && (iVar5 - iVar7 == -0x80000000)) {
                  trap(0x1800);
                }
                in_t0[-1] = (short)((iVar5 - iVar7) / iVar6);
                if (iVar6 == 0) {
                  trap(0x1c00);
                }
                if ((iVar6 == -1) && ((int)*psVar13 - (int)*psVar10 == -0x80000000)) {
                  trap(0x1800);
                }
                *in_t0 = (short)(((int)*psVar13 - (int)*psVar10) / iVar6);
                psVar14[-8] = psVar10[-8];
                psVar14[-7] = psVar10[-7];
                psVar14[-6] = psVar10[-6];
                psVar14[-4] = psVar10[-4];
                in_t1 = in_t1 + 1;
                psVar14[-3] = psVar10[-3];
                ppsVar15 = (short **)((int)ppsVar15 + 0x12);
                psVar14[-5] = psVar10[-5];
                psVar14[-2] = psVar10[-2];
                psVar14[-1] = psVar10[-1];
                *psVar14 = *psVar10;
                psVar14 = psVar14 + 0x12;
                if ((int)in_t3 <= in_t1) break;
                if (iVar6 == 0) {
                  trap(0x1c00);
                }
                if ((iVar6 == -1) && ((int)psVar13[10] - (int)psVar10[10] == -0x80000000)) {
                  trap(0x1800);
                }
                *(short *)ppsVar15 = (short)(((int)psVar13[10] - (int)psVar10[10]) / iVar6);
                if (iVar6 == 0) {
                  trap(0x1c00);
                }
                if ((iVar6 == -1) && ((int)psVar13[0xb] - (int)psVar10[0xb] == -0x80000000)) {
                  trap(0x1800);
                }
                in_t0[2] = (short)(((int)psVar13[0xb] - (int)psVar10[0xb]) / iVar6);
                if (iVar6 == 0) {
                  trap(0x1c00);
                }
                if ((iVar6 == -1) && ((int)psVar13[0xc] - (int)psVar10[0xc] == -0x80000000)) {
                  trap(0x1800);
                }
                in_t0[3] = (short)(((int)psVar13[0xc] - (int)psVar10[0xc]) / iVar6);
                if (iVar6 == 0) {
                  trap(0x1c00);
                }
                if ((iVar6 == -1) && ((int)psVar13[0xe] - (int)psVar10[0xe] == -0x80000000)) {
                  trap(0x1800);
                }
                in_t0[4] = (short)(((int)psVar13[0xe] - (int)psVar10[0xe]) / iVar6);
                if (iVar6 == 0) {
                  trap(0x1c00);
                }
                if ((iVar6 == -1) && ((int)psVar13[0xf] - (int)psVar10[0xf] == -0x80000000)) {
                  trap(0x1800);
                }
                in_t0[5] = (short)(((int)psVar13[0xf] - (int)psVar10[0xf]) / iVar6);
                if (iVar6 == 0) {
                  trap(0x1c00);
                }
                if ((iVar6 == -1) && ((int)psVar13[0xd] - (int)psVar10[0xd] == -0x80000000)) {
                  trap(0x1800);
                }
                in_t0[6] = (short)(((int)psVar13[0xd] - (int)psVar10[0xd]) / iVar6);
                if (iVar6 == 0) {
                  trap(0x1c00);
                }
                if ((iVar6 == -1) && ((int)psVar13[0x10] - (int)psVar10[0x10] == -0x80000000)) {
                  trap(0x1800);
                }
                in_t0[7] = (short)(((int)psVar13[0x10] - (int)psVar10[0x10]) / iVar6);
                iVar5 = (int)psVar13[0x11];
                iVar7 = (int)psVar10[0x11];
                psVar10 = psVar10 + 0x12;
                psVar13 = psVar13 + 0x12;
                in_t0 = in_t0 + 9;
              }
              in_t3 = (uint)*(ushort *)(in_t6 + 2);
              in_t1 = 0;
              if (in_t3 != 0) {
                iVar6 = (int)(short)iVar8;
                psVar14 = (short *)(in_t8 + 0x26);
                param_3 = (short *)(in_t7 + 0x26);
                pcVar12 = pcVar12 + 0x26;
                in_t0 = in_t5 + 0xb;
                do {
                  iVar8 = (int)param_3[-9];
                  iVar5 = (int)*(short *)(pcVar12 + -0x12);
                  unaff_s3 = pcVar12;
LAB_8012f338:
                  if (iVar6 == 0) {
                    trap(0x1c00);
                  }
                  if ((iVar6 == -1) && (iVar8 - iVar5 == -0x80000000)) {
                    trap(0x1800);
                  }
                  *in_t5 = (short)((iVar8 - iVar5) / iVar6);
                  if (iVar6 == 0) {
                    trap(0x1c00);
                  }
                  if ((iVar6 == -1) &&
                     ((int)param_3[-8] - (int)*(short *)(unaff_s3 + -0x10) == -0x80000000)) {
                    trap(0x1800);
                  }
                  in_t0[-10] = (short)(((int)param_3[-8] - (int)*(short *)(unaff_s3 + -0x10)) /
                                      iVar6);
                  if (iVar6 == 0) {
                    trap(0x1c00);
                  }
                  if ((iVar6 == -1) &&
                     ((int)param_3[-7] - (int)*(short *)(unaff_s3 + -0xe) == -0x80000000)) {
                    trap(0x1800);
                  }
                  in_t0[-9] = (short)(((int)param_3[-7] - (int)*(short *)(unaff_s3 + -0xe)) / iVar6)
                  ;
                  in_lo = (undefined2)(((int)param_3[-5] - (int)*(short *)(unaff_s3 + -10)) / iVar6)
                  ;
                  if (iVar6 == 0) {
                    trap(0x1c00);
                  }
                  if ((iVar6 == -1) &&
                     ((int)param_3[-5] - (int)*(short *)(unaff_s3 + -10) == -0x80000000)) {
LAB_8012f42c:
                    trap(0x1800);
                  }
                  in_t0[-8] = in_lo;
                  if (iVar6 == 0) {
                    trap(0x1c00);
                  }
                  if ((iVar6 == -1) &&
                     ((int)param_3[-4] - (int)*(short *)(unaff_s3 + -8) == -0x80000000)) {
                    trap(0x1800);
                  }
                  in_t0[-7] = (short)(((int)param_3[-4] - (int)*(short *)(unaff_s3 + -8)) / iVar6);
                  if (iVar6 == 0) {
                    trap(0x1c00);
                  }
                  if ((iVar6 == -1) &&
                     ((int)param_3[-6] - (int)*(short *)(unaff_s3 + -0xc) == -0x80000000)) {
                    trap(0x1800);
                  }
                  in_t0[-6] = (short)(((int)param_3[-6] - (int)*(short *)(unaff_s3 + -0xc)) / iVar6)
                  ;
                  if (iVar6 == 0) {
                    trap(0x1c00);
                  }
                  if ((iVar6 == -1) &&
                     ((int)param_3[-3] - (int)*(short *)(unaff_s3 + -6) == -0x80000000)) {
                    trap(0x1800);
                  }
                  in_t0[-5] = (short)(((int)param_3[-3] - (int)*(short *)(unaff_s3 + -6)) / iVar6);
                  if (iVar6 == 0) {
                    trap(0x1c00);
                  }
                  if ((iVar6 == -1) &&
                     ((int)param_3[-2] - (int)*(short *)(unaff_s3 + -4) == -0x80000000)) {
                    trap(0x1800);
                  }
                  in_t0[-4] = (short)(((int)param_3[-2] - (int)*(short *)(unaff_s3 + -4)) / iVar6);
                  if (iVar6 == 0) {
                    trap(0x1c00);
                  }
                  if ((iVar6 == -1) &&
                     ((int)param_3[-1] - (int)*(short *)(unaff_s3 + -2) == -0x80000000)) {
                    trap(0x1800);
                  }
                  in_t0[-3] = (short)(((int)param_3[-1] - (int)*(short *)(unaff_s3 + -2)) / iVar6);
                  if (iVar6 == 0) {
                    trap(0x1c00);
                  }
                  if ((iVar6 == -1) &&
                     ((int)param_3[1] - (int)*(short *)(unaff_s3 + 2) == -0x80000000)) {
                    trap(0x1800);
                  }
                  in_t0[-2] = (short)(((int)param_3[1] - (int)*(short *)(unaff_s3 + 2)) / iVar6);
                  if (iVar6 == 0) {
                    trap(0x1c00);
                  }
                  if ((iVar6 == -1) &&
                     ((int)param_3[2] - (int)*(short *)(unaff_s3 + 4) == -0x80000000)) {
                    trap(0x1800);
                  }
                  in_t0[-1] = (short)(((int)param_3[2] - (int)*(short *)(unaff_s3 + 4)) / iVar6);
                  if (iVar6 == 0) {
                    trap(0x1c00);
                  }
                  if ((iVar6 == -1) && ((int)*param_3 - (int)*(short *)unaff_s3 == -0x80000000)) {
                    trap(0x1800);
                  }
                  *in_t0 = (short)(((int)*param_3 - (int)*(short *)unaff_s3) / iVar6);
                  psVar14[-9] = *(short *)(unaff_s3 + -0x12);
                  psVar14[-8] = *(short *)(unaff_s3 + -0x10);
                  psVar14[-7] = *(short *)(unaff_s3 + -0xe);
                  psVar14[-5] = *(short *)(unaff_s3 + -10);
                  psVar14[-4] = *(short *)(unaff_s3 + -8);
                  psVar14[-6] = *(short *)(unaff_s3 + -0xc);
                  psVar14[-3] = *(short *)(unaff_s3 + -6);
                  in_t1 = in_t1 + 1;
                  psVar14[-2] = *(short *)(unaff_s3 + -4);
                  in_t5 = in_t5 + 0xc;
                  psVar14[-1] = *(short *)(unaff_s3 + -2);
                  param_3 = param_3 + 0x16;
                  psVar14[1] = *(short *)(unaff_s3 + 2);
                  in_t0 = in_t0 + 0xc;
                  psVar14[2] = *(short *)(unaff_s3 + 4);
                  pcVar12 = unaff_s3 + 0x2c;
                  *psVar14 = *(short *)unaff_s3;
                  psVar14 = psVar14 + 0x16;
                } while (in_t1 < (int)in_t3);
              }
              return;
            }
            *(char *)(iVar8 + 0x46) = (char)(*(ushort *)(iVar8 + 0x56) >> 4);
            FUN_80125c4c(iVar8);
            return;
          }
          func_0x80040d68(param_1,0x8014932c);
          param_1[6] = (code)0x1;
          param_1[0x70] = (code)0x2;
          puVar3 = (undefined1 *)0x1;
          param_1[5] = (code)0x1;
          uVar16 = 2;
          goto LAB_8011d550;
        }
        sVar1 = *(short *)(param_1 + 0x40);
        *(ushort *)(param_1 + 0x40) = sVar1 - 1U;
        if ((int)((uint)(ushort)(sVar1 - 1U) << 0x10) < 1) {
          func_0x8009a450();
          return;
        }
      }
    }
    else {
      puVar3 = (undefined1 *)0x3;
      if (uVar16 == 2) {
        if ((byte)param_1[7] < 7) {
          FUN_8011ce94(param_1,0,param_3,DAT_80109954,DAT_80109954);
          FUN_8011d534();
          return;
        }
        if (param_1[7] != (code)0x7) {
          FUN_8011d534();
          return;
        }
        if (param_1[0x70] == (code)0xff) {
          *(short *)(param_1 + 0x40) = 0x1e;
          param_1[5] = (code)0x0;
          FUN_8011d534();
          return;
        }
      }
      else {
        if (uVar16 != 3) goto LAB_8011d550;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
        switch(param_1[7]) {
        case (code)0x0:
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      if (param_1[0x47] != (code)0x0) {
        param_1[1] = (code)0x1;
        func_0x80077e7c(param_1);
      }
    }
LAB_801145b4:
    func_0x80041098(param_1);
    func_0x8004190c(param_1);
    return;
  }
  param_1[1] = param_1[5];
  func_0x80077e7c(param_1);
  if (param_1[0x70] != (code)0xff) goto LAB_801145b4;
  cVar2 = param_1[6];
  if (cVar2 == (code)0x1) {
    if (DAT_800bf9e0 == 0) {
      func_0x80040d68(param_1,0x80148d74);
      iVar6 = func_0x80040c00(0x3c);
      if (-1 < iVar6) {
        uVar11 = 0x38;
        if (param_1[0x5e] == (code)0x0) {
          uVar11 = 0x39;
        }
        func_0x8004d4c4(uVar11,1);
        func_0x8004b0d8(param_1);
        cVar2 = param_1[0x5e];
        param_1[0x5e] = (code)((byte)cVar2 | 8);
        if (param_1[3] == (code)0x1) {
          param_1[0x5e] = (code)(((byte)cVar2 | 8) << 4);
          FUN_80126414();
          return;
        }
        DAT_800bf9f2 = DAT_800bf9f2 & 0xf0 | (byte)param_1[0x5e];
      }
      param_1[4] = (code)0x3;
      func_0x8007778c(param_1);
      FUN_801312cc();
      if (unaff_s3[3] == (code)0x0) {
        iVar6 = 0;
        goto LAB_8012f42c;
      }
      if (unaff_s3[3] == (code)0x1) {
        func_0x8004cbd8();
      }
      if ((DAT_800bf89c == '\x02') && (unaff_s3[3] == (code)0x0)) {
        unaff_s3[5] = (code)0x5;
      }
      unaff_s3[0x29] = (code)0x0;
      unaff_s3[0x2b] = (code)0x0;
      return;
    }
    func_0x80040d68(param_1,0x80148ec4);
    param_1[5] = (code)0x3;
    param_1[0x70] = (code)0x2;
    puVar3 = (undefined1 *)0x1;
    param_1[7] = (code)0x0;
    param_1[0x47] = (code)0x1;
  }
  else {
    pcVar9 = (code *)0xff;
    if ((byte)cVar2 < 2) {
      puVar3 = &LAB_800c0000;
      if (cVar2 == (code)0x0) {
        if (DAT_800bf9e0 < 10) {
          _DAT_800bf874 = (ushort)DAT_800bfb17;
          if (DAT_800bfb17 == 0) {
            _DAT_800bf874 = (ushort)DAT_800bf8b6;
            if (DAT_800bf8b6 == 0xff) {
              iVar6 = -0x7feb6e2c;
            }
            else {
              iVar6 = -0x7feb6db4;
            }
          }
          else {
            iVar6 = -0x7feb6dfc;
          }
          *(short *)(*(int *)(unaff_s3 + 0xc4) + 10) = *(short *)(unaff_s3 + 0x70);
          iVar5 = *(int *)(unaff_s3 + 0xc4);
          iVar8 = 0xf0;
          unaff_s3 = param_1;
          goto LAB_8012f338;
        }
        param_1[0x7a] = (code)0x5;
        pcVar9 = param_1;
        func_0x80040d68(param_1,0x801491ac);
        param_1[6] = (code)0xa;
        puVar3 = (undefined1 *)0x2;
        param_1[0x70] = (code)0x2;
      }
    }
    else {
      puVar3 = (undefined1 *)0x20;
      if (cVar2 == (code)0xa) {
        *(short *)(param_1 + 0x40) = 0x20;
        param_1[5] = (code)0x0;
      }
    }
  }
LAB_8011d550:
  *(undefined1 *)(uVar16 + 0x47) = 0;
  *(undefined2 *)(uVar16 + 0x2e) =
       *(undefined2 *)(*(int *)(pcVar9 + ((int)puVar3 * 2 + 0x60) * 2) + 0x2c);
  *(undefined2 *)(uVar16 + 0x32) =
       *(undefined2 *)(*(int *)(pcVar9 + (*(short *)(uVar16 + 0x60) * 2 + 0x60) * 2) + 0x30);
  *(undefined2 *)(uVar16 + 0x36) =
       *(undefined2 *)(*(int *)(pcVar9 + (*(short *)(uVar16 + 0x60) * 2 + 0x60) * 2) + 0x34);
  if ((*(ushort *)(uVar16 + 0x60) & 1) == 0) {
    uVar4 = 1;
    *(undefined1 *)(uVar16 + 0x2a) = 1;
  }
  else {
    uVar4 = 10;
    *(undefined1 *)(uVar16 + 0x2a) = 10;
  }
  if (0x800 < uVar4) {
    unaff_s3 = (code *)((uint)unaff_s3 | 0xf000);
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(param_1[6]) {
  case (code)0x0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ushort *)(*(int *)(param_1 + 0xc4) + 8) = (ushort)unaff_s3 & 0xfff;
  FUN_801314b4(param_1);
  if (unaff_s5 != 0) {
    iVar6 = func_0x80083e80((int)(short)(ushort)unaff_s3);
    iVar6 = (iVar6 * -(int)*(short *)(*(int *)(param_1 + 200) + 4) >> 0xc) - unaff_s4;
    if (iVar6 * 0x10000 < 0) {
      FUN_8012fd38();
      return;
    }
    _DAT_800e7eb2 = _DAT_800e7eb2 + (short)iVar6;
  }
  if (*(short *)(param_1 + 0x78) != 0) {
    cVar2 = (code)FUN_801308e0(param_1);
    unaff_s3[6] = cVar2;
    func_0x80072efc();
    *(short *)(unaff_s3 + 0x40) = 0xf;
    FUN_80138e70();
    return;
  }
  FUN_80131578(param_1);
  return;
}

