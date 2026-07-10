// FUN_801341E8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_80134064(undefined4 param_1,int param_2,undefined4 param_3,int *param_4)

{
  byte bVar1;
  undefined4 in_zero;
  undefined4 in_at;
  ushort uVar2;
  short sVar3;
  undefined1 *puVar4;
  short *psVar5;
  undefined1 *puVar6;
  int in_v1;
  uint uVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  byte *in_t0;
  byte *pbVar11;
  int *in_t2;
  uint in_t3;
  int iVar12;
  uint in_t5;
  uint in_t6;
  int in_t7;
  uint unaff_s0;
  uint *unaff_s1;
  undefined1 *unaff_s2;
  int unaff_s3;
  int *unaff_s4;
  char unaff_s5;
  int *unaff_s6;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_00000030;
  int in_stack_00000034;
  int in_stack_00000038;
  int in_stack_0000003c;
  
  do {
    *param_4 = in_v1 >> 0x10;
    setCopReg(2,in_zero,in_stack_00000038);
    setCopReg(2,in_at,in_stack_0000003c);
    param_4[-8] = *(int *)(in_t0 + -0xe);
    copFunction(2,0x180001);
    param_4[-5] = *(int *)(in_t0 + -10);
    iVar12 = getCopControlWord(2,0xf800);
    *unaff_s6 = iVar12;
    pbVar11 = in_t0;
    if (-1 < *unaff_s6) {
      uVar7 = getCopReg(2,0xe);
      unaff_s1[0xb] = uVar7;
      param_4[-2] = *(int *)(in_t0 + -6);
      copFunction(2,0x168002e);
      iVar12 = getCopReg(2,7);
      *unaff_s4 = iVar12;
      uVar7 = *unaff_s4 + (int)*(short *)(unaff_s2 + 0x32) >> 10;
      iVar12 = (*unaff_s4 + (int)*(short *)(unaff_s2 + 0x32) >> (uVar7 & 0x1f)) + uVar7 * 0x200;
      *unaff_s4 = iVar12;
      if (0x7fb < iVar12 - 4U) {
        *unaff_s4 = -1;
      }
      if (-1 < *unaff_s4) {
        if (((byte)unaff_s2[3] != in_t5) && ((byte)unaff_s2[3] != in_t3)) {
          bVar1 = unaff_s2[5];
          if ((2 < bVar1) && ((bVar1 < 6 || ((bVar1 < 0xb && (8 < bVar1)))))) {
            ((char *)((int)param_4 + -0x16))[0] = '.';
            ((char *)((int)param_4 + -0x16))[1] = '\0';
          }
        }
        iVar12 = (int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6);
        sVar3 = (short)iVar12;
        if (iVar12 * 0x10000 < 0) {
          sVar3 = 0;
        }
        iVar12 = (int)sVar3;
        iVar9 = (uint)*(byte *)(param_4 + -0xb) - iVar12;
        iVar10 = (uint)*(byte *)((int)param_4 + -0x2b) - iVar12;
        iVar12 = (uint)*(byte *)((int)param_4 + -0x2a) - iVar12;
        if (iVar9 < 0) {
          unaff_s1 = (uint *)(unaff_s0 + 0x60);
          if (*(char *)(unaff_s0 + 7) != '\0') {
            if (*(char *)(unaff_s0 + 7) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            if (*(short *)(*(int *)(unaff_s0 + 0x38) + 4) == 0) {
              *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
              FUN_801406e4();
              return unaff_s2;
            }
            *(ushort *)(unaff_s0 + 0x62) = *(ushort *)(unaff_s0 + 0x62) ^ 1;
                    /* WARNING: Subroutine does not return */
            *(short *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x56) + 0x800;
            FUN_801402b8();
          }
          uVar2 = *(ushort *)(unaff_s0 + 0x62);
LAB_8013d19c:
                    /* WARNING: Subroutine does not return */
          *(ushort *)((int)unaff_s1 + 2) = uVar2 & 0xfffb;
          FUN_801402b8();
        }
        if (0xff < iVar9) {
          iVar9 = 0xff;
        }
        if (iVar10 < 0) {
          puVar4 = (undefined1 *)thunk_EXT_FUN_80146194(iVar12,iVar9,0);
          return puVar4;
        }
        if (0xff < iVar10) {
          iVar10 = 0xff;
        }
        uVar2 = (ushort)(iVar12 < 0x100);
        if (iVar12 < 0) goto LAB_8013d19c;
        if (uVar2 == 0) {
          iVar12 = 0xff;
        }
        *(char *)(unaff_s1 + 1) = (char)iVar9;
        *(char *)((int)unaff_s1 + 5) = (char)iVar10;
        *(char *)((int)unaff_s1 + 6) = (char)iVar12;
        iVar12 = (int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6);
        sVar3 = (short)iVar12;
        if (iVar12 * 0x10000 < 0) {
          sVar3 = 0;
        }
        iVar12 = (int)sVar3;
        iVar9 = (uint)*(byte *)(param_4 + -8) - iVar12;
        iVar10 = (uint)*(byte *)((int)param_4 + -0x1f) - iVar12;
        iVar12 = (uint)*(byte *)((int)param_4 + -0x1e) - iVar12;
        if (iVar9 < 0) {
          puVar4 = (undefined1 *)FUN_8013d214(iVar12,0);
          return puVar4;
        }
        if (0xff < iVar9) {
          iVar9 = 0xff;
        }
        if (iVar10 < 0) {
          return (undefined1 *)(uint)(iVar10 < 0x100);
        }
        if ((undefined1 *)(uint)(iVar10 < 0x100) == (undefined1 *)0x0) {
          iVar10 = 0xff;
        }
        if (iVar12 < 0) {
          unaff_s2 = (undefined1 *)0x0;
          if (DAT_00000007 == 0) {
            uRam00000062 = uRam00000062 & 0xfffb;
                    /* WARNING: Subroutine does not return */
            FUN_801402b8(0,(int)(short)iVar9,8);
          }
          if (DAT_00000007 < 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          iVar12 = 0;
          sVar3 = _DAT_00000032;
          DAT_00000007 = DAT_00000007 - 1;
LAB_8013d2c4:
          *(short *)(iVar12 + 0x32) = sVar3 + 0x10;
          FUN_801406e4(iVar12,iVar9);
          return unaff_s2;
        }
        if (0xff < iVar12) {
          iVar12 = 0xff;
        }
        *(char *)(unaff_s1 + 4) = (char)iVar9;
        *(char *)((int)unaff_s1 + 0x11) = (char)iVar10;
        *(char *)((int)unaff_s1 + 0x12) = (char)iVar12;
        psVar5 = (short *)((int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6));
        if ((int)psVar5 * 0x10000 < 0) {
          psVar5 = (short *)0x0;
        }
        sVar3 = (short)psVar5;
        iVar12 = (int)sVar3;
        iVar9 = (uint)*(byte *)(param_4 + -5) - iVar12;
        iVar10 = (uint)*(byte *)((int)param_4 + -0x13) - iVar12;
        iVar12 = (uint)*(byte *)((int)param_4 + -0x12) - iVar12;
        if (iVar9 < 0) {
          iVar9 = 0;
          goto LAB_8013d2c4;
        }
        if (0xff < iVar9) {
          iVar9 = 0xff;
        }
        if (iVar10 < 0) {
          return (undefined1 *)(uint)(iVar10 < 0x100);
        }
        if ((undefined1 *)(uint)(iVar10 < 0x100) == (undefined1 *)0x0) {
          iVar10 = 0xff;
        }
        if (iVar12 < 0) {
          uVar7 = func_0x80078240((int)_DAT_1f800160 - (int)*psVar5,
                                  (int)_DAT_1f800162 - (int)psVar5[1],
                                  (int)_DAT_1f800164 - (int)psVar5[2]);
          return (undefined1 *)(uint)(uVar7 < unaff_s0);
        }
        if (0xff < iVar12) {
          iVar12 = 0xff;
        }
        *(char *)(unaff_s1 + 7) = (char)iVar9;
        *(char *)((int)unaff_s1 + 0x1d) = (char)iVar10;
        *(char *)((int)unaff_s1 + 0x1e) = (char)iVar12;
        puVar4 = (undefined1 *)((int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6));
        if ((int)puVar4 * 0x10000 < 0) {
          puVar4 = (undefined1 *)0x0;
        }
        puVar6 = (undefined1 *)(int)(short)puVar4;
        param_2 = (uint)*(byte *)(param_4 + -2) - (int)puVar6;
        iVar9 = (uint)*(byte *)((int)param_4 + -7) - (int)puVar6;
        iVar12 = (uint)*(byte *)((int)param_4 + -6) - (int)puVar6;
        if (param_2 < 0) {
          if (puVar6 == (undefined1 *)0x0) {
            return (undefined1 *)0x0;
          }
          *(undefined4 *)(puVar6 + 0x1c) = 0x80145230;
          puVar6[3] = (char)unaff_s0;
          *(undefined4 *)(puVar6 + 0x10) = 0;
          puVar4 = puVar6;
LAB_8013d390:
          *(uint **)(puVar4 + 0x14) = unaff_s1;
          return puVar4;
        }
        if (0xff < param_2) {
          param_2 = 0xff;
        }
        if (iVar9 < 0) goto LAB_8013d390;
        if (0xff < iVar9) {
          iVar9 = 0xff;
        }
        if (iVar12 < 0) {
          puVar4 = (undefined1 *)FUN_8013d3ac(0);
          return puVar4;
        }
        if (0xff < iVar12) {
          iVar12 = 0xff;
        }
        *(char *)(unaff_s1 + 10) = (char)param_2;
        *(char *)((int)unaff_s1 + 0x29) = (char)iVar9;
        *(char *)((int)unaff_s1 + 0x2a) = (char)iVar12;
        *(char *)(param_4 + -9) = (char)param_4[-9] + unaff_s5;
        *(char *)(param_4 + -6) = (char)param_4[-6] + unaff_s5;
        *(char *)(param_4 + -3) = (char)param_4[-3] + unaff_s5;
        *(char *)param_4 = (char)*param_4 + unaff_s5;
        puVar8 = (uint *)(_DAT_800ed8c8 + *unaff_s4 * 4);
        *unaff_s1 = *puVar8 | 0xc000000;
        *puVar8 = (uint)unaff_s1;
        param_4 = param_4 + 0xd;
        unaff_s1 = unaff_s1 + 0xd;
      }
    }
    do {
      in_t0 = pbVar11 + 0x24;
      in_t2 = in_t2 + 9;
      if ((int)in_t6 < 1) {
        _DAT_800bf544 = unaff_s1;
        return &LAB_800c0000;
      }
      in_t6 = *(uint *)(pbVar11 + 10);
      in_stack_00000020 = (uint)CONCAT21((ushort)*in_t0 << 8,pbVar11[0x22]) << 8;
      in_stack_00000024 = (uint)CONCAT21(in_stack_00000024._2_2_,pbVar11[0x15]) << 8;
      in_stack_00000028 = (uint)CONCAT21((ushort)pbVar11[0x25] << 8,pbVar11[0x23]) << 8;
      in_stack_0000002c = (uint)CONCAT21(in_stack_0000002c._2_2_,pbVar11[0x19]) << 8;
      in_stack_00000030 = (uint)CONCAT21((ushort)pbVar11[0x28] << 8,pbVar11[0x26]) << 8;
      in_stack_00000034 = (uint)CONCAT21(in_stack_00000034._2_2_,pbVar11[0x1d]) << 8;
      in_stack_00000038 = (uint)CONCAT21((ushort)pbVar11[0x29] << 8,pbVar11[0x27]) << 8;
      in_stack_0000003c = (uint)CONCAT21(in_stack_0000003c._2_2_,pbVar11[0x21]) << 8;
      setCopReg(2,in_zero,in_stack_00000020);
      setCopReg(2,in_at,in_stack_00000024);
      setCopReg(2,&stack0x00000030,in_stack_00000028);
      setCopReg(2,&stack0x00000028,in_stack_0000002c);
      setCopReg(2,&stack0x00000020,in_stack_00000030);
      setCopReg(2,param_2,in_stack_00000034);
      param_4[-0xb] = *(uint *)(pbVar11 + 0x12) & 0xffffff | 0x3e000000;
      param_4[-9] = *in_t2 + in_t7;
      copFunction(2,0x280030);
      param_4[-6] = in_t6 & 0x7fffff;
      in_v1 = *(int *)(pbVar11 + 0xe);
      param_4[-3] = in_v1;
      iVar12 = getCopControlWord(2,0xf800);
      *unaff_s6 = iVar12;
      pbVar11 = in_t0;
    } while (*unaff_s6 < 0);
    uVar7 = getCopReg(2,0xc);
    unaff_s1[2] = uVar7;
    uVar7 = getCopReg(2,0xd);
    unaff_s1[5] = uVar7;
    uVar7 = getCopReg(2,0xe);
    unaff_s1[8] = uVar7;
  } while( true );
}

