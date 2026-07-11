// FUN_8012b24c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_8012b24c(int *param_1,uint param_2,uint param_3,int *param_4)

{
  byte bVar1;
  char cVar2;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  undefined4 extraout_at_00;
  ushort uVar3;
  short sVar4;
  int iVar5;
  undefined1 *puVar6;
  short *psVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  uint uVar10;
  int iVar11;
  int *piVar12;
  uint *puVar13;
  undefined1 uVar14;
  int iVar15;
  undefined1 uVar16;
  int iVar17;
  byte *in_t0;
  byte *pbVar18;
  uint *in_t1;
  int *in_t2;
  uint in_t3;
  uint in_t5;
  uint in_t6;
  int in_t7;
  uint unaff_s0;
  uint *unaff_s1;
  uint *puVar19;
  undefined1 *unaff_s2;
  undefined1 *unaff_s3;
  int *piVar20;
  undefined1 *unaff_s5;
  int unaff_s7;
  int unaff_retaddr;
  int iStackX_0;
  undefined4 uStackX_4;
  
  if (DAT_800e7eaa == '\x01') {
    piVar20 = (int *)0x0;
    iVar11 = unaff_retaddr;
    if (0x2a94 < _DAT_1f800160) {
      iVar5 = 0;
      piVar12 = param_1;
      puVar6 = unaff_s5;
      goto LAB_8013424c;
    }
  }
  else {
    iVar11 = -0x7fed4d48;
    func_0x8003cca4(param_1);
    in_at = extraout_at;
  }
  piVar20 = (int *)0x0;
  unaff_s3 = &DAT_1f8000c0;
  puVar6 = &DAT_1f8000c8;
  unaff_s2 = (undefined1 *)0x1f800000;
  param_4 = (int *)&DAT_1f8000f8;
  while( true ) {
    piVar12 = param_4;
    puVar19 = unaff_s1;
    if (piVar20 == (int *)0x0) {
      _DAT_1f8000c0 = *(short *)(param_1[0x30] + 0x2c) + -0xeb;
      _DAT_1f8000c2 = *(ushort *)(param_1[0x30] + 0x30);
      _DAT_1f8000ca = 0xf894;
      iVar5 = 0x1130;
      goto LAB_8013437c;
    }
    if (piVar20 == (int *)0x1) {
      _DAT_1f8000c0 = *(short *)(param_1[0x30] + 0x2c) + 0xeb;
      _DAT_1f8000c2 = *(ushort *)(param_1[0x30] + 0x30);
      _DAT_1f8000ca = 0xf894;
      iVar5 = 0x1130;
      goto LAB_8013437c;
    }
    if (piVar20 == (int *)0x2) break;
    if (piVar20 == (int *)0x3) {
      iVar11 = param_1[*(byte *)(param_1 + 2) + 0x30];
      _DAT_1f8000c0 = *(short *)(iVar11 + 0x2c) + 0xeb;
      _DAT_1f8000c2 = *(ushort *)(iVar11 + 0x30);
      _DAT_1f8000c4 = *(ushort *)(iVar11 + 0x34);
      _DAT_1f8000ca = 0xf736;
      _DAT_1f8000cc = 0x16ac;
    }
    iVar15 = (int)(((uint)_DAT_1f8000ca - (uint)_DAT_1f8000c2) * 0x10000) >> 0x10;
    iVar5 = (int)(((uint)_DAT_1f8000cc - (uint)_DAT_1f8000c4) * 0x10000) >> 0x10;
    in_t0 = (byte *)(iVar5 * iVar5);
    piVar20 = (int *)((int)piVar20 + 1);
    iVar11 = func_0x80084080(in_t0 + iVar15 * iVar15);
    iVar5 = func_0x80085690(-iVar5,-iVar15);
    func_0x80051794(0x1f800000);
    unaff_s0 = iVar5 << 0x10;
    func_0x80084d10((int)unaff_s0 >> 0x10,0x1f800000);
    func_0x80084360(&DAT_1f8000f8,0x1f800000);
    func_0x80084470(&DAT_1f8000f8,&DAT_1f8000c0,&DAT_1f800014);
    _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
    _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
    _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
    param_3 = _DAT_1f800114;
    func_0x80084660(0x1f800000);
    func_0x80084690(0x1f800000);
    unaff_s1 = (uint *)(iVar11 << 0x10);
    iVar11 = -0x7fed4b2c;
    param_2 = (int)unaff_s1 >> 0x10;
    FUN_80134064(param_1);
    in_at = extraout_at_00;
    if (3 < (int)piVar20) {
      return (undefined1 *)0x0;
    }
  }
  do {
    uVar16 = (undefined1)param_3;
    uVar14 = (undefined1)param_2;
    iVar5 = 0xff;
    do {
      *(undefined1 *)in_t1 = uVar14;
      *(undefined1 *)((int)in_t1 + 1) = uVar16;
      *(char *)((int)in_t1 + 2) = (char)iVar5;
      param_2 = (uint)*(byte *)(param_4 + -2);
      param_3 = (uint)*(byte *)((int)param_4 + -7);
      iVar5 = (uint)*in_t0 << 0x18;
      piVar12 = param_4;
      puVar19 = unaff_s1;
LAB_8013437c:
      puVar8 = (undefined1 *)((iVar5 >> 0x18) - (uint)*(ushort *)(unaff_s3 + 6));
      if ((int)puVar8 * 0x10000 < 0) {
        puVar8 = (undefined1 *)0x0;
      }
      puVar9 = (undefined1 *)(int)(short)puVar8;
      iVar15 = param_2 - (int)puVar9;
      iVar17 = param_3 - (int)puVar9;
      iVar5 = (uint)*(byte *)((int)piVar12 + -6) - (int)puVar9;
      if (iVar15 < 0) {
        if (puVar9 == (undefined1 *)0x0) {
          return (undefined1 *)0x0;
        }
        *(undefined4 *)(puVar9 + 0x1c) = 0x80145230;
        puVar9[3] = (char)unaff_s0;
        *(undefined4 *)(puVar9 + 0x10) = 0;
        puVar8 = puVar9;
LAB_8013d390:
        *(uint **)(puVar8 + 0x14) = puVar19;
        return puVar8;
      }
      if (0xff < iVar15) {
        iVar15 = 0xff;
      }
      if (iVar17 < 0) goto LAB_8013d390;
      if (0xff < iVar17) {
        iVar17 = 0xff;
      }
      if (iVar5 < 0) {
        puVar6 = (undefined1 *)FUN_8013d3ac(0);
        return puVar6;
      }
      if (0xff < iVar5) {
        iVar5 = 0xff;
      }
      *(char *)(puVar19 + 10) = (char)iVar15;
      *(char *)((int)puVar19 + 0x29) = (char)iVar17;
      *(char *)((int)puVar19 + 0x2a) = (char)iVar5;
      cVar2 = (char)puVar6;
      *(char *)(piVar12 + -9) = (char)piVar12[-9] + cVar2;
      *(char *)(piVar12 + -6) = (char)piVar12[-6] + cVar2;
      *(char *)(piVar12 + -3) = (char)piVar12[-3] + cVar2;
      *(char *)piVar12 = (char)*piVar12 + cVar2;
      puVar13 = (uint *)(_DAT_800ed8c8 + *piVar20 * 4);
      *puVar19 = *puVar13 | 0xc000000;
      *puVar13 = (uint)puVar19;
      param_4 = piVar12 + 0xd;
      unaff_s1 = puVar19 + 0xd;
      do {
        do {
          do {
            pbVar18 = in_t0;
            in_t0 = pbVar18 + 0x24;
            in_t2 = in_t2 + 9;
            if ((int)in_t6 < 1) {
              _DAT_800bf544 = unaff_s1;
              return &LAB_800c0000;
            }
            in_t6 = *(uint *)(pbVar18 + 10);
            unaff_s5 = (undefined1 *)
                       ((uint)CONCAT21((short)((uint)unaff_s5 >> 0x10),pbVar18[0x15]) << 8);
            unaff_s7 = (uint)CONCAT21((short)((uint)unaff_s7 >> 0x10),pbVar18[0x19]) << 8;
            unaff_retaddr = (uint)CONCAT21((short)((uint)unaff_retaddr >> 0x10),pbVar18[0x1d]) << 8;
            iStackX_0 = (uint)CONCAT21((ushort)pbVar18[0x29] << 8,pbVar18[0x27]) << 8;
            uStackX_4 = (uint)CONCAT21(uStackX_4._2_2_,pbVar18[0x21]) << 8;
            setCopReg(2,in_zero,(uint)CONCAT21((ushort)*in_t0 << 8,pbVar18[0x22]) << 8);
            setCopReg(2,in_at,unaff_s5);
            setCopReg(2,&stack0xfffffff8,
                      (uint)CONCAT21((ushort)pbVar18[0x25] << 8,pbVar18[0x23]) << 8);
            setCopReg(2,&stack0xfffffff0,unaff_s7);
            setCopReg(2,&stack0xffffffe8,
                      (uint)CONCAT21((ushort)pbVar18[0x28] << 8,pbVar18[0x26]) << 8);
            setCopReg(2,iVar15,unaff_retaddr);
            piVar12[2] = *(uint *)(pbVar18 + 0x12) & 0xffffff | 0x3e000000;
            piVar12[4] = *in_t2 + in_t7;
            copFunction(2,0x280030);
            piVar12[7] = in_t6 & 0x7fffff;
            iVar5 = *(int *)(pbVar18 + 0xe);
            piVar12[10] = iVar5;
            iVar17 = getCopControlWord(2,0xf800);
            *param_1 = iVar17;
          } while (*param_1 < 0);
          uVar10 = getCopReg(2,0xc);
          puVar19[0xf] = uVar10;
          uVar10 = getCopReg(2,0xd);
          puVar19[0x12] = uVar10;
          uVar10 = getCopReg(2,0xe);
          puVar19[0x15] = uVar10;
          *param_4 = iVar5 >> 0x10;
          setCopReg(2,in_zero,iStackX_0);
          setCopReg(2,in_at,uStackX_4);
          piVar12[5] = *(int *)(pbVar18 + 0x16);
          copFunction(2,0x180001);
          piVar12[8] = *(int *)(pbVar18 + 0x1a);
          iVar5 = getCopControlWord(2,0xf800);
          *param_1 = iVar5;
        } while (*param_1 < 0);
        uVar10 = getCopReg(2,0xe);
        puVar19[0x18] = uVar10;
        piVar12[0xb] = *(int *)(pbVar18 + 0x1e);
        copFunction(2,0x168002e);
        iVar5 = getCopReg(2,7);
        *piVar20 = iVar5;
        uVar10 = *piVar20 + (int)*(short *)(unaff_s2 + 0x32) >> 10;
        iVar5 = (*piVar20 + (int)*(short *)(unaff_s2 + 0x32) >> (uVar10 & 0x1f)) + uVar10 * 0x200;
        *piVar20 = iVar5;
        if (0x7fb < iVar5 - 4U) {
          *piVar20 = -1;
        }
      } while (*piVar20 < 0);
      if (((byte)unaff_s2[3] != in_t5) && ((byte)unaff_s2[3] != in_t3)) {
        bVar1 = unaff_s2[5];
        if ((2 < bVar1) && ((bVar1 < 6 || ((bVar1 < 0xb && (8 < bVar1)))))) {
          ((char *)((int)piVar12 + 0x1e))[0] = '.';
          ((char *)((int)piVar12 + 0x1e))[1] = '\0';
        }
      }
      sVar4 = (short)((int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6));
      if ((int)(((int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6)) * 0x10000) < 0) {
        sVar4 = 0;
      }
      iVar5 = (int)sVar4;
      iVar15 = (uint)*(byte *)(piVar12 + 2) - iVar5;
      iVar17 = (uint)*(byte *)((int)piVar12 + 9) - iVar5;
      iVar5 = (uint)*(byte *)((int)piVar12 + 10) - iVar5;
      if (iVar15 < 0) {
        unaff_s1 = (uint *)(unaff_s0 + 0x60);
        if (*(char *)(unaff_s0 + 7) != '\0') {
          if (*(char *)(unaff_s0 + 7) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (*(short *)(*(int *)(unaff_s0 + 0x38) + 4) == 0) {
            *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
            FUN_801406e4(unaff_s0,0);
            return unaff_s2;
          }
          *(ushort *)(unaff_s0 + 0x62) = *(ushort *)(unaff_s0 + 0x62) ^ 1;
                    /* WARNING: Subroutine does not return */
          *(short *)(unaff_s0 + 0x56) = *(short *)(unaff_s0 + 0x56) + 0x800;
          FUN_801402b8(unaff_s0,7,0);
        }
        iVar15 = 0x1a;
        uVar3 = *(ushort *)(unaff_s0 + 0x62);
        iVar17 = 8;
LAB_8013d19c:
                    /* WARNING: Subroutine does not return */
        *(ushort *)((int)unaff_s1 + 2) = uVar3 & 0xfffb;
        FUN_801402b8(unaff_s0,iVar15,iVar17);
      }
      if (0xff < iVar15) {
        iVar15 = 0xff;
      }
      if (iVar17 < 0) {
        puVar6 = (undefined1 *)thunk_EXT_FUN_80146194(iVar5,iVar15,0);
        return puVar6;
      }
      if (0xff < iVar17) {
        iVar17 = 0xff;
      }
      uVar3 = (ushort)(iVar5 < 0x100);
      if (iVar5 < 0) {
        unaff_s0 = 0;
        goto LAB_8013d19c;
      }
      if (uVar3 == 0) {
        iVar5 = 0xff;
      }
      *(char *)(puVar19 + 0xe) = (char)iVar15;
      *(char *)((int)puVar19 + 0x39) = (char)iVar17;
      *(char *)((int)puVar19 + 0x3a) = (char)iVar5;
      param_2 = (uint)*(byte *)(piVar12 + 5);
      param_3 = (uint)*(byte *)((int)piVar12 + 0x15);
      piVar12 = (int *)(uint)*(byte *)((int)piVar12 + 0x16);
      iVar5 = (int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6);
      in_t1 = puVar19 + 0x11;
      if (iVar5 * 0x10000 < 0) {
        iVar5 = 0;
      }
      iVar5 = iVar5 << 0x10;
LAB_8013424c:
      iVar5 = iVar5 >> 0x10;
      iVar15 = param_2 - iVar5;
      iVar17 = param_3 - iVar5;
      iVar5 = (int)piVar12 - iVar5;
      if (iVar15 < 0) {
        puVar6 = (undefined1 *)FUN_8013d214(iVar5,0);
        return puVar6;
      }
      if (0xff < iVar15) {
        iVar15 = 0xff;
      }
      if (iVar17 < 0) {
        return (undefined1 *)(uint)(iVar17 < 0x100);
      }
      if ((undefined1 *)(uint)(iVar17 < 0x100) == (undefined1 *)0x0) {
        iVar17 = 0xff;
      }
      if (iVar5 < 0) {
        if (DAT_00000007 == 0) {
          uRam00000062 = uRam00000062 & 0xfffb;
                    /* WARNING: Subroutine does not return */
          FUN_801402b8(0,(int)(short)iVar15,8,param_4,unaff_s0,unaff_s1,unaff_s2,iVar11);
        }
        if (DAT_00000007 < 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        iVar5 = 0;
        unaff_s2 = (undefined1 *)0x0;
        sVar4 = _DAT_00000032;
        DAT_00000007 = DAT_00000007 - 1;
LAB_8013d2c4:
        *(short *)(iVar5 + 0x32) = sVar4 + 0x10;
        FUN_801406e4(iVar5,iVar15);
        return unaff_s2;
      }
      if (0xff < iVar5) {
        iVar5 = 0xff;
      }
      *(char *)in_t1 = (char)iVar15;
      *(char *)((int)in_t1 + 1) = (char)iVar17;
      *(char *)((int)in_t1 + 2) = (char)iVar5;
      psVar7 = (short *)((int)(char)*in_t0 - (uint)*(ushort *)(unaff_s3 + 6));
      in_t1 = unaff_s1 + 7;
      if ((int)psVar7 * 0x10000 < 0) {
        psVar7 = (short *)0x0;
      }
      sVar4 = (short)psVar7;
      iVar5 = (int)sVar4;
      param_2 = (uint)*(byte *)(param_4 + -5) - iVar5;
      param_3 = (uint)*(byte *)((int)param_4 + -0x13) - iVar5;
      iVar5 = (uint)*(byte *)((int)param_4 + -0x12) - iVar5;
      if ((int)param_2 < 0) {
        iVar15 = 0;
        goto LAB_8013d2c4;
      }
      if (0xff < (int)param_2) {
        param_2 = 0xff;
      }
      uVar14 = (undefined1)param_2;
      if ((int)param_3 < 0) {
        return (undefined1 *)(uint)((int)param_3 < 0x100);
      }
      if ((undefined1 *)(uint)((int)param_3 < 0x100) == (undefined1 *)0x0) {
        param_3 = 0xff;
      }
      uVar16 = (undefined1)param_3;
      if (iVar5 < 0) {
        uVar10 = func_0x80078240((int)_DAT_1f800160 - (int)*psVar7,
                                 (int)_DAT_1f800162 - (int)psVar7[1],
                                 (int)_DAT_1f800164 - (int)psVar7[2]);
        return (undefined1 *)(uint)(uVar10 < unaff_s0);
      }
    } while (iVar5 < 0x100);
  } while( true );
}

