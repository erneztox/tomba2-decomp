// FUN_8012add0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8012aeac) */
/* WARNING: Removing unreachable block (ram,0x8012af00) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 *
FUN_8012add0(undefined1 *param_1,int *param_2,undefined4 param_3,int *param_4,int param_5,
            int param_6,int param_7,int param_8,int param_9,undefined4 param_10,undefined1 *param_11
            )

{
  byte bVar1;
  char cVar2;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  undefined4 extraout_at_01;
  ushort uVar3;
  short sVar4;
  short sVar5;
  undefined2 *puVar6;
  undefined1 *puVar7;
  short *psVar8;
  undefined1 *puVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  int *piVar15;
  int iVar16;
  int iVar17;
  byte *in_t0;
  int *in_t2;
  uint in_t3;
  int iVar18;
  uint in_t5;
  uint in_t6;
  int in_t7;
  char *unaff_s0;
  uint *unaff_s1;
  undefined1 *unaff_s3;
  int *unaff_s4;
  int unaff_s5;
  int *unaff_s6;
  undefined8 uVar19;
  int iStackX_0;
  undefined4 uStackX_4;
  int iStackX_8;
  undefined4 uStackX_c;
  
  bVar1 = param_1[4];
  uVar19 = CONCAT44(1,(uint)(bVar1 < 2));
  if (bVar1 == 1) {
    bVar1 = param_1[0x29];
    if (bVar1 == 1) {
      iVar18 = func_0x800781e0((int)_DAT_1f800160 - *(int *)(*(int *)(param_1 + 0xc0) + 0x2c),
                               (int)_DAT_1f800164 - *(int *)(*(int *)(param_1 + 0xc0) + 0x34));
      piVar15 = (int *)0x0;
      in_at = extraout_at;
      if (0x3b < iVar18) {
        uVar12 = -iVar18;
        if (0x8b < iVar18) {
          piVar15 = (int *)&DAT_ffffffba;
          uVar12 = 0x8c - iVar18;
          param_4 = (int *)(uVar12 >> 1);
          goto LAB_80133f3c;
        }
        piVar15 = (int *)(uVar12 >> 1);
        param_4 = (int *)0x0;
        goto LAB_80133f3c;
      }
    }
    else {
      piVar15 = (int *)0x0;
      if (1 < bVar1) {
        uVar12 = 2;
        param_4 = (int *)0x0;
        if (bVar1 != 2) goto LAB_80133f3c;
        piVar15 = (int *)&DAT_ffffffba;
      }
    }
    iVar16 = (int)*(short *)(*(int *)(param_1 + 0xc0) + 0xc);
    sVar4 = (short)piVar15;
    iVar18 = (int)sVar4;
    if (iVar16 != iVar18) {
      if (iVar16 < iVar18) {
        bVar1 = iVar18 < (iVar16 + 5) * 0x10000 >> 0x10;
        param_2 = piVar15;
        goto LAB_80133f8c;
      }
      sVar5 = (short)(iVar16 + -5);
      if ((iVar16 + -5) * 0x10000 >> 0x10 < iVar18) {
        sVar5 = sVar4;
      }
      *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = sVar5;
    }
    param_2 = (int *)(int)*(short *)(*(int *)(param_1 + 0xc4) + 0xc);
    piVar13 = (int *)(int)sVar4;
    if (param_2 != piVar13) {
      if ((int)param_2 < (int)piVar13) {
        uVar12 = (uint)((int)piVar13 < (int)((int)param_2 + 10) * 0x10000 >> 0x10);
        goto LAB_80133ff4;
      }
      sVar5 = (short)(char *)((int)param_2 + -10);
      if (((int)param_2 + -10) * 0x10000 >> 0x10 < (int)piVar13) {
        sVar5 = sVar4;
      }
      *(short *)(*(int *)(param_1 + 0xc4) + 0xc) = sVar5;
    }
    puVar7 = (undefined1 *)0x0;
    if (DAT_800e7eaa < 0x16) {
      iVar18 = func_0x8007778c(param_1);
      puVar7 = (undefined1 *)0x0;
      if (iVar18 != 0) {
        uVar19 = func_0x800517f8(param_1);
        in_at = extraout_at_00;
        param_4 = piVar15;
        goto code_r0x80134050;
      }
    }
  }
  else {
    if (bVar1 < 2 != 0) {
      if (bVar1 == 0) {
        param_1[8] = 2;
        uVar19 = 0x100000003;
        if (1 < _DAT_800ed098) {
          unaff_s1 = (uint *)0x0;
          *(undefined2 *)(param_1 + 0x82) = 0x8c;
          *(undefined2 *)(param_1 + 0x80) = 0x8c;
          *(undefined2 *)(param_1 + 0x84) = 10;
          param_1[9] = 2;
          param_1[4] = 1;
          *param_1 = 1;
          param_1[0xd] = 0;
          param_1[0xb] = 0;
          *(undefined2 *)(param_1 + 0x86) = 0x46;
          iVar18 = func_0x8007aae8();
          *(int *)(param_1 + 0xc0) = iVar18;
          *(undefined2 *)(iVar18 + 6) = 0xffff;
          puVar6 = *(undefined2 **)(param_1 + 0xc0);
          *puVar6 = 0;
          unaff_s4 = (int *)(puVar6 + 0x40);
          unaff_s3 = param_1 + 0x50;
          pcVar10 = *(char **)(param_1 + 0x3c);
          unaff_s5 = (int)(uint)(byte)param_1[7] << 5;
          if (pcVar10 == (char *)0x0) {
            return (undefined1 *)(uint)(byte)param_1[7];
          }
          param_9._0_1_ = *pcVar10 * '\n';
          param_2 = &param_9;
          param_9._1_1_ = pcVar10[1] * '\n';
          puVar7 = param_1 + 0x48;
          param_9._2_1_ = pcVar10[2] * '\n';
          param_11 = param_1;
          func_0x800318a0(param_1 + 0x2c,param_2);
          bVar1 = pcVar10[3];
          uVar11 = bVar1 & 0xf;
          uVar12 = bVar1 & 0x80;
          in_t7 = uVar11 << 0x16;
          if ((bVar1 & 0x80) != 0) {
            *(undefined4 *)(param_1 + 0x40) = 0;
            sVar4 = *(short *)(uVar12 + 0x60);
            sVar5 = func_0x800782b0(uVar12 + 0x2c,(int)*(short *)(uVar11 + 0x160),
                                    (int)*(short *)(puVar7 + 0x164));
            if (((sVar4 - sVar5) + 0x400U & 0xfff) < 0x801) {
              uRam00000002 = uRam00000002 & 0xfffe;
              return (undefined1 *)0x0;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          unaff_s0 = pcVar10 + 4;
          *(char **)(param_1 + 0x40) = unaff_s0;
          in_t2 = *(int **)(param_1 + 0x50);
          in_t5 = 1;
          in_t3 = 3;
          param_4 = (int *)0x30;
          in_t0 = (byte *)((int)in_t2 + 0x1e);
          in_at = extraout_at_01;
          unaff_s6 = unaff_s4;
          goto LAB_80133f14;
        }
        param_1[4] = 3;
      }
code_r0x80134050:
      do {
        if (-1 < (int)uVar19) {
          uVar12 = getCopReg(2,0xc);
          unaff_s1[2] = uVar12;
          uVar12 = getCopReg(2,0xd);
          unaff_s1[5] = uVar12;
          uVar12 = getCopReg(2,0xe);
          unaff_s1[8] = uVar12;
          *param_4 = (int)((longlong)uVar19 >> 0x30);
          setCopReg(2,in_zero,param_7);
          setCopReg(2,in_at,param_8);
          param_4[-8] = *(int *)(in_t0 + -0xe);
          copFunction(2,0x180001);
          param_4[-5] = *(int *)(in_t0 + -10);
          iVar18 = getCopControlWord(2,0xf800);
          *unaff_s6 = iVar18;
          if (-1 < *unaff_s6) {
            uVar12 = getCopReg(2,0xe);
            unaff_s1[0xb] = uVar12;
            param_4[-2] = *(int *)(in_t0 + -6);
            copFunction(2,0x168002e);
            iVar18 = getCopReg(2,7);
            *unaff_s4 = iVar18;
            uVar12 = *unaff_s4 + (int)*(short *)(param_1 + 0x32) >> 10;
            iVar18 = (*unaff_s4 + (int)*(short *)(param_1 + 0x32) >> (uVar12 & 0x1f)) +
                     uVar12 * 0x200;
            *unaff_s4 = iVar18;
            if (0x7fb < iVar18 - 4U) {
              *unaff_s4 = -1;
            }
            if (-1 < *unaff_s4) {
              if (((byte)param_1[3] != in_t5) && ((byte)param_1[3] != in_t3)) {
                bVar1 = param_1[5];
                if ((2 < bVar1) && ((bVar1 < 6 || ((bVar1 < 0xb && (8 < bVar1)))))) {
                  ((char *)((int)param_4 + -0x16))[0] = '.';
                  ((char *)((int)param_4 + -0x16))[1] = '\0';
                }
              }
              sVar4 = (short)((int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6));
              if ((int)(((int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6)) * 0x10000) < 0) {
                sVar4 = 0;
              }
              iVar18 = (int)sVar4;
              iVar16 = (uint)*(byte *)(param_4 + -0xb) - iVar18;
              iVar17 = (uint)*(byte *)((int)param_4 + -0x2b) - iVar18;
              iVar18 = (uint)*(byte *)((int)param_4 + -0x2a) - iVar18;
              if (iVar16 < 0) {
                unaff_s1 = (uint *)(unaff_s0 + 0x60);
                if (unaff_s0[7] != '\0') {
                  if (unaff_s0[7] != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
                    halt_baddata();
                  }
                  if (*(short *)(*(int *)(unaff_s0 + 0x38) + 4) == 0) {
                    *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
                    FUN_801406e4(unaff_s0,0);
                    return param_1;
                  }
                  *(ushort *)(unaff_s0 + 0x62) = *(ushort *)(unaff_s0 + 0x62) ^ 1;
                    /* WARNING: Subroutine does not return */
                  *(short *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x56) + 0x800;
                  FUN_801402b8(unaff_s0,7,0);
                }
                iVar16 = 0x1a;
                uVar3 = *(ushort *)(unaff_s0 + 0x62);
                iVar17 = 8;
LAB_8013d19c:
                    /* WARNING: Subroutine does not return */
                *(ushort *)((int)unaff_s1 + 2) = uVar3 & 0xfffb;
                FUN_801402b8(unaff_s0,iVar16,iVar17);
              }
              if (0xff < iVar16) {
                iVar16 = 0xff;
              }
              if (iVar17 < 0) {
                puVar7 = (undefined1 *)thunk_EXT_FUN_80146194(iVar18,iVar16,0);
                return puVar7;
              }
              if (0xff < iVar17) {
                iVar17 = 0xff;
              }
              uVar3 = (ushort)(iVar18 < 0x100);
              if (iVar18 < 0) {
                unaff_s0 = (char *)0x0;
                goto LAB_8013d19c;
              }
              if (uVar3 == 0) {
                iVar18 = 0xff;
              }
              *(char *)(unaff_s1 + 1) = (char)iVar16;
              *(char *)((int)unaff_s1 + 5) = (char)iVar17;
              *(char *)((int)unaff_s1 + 6) = (char)iVar18;
              sVar4 = (short)((int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6));
              if ((int)(((int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6)) * 0x10000) < 0) {
                sVar4 = 0;
              }
              iVar18 = (int)sVar4;
              iVar16 = (uint)*(byte *)(param_4 + -8) - iVar18;
              iVar17 = (uint)*(byte *)((int)param_4 + -0x1f) - iVar18;
              iVar18 = (uint)*(byte *)((int)param_4 + -0x1e) - iVar18;
              if (iVar16 < 0) {
                puVar7 = (undefined1 *)FUN_8013d214(iVar18,0);
                return puVar7;
              }
              if (0xff < iVar16) {
                iVar16 = 0xff;
              }
              if (iVar17 < 0) {
                return (undefined1 *)(uint)(iVar17 < 0x100);
              }
              if ((undefined1 *)(uint)(iVar17 < 0x100) == (undefined1 *)0x0) {
                iVar17 = 0xff;
              }
              if (iVar18 < 0) {
                param_1 = (undefined1 *)0x0;
                if (DAT_00000007 == 0) {
                  uRam00000062 = uRam00000062 & 0xfffb;
                    /* WARNING: Subroutine does not return */
                  FUN_801402b8(0,(int)(short)iVar16,8);
                }
                if (DAT_00000007 < 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
                  halt_baddata();
                }
                iVar18 = 0;
                sVar4 = _DAT_00000032;
                DAT_00000007 = DAT_00000007 - 1;
LAB_8013d2c4:
                *(short *)(iVar18 + 0x32) = sVar4 + 0x10;
                FUN_801406e4(iVar18,iVar16);
                return param_1;
              }
              if (0xff < iVar18) {
                iVar18 = 0xff;
              }
              *(char *)(unaff_s1 + 4) = (char)iVar16;
              *(char *)((int)unaff_s1 + 0x11) = (char)iVar17;
              *(char *)((int)unaff_s1 + 0x12) = (char)iVar18;
              psVar8 = (short *)((int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6));
              if ((int)psVar8 * 0x10000 < 0) {
                psVar8 = (short *)0x0;
              }
              sVar4 = (short)psVar8;
              iVar18 = (int)sVar4;
              iVar16 = (uint)*(byte *)(param_4 + -5) - iVar18;
              iVar17 = (uint)*(byte *)((int)param_4 + -0x13) - iVar18;
              iVar18 = (uint)*(byte *)((int)param_4 + -0x12) - iVar18;
              if (iVar16 < 0) {
                iVar16 = 0;
                goto LAB_8013d2c4;
              }
              if (0xff < iVar16) {
                iVar16 = 0xff;
              }
              if (iVar17 < 0) {
                return (undefined1 *)(uint)(iVar17 < 0x100);
              }
              if ((undefined1 *)(uint)(iVar17 < 0x100) == (undefined1 *)0x0) {
                iVar17 = 0xff;
              }
              if (iVar18 < 0) {
                pcVar10 = (char *)func_0x80078240((int)_DAT_1f800160 - (int)*psVar8,
                                                  (int)_DAT_1f800162 - (int)psVar8[1],
                                                  (int)_DAT_1f800164 - (int)psVar8[2]);
                return (undefined1 *)(uint)(pcVar10 < unaff_s0);
              }
              if (0xff < iVar18) {
                iVar18 = 0xff;
              }
              *(char *)(unaff_s1 + 7) = (char)iVar16;
              *(char *)((int)unaff_s1 + 0x1d) = (char)iVar17;
              *(char *)((int)unaff_s1 + 0x1e) = (char)iVar18;
              puVar7 = (undefined1 *)((int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6));
              if ((int)puVar7 * 0x10000 < 0) {
                puVar7 = (undefined1 *)0x0;
              }
              puVar9 = (undefined1 *)(int)(short)puVar7;
              param_2 = (int *)((uint)*(byte *)(param_4 + -2) - (int)puVar9);
              iVar16 = (uint)*(byte *)((int)param_4 + -7) - (int)puVar9;
              iVar18 = (uint)*(byte *)((int)param_4 + -6) - (int)puVar9;
              if ((int)param_2 < 0) {
                if (puVar9 == (undefined1 *)0x0) {
                  return (undefined1 *)0x0;
                }
                *(undefined4 *)(puVar9 + 0x1c) = 0x80145230;
                puVar9[3] = (char)unaff_s0;
                *(undefined4 *)(puVar9 + 0x10) = 0;
                puVar7 = puVar9;
LAB_8013d390:
                *(uint **)(puVar7 + 0x14) = unaff_s1;
                return puVar7;
              }
              if (0xff < (int)param_2) {
                param_2 = (int *)0xff;
              }
              if (iVar16 < 0) goto LAB_8013d390;
              if (0xff < iVar16) {
                iVar16 = 0xff;
              }
              if (iVar18 < 0) {
                puVar7 = (undefined1 *)FUN_8013d3ac(0);
                return puVar7;
              }
              if (0xff < iVar18) {
                iVar18 = 0xff;
              }
              *(char *)(unaff_s1 + 10) = (char)param_2;
              *(char *)((int)unaff_s1 + 0x29) = (char)iVar16;
              *(char *)((int)unaff_s1 + 0x2a) = (char)iVar18;
              cVar2 = (char)unaff_s5;
              *(char *)(param_4 + -9) = (char)param_4[-9] + cVar2;
              *(char *)(param_4 + -6) = (char)param_4[-6] + cVar2;
              *(char *)(param_4 + -3) = (char)param_4[-3] + cVar2;
              *(char *)param_4 = (char)*param_4 + cVar2;
              puVar14 = (uint *)(_DAT_800ed8c8 + *unaff_s4 * 4);
              *unaff_s1 = *puVar14 | 0xc000000;
              *puVar14 = (uint)unaff_s1;
              param_4 = param_4 + 0xd;
              unaff_s1 = unaff_s1 + 0xd;
            }
          }
        }
        in_t0 = in_t0 + 0x24;
        in_t2 = in_t2 + 9;
        if ((int)in_t6 < 1) {
          _DAT_800bf544 = unaff_s1;
          return &LAB_800c0000;
        }
LAB_80133f14:
        in_t6 = *(uint *)(in_t0 + -0x1a);
        iStackX_0 = (uint)CONCAT21((ushort)*in_t0 << 8,in_t0[-2]) << 8;
        uVar12 = (uint)in_t0[-0xf];
        piVar15 = param_2;
LAB_80133f3c:
        uStackX_4 = CONCAT22(uStackX_4._2_2_,(short)(uVar12 << 8));
        iStackX_8 = (uint)CONCAT21((ushort)in_t0[1] << 8,in_t0[-1]) << 8;
        uStackX_c = (uint)CONCAT21(uStackX_c._2_2_,in_t0[-0xb]) << 8;
        param_5 = (uint)in_t0[2] << 8;
        bVar1 = in_t0[4];
        param_2 = piVar15;
        piVar15 = param_4;
LAB_80133f8c:
        param_5 = CONCAT22((ushort)bVar1 << 8,(undefined2)param_5);
        param_6 = (uint)CONCAT21(param_6._2_2_,in_t0[-7]) << 8;
        param_7 = (uint)CONCAT21((ushort)in_t0[5] << 8,in_t0[3]) << 8;
        param_8 = (uint)CONCAT21(param_8._2_2_,in_t0[-3]) << 8;
        setCopReg(2,in_zero,iStackX_0);
        setCopReg(2,in_at,uStackX_4);
        setCopReg(2,&param_5,iStackX_8);
        setCopReg(2,&iStackX_8,uStackX_c);
        setCopReg(2,&iStackX_0,param_5);
        setCopReg(2,param_2,param_6);
        uVar12 = 0xff0000;
LAB_80133ff4:
        piVar15[-0xb] = *(uint *)(in_t0 + -0x12) & (uVar12 | 0xffff) | 0x3e000000;
        piVar15[-9] = *in_t2 + in_t7;
        copFunction(2,0x280030);
        piVar15[-6] = in_t6 & 0x7fffff;
        iVar18 = *(int *)(in_t0 + -0x16);
        piVar15[-3] = iVar18;
        iVar16 = getCopControlWord(2,0xf800);
        *unaff_s6 = iVar16;
        uVar19 = CONCAT44(iVar18,*unaff_s6);
        param_4 = piVar15;
      } while( true );
    }
    puVar7 = (undefined1 *)0x3;
    uVar19 = 0x100000003;
    if (bVar1 != 2) {
      if (bVar1 != 3) goto code_r0x80134050;
      puVar7 = (undefined1 *)func_0x8007a624(param_1);
    }
  }
  return puVar7;
}

