// FUN_801203f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Exceeded maximum restarts with more pending */

undefined4 * FUN_801203f4(byte *param_1,int param_2,int param_3)

{
  byte bVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 in_zero;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  undefined2 *in_t0;
  uint *in_t1;
  int *in_t2;
  undefined2 *in_t3;
  undefined2 *puVar12;
  int iVar13;
  undefined4 *in_t5;
  int *in_t6;
  uint in_t7;
  ushort *puVar14;
  ushort *unaff_s3;
  ushort *puVar15;
  int unaff_s4;
  int iStackX_4;
  int iStackX_8;
  
  param_1[8] = 1;
  if (_DAT_800ed098 < 1) {
    param_1[4] = 3;
    copFunction(2,0x780010);
    uRam00000001 = getCopReg(2,0x16);
    setCopReg(2,0x4000,iStackX_4 >> 2);
    setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -10));
    copFunction(2,0x780010);
    uVar10 = getCopReg(2,0x16);
    in_t1[4] = uVar10;
    setCopReg(2,0x4000,iStackX_8 >> 2);
    setCopReg(2,0x3000,*(undefined4 *)(in_t0 + -4));
    copFunction(2,0x780010);
    uVar10 = getCopReg(2,0x16);
    in_t1[7] = uVar10;
    *in_t0 = *in_t3;
    puVar9 = (uint *)(param_2 + *in_t2 * 4);
    *in_t1 = *puVar9 | 0x9000000;
    *puVar9 = (uint)in_t1;
    do {
      do {
        do {
          puVar12 = in_t3 + 0x12;
          puVar7 = in_t5 + 9;
          iVar11 = param_3 + -1;
          if (param_3 == 0) {
            _DAT_800bf544 = in_t1 + 10;
            return puVar7;
          }
          setCopReg(2,in_zero,in_t5[0xd]);
          setCopReg(2,param_3,in_t5[0xf]);
          setCopReg(2,0x800,in_t5[0xe]);
          setCopReg(2,0x9000000,in_t5[0x10]);
          setCopReg(2,0x1800,(uint)in_t5[0xe] >> 0x10);
          setCopReg(2,param_2,in_t5[0x11]);
          *(undefined4 *)(in_t0 + 4) = *puVar7;
          copFunction(2,0x280030);
          *(undefined4 *)(in_t0 + 8) = *(undefined4 *)(in_t3 + 5);
          *(undefined4 *)(in_t0 + 0xe) = *(undefined4 *)(in_t3 + 7);
          uVar10 = *(uint *)(in_t3 + 3);
          iVar13 = getCopControlWord(2,0xf800);
          *in_t6 = iVar13;
          param_3 = iVar11;
          in_t3 = puVar12;
          in_t5 = puVar7;
        } while (*in_t6 < 0);
        copFunction(2,0x1400006);
        *(uint *)(in_t0 + 10) = uVar10 & in_t7;
        iVar11 = getCopReg(2,0x18);
        *in_t6 = iVar11;
      } while (*in_t6 < 1);
      uVar3 = getCopReg(2,0xc);
      in_t1[0xc] = uVar3;
      uVar3 = getCopReg(2,0xd);
      in_t1[0xf] = uVar3;
      uVar3 = getCopReg(2,0xe);
      in_t1[0x12] = uVar3;
    } while ((((0x13f < (ushort)in_t0[6]) && (0x13f < (ushort)in_t0[0xc])) &&
             (0x13f < (ushort)in_t0[0x12])) ||
            (((0xef < (ushort)in_t0[7] && (0xef < (ushort)in_t0[0xd])) &&
             (0xef < (ushort)in_t0[0x13]))));
    *(uint *)(in_t0 + 0x10) = uVar10 << 4 & in_t7;
    iVar11 = getCopReg(2,0x11);
    iVar13 = getCopReg(2,0x12);
    iVar4 = getCopReg(2,0x13);
    iVar8 = iVar4 >> 2;
    if (uVar10 >> 0x18 == 1) {
      if (iVar11 <= iVar13) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar4 < iVar11) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (uVar10 >> 0x18 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar11 < iVar13) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar13 < iVar4) {
        iVar8 = iVar13 >> 2;
      }
    }
    *in_t2 = iVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[0xb] = 2;
  param_1[9] = 1;
  *param_1 = 1;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x5e] = 0;
  param_1[0xbf] = 0;
  param_1[0x60] = 0xf;
  param_1[0x61] = 0;
  if (param_1[3] - 7 < 2) {
    iVar11 = func_0x8009a450();
    _DAT_80139004 = _DAT_80139004 + 0x20 + (short)(iVar11 >> 0xc);
    iVar11 = func_0x8009a450();
    _DAT_1f800080 = func_0x8009a450();
    uVar5 = _DAT_800ed8c8;
    _DAT_1f800080 = iVar11 << 0x10 | _DAT_1f800080;
    setCopControlWord(2,0,_DAT_1f8000f8);
    setCopControlWord(2,0x800,_DAT_1f8000fc);
    setCopControlWord(2,0x1000,_DAT_1f800100);
    setCopControlWord(2,0x1800,_DAT_1f800104);
    setCopControlWord(2,0x2000,_DAT_1f800108);
    setCopControlWord(2,0x2800,_DAT_1f80010c);
    setCopControlWord(2,0x3000,_DAT_1f800110);
    setCopControlWord(2,0x3800,_DAT_1f800114);
    puVar14 = (ushort *)(unaff_s4 + 0x10);
    if (DAT_800bf873 == '\0') {
      _DAT_801388f0 = _DAT_801388f0 - 1;
      if ((int)((uint)_DAT_801388f0 << 0x10) < 1) {
        _DAT_801388ec = _DAT_801388ec + 0x40;
        if (0xff < _DAT_801388ec) {
          _DAT_801388ec = 0;
          _DAT_801388ee = _DAT_801388ee + 0x40 & 0x7f;
        }
        _DAT_801388f0 = 3;
      }
      puVar14 = (ushort *)(unaff_s4 + 0x10);
      if ((_DAT_800bfe56 & 2) == 0) {
        setCopControlWord(2,0xa800,0x500);
        setCopControlWord(2,0xb000,0);
        setCopControlWord(2,0xb800,0);
        bVar1 = *(byte *)(unaff_s4 + 6);
        iVar11 = *(int *)(unaff_s4 + 0xc);
        for (puVar14 = (ushort *)(unaff_s4 + 0x10);
            puVar14 < (ushort *)(unaff_s4 + (uint)bVar1 * 2 + 0x10); puVar14 = puVar14 + 1) {
          puVar9 = (uint *)(iVar11 + (uint)*puVar14 * 4);
          uVar10 = *puVar9;
          uVar6 = FUN_8012f8d8(puVar9 + 1,uVar5,uVar10 & 0xffff);
          FUN_8013000c(uVar6,uVar5,uVar10 >> 0x10);
        }
        puVar7 = (undefined4 *)0x0;
        if (DAT_800bf871 < 0xf) {
          puVar7 = (undefined4 *)FUN_801311fc();
        }
      }
      else {
        unaff_s3 = (ushort *)(unaff_s4 + (uint)*(byte *)(unaff_s4 + 6) * 2 + 0x10);
        puVar7 = (undefined4 *)0x800f0000;
        unaff_s4 = *(int *)(unaff_s4 + 0xc);
        if (puVar14 < unaff_s3) {
          do {
            uVar10 = (uint)*puVar14;
            puVar14 = puVar14 + 1;
LAB_801295f4:
            uVar10 = FUN_80130838(unaff_s4 + uVar10 * 4 + 4);
LAB_80129614:
            FUN_80130d9c(uVar10);
          } while (puVar14 < unaff_s3);
          halt_baddata();
        }
      }
    }
    else {
      puVar15 = (ushort *)(unaff_s4 + (uint)*(byte *)(unaff_s4 + 6) * 2 + 0x10);
      iVar11 = *(int *)(unaff_s4 + 0xc);
      setCopControlWord(2,0xa800,0);
      setCopControlWord(2,0xb000,0);
      setCopControlWord(2,0xb800,0);
      puVar7 = (undefined4 *)0x0;
      if (puVar14 < puVar15) {
        do {
          uVar2 = *puVar14;
          puVar14 = puVar14 + 1;
          puVar9 = (uint *)(iVar11 + (uint)uVar2 * 4);
          uVar10 = *puVar9;
          uVar6 = FUN_801316a8(puVar9 + 1,uVar5,uVar10 & 0xffff,0);
          func_0x80131bb0(uVar6,uVar5,uVar10 >> 0x10,0);
        } while (puVar14 < puVar15);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    return puVar7;
  }
  param_1[0x62] = 0xbf;
  param_1[99] = 0x3f;
  param_1[100] = 0;
  param_1[0x65] = 0xe4;
  param_1[0x66] = 0x10;
  param_1[0x67] = 0xe4;
  param_1[0x68] = 0;
  param_1[0x69] = 0xf4;
  param_1[0x6a] = 0x10;
  param_1[0x6b] = 0xf4;
  param_1[0x6c] = 0x50;
  param_1[0x6d] = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x7a] = 0;
  param_1[0x7b] = 0;
  param_1[0x40] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  puVar14 = *(ushort **)((uint)param_1[3] * 4 + -0x7fec86dc);
  if (param_1[0x47] != 3) {
    puVar14 = puVar14 + (uint)param_1[0x47] * 0xb;
  }
  iVar11 = func_0x8007aae8();
  *(int *)(param_1 + 0xc0) = iVar11;
  *(undefined2 *)(iVar11 + 6) = 0xffff;
  **(undefined2 **)(param_1 + 0xc0) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 4) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 8) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40) = 0;
  *(ushort *)(param_1 + 0x88) = *puVar14;
  *(ushort *)(param_1 + 0x8a) = puVar14[1];
  *(ushort *)(param_1 + 0x8c) = puVar14[2];
  *(ushort *)(param_1 + 0x54) = puVar14[3];
  *(ushort *)(param_1 + 0x56) = puVar14[4];
  *(ushort *)(param_1 + 0x58) = puVar14[5];
  *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) = puVar14[6];
  *(ushort *)(param_1 + 0x80) = puVar14[7];
  *(ushort *)(param_1 + 0x82) = puVar14[8];
  *(ushort *)(param_1 + 0x84) = puVar14[9];
  bVar1 = param_1[0x47];
  uVar10 = (uint)bVar1;
  *(ushort *)(param_1 + 0x86) = puVar14[10];
  if (uVar10 == 2) {
    *(ushort *)(*(int *)(param_1 + 0xc0) + 2) = *(ushort *)(*(int *)(param_1 + 0xc0) + 0x3a) >> 1;
    if (*(short *)(param_1 + 0x82) == 0) {
      *param_1 = bVar1;
      goto LAB_80129614;
    }
  }
  else {
    if (uVar10 == 0) {
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x140;
      uVar10 = 0;
      goto LAB_801295f4;
    }
    if (uVar10 == 1) {
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x140;
      *(ushort *)(param_1 + 0x70) = *(short *)(*(int *)(param_1 + 0xc0) + 0x3a) + puVar14[-5];
      goto LAB_80129614;
    }
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0x140;
  }
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  param_1[0x50] = 0;
  param_1[0x51] = 2;
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x16) =
       *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a);
  *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x12) = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(param_1[3]) {
  case 0:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  default:
    *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2);
    puVar7 = (undefined4 *)FUN_801291f4();
    return puVar7;
  }
}

