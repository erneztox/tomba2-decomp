// FUN_8012c03c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8012c03c(uint *param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined4 in_zero;
  undefined4 in_at;
  undefined4 extraout_at;
  short sVar3;
  undefined4 *puVar4;
  short extraout_v1;
  short extraout_v1_00;
  short sVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 *puVar8;
  uint *puVar9;
  ushort *puVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  undefined1 *puVar14;
  uint *unaff_s3;
  uint *puVar15;
  undefined4 *unaff_s4;
  int unaff_s5;
  uint unaff_s6;
  short unaff_s7;
  int unaff_s8;
  ulonglong uVar16;
  
  bVar1 = (byte)param_1[1];
  puVar13 = (uint *)(uint)bVar1;
  puVar14 = &DAT_800e7e80;
  puVar7 = param_1;
  puVar15 = unaff_s3;
  if (puVar13 == (uint *)0x1) {
    puVar7 = (uint *)(uint)*(byte *)((int)param_1 + 5);
    puVar9 = unaff_s3;
    if (puVar7 == (uint *)0x1) {
      FUN_801344ac(param_1);
      if ((*(byte *)((int)param_1 + 6) == 0) && (4 < DAT_800e7eaa - 0xe)) {
        uVar16 = func_0x800779d0(param_1,0,0xfffffe70,600);
        goto LAB_80135360;
      }
      *(byte *)((int)param_1 + 1) = bVar1;
      func_0x80077ebc(param_1);
      sVar5 = extraout_v1;
      if (*(byte *)((int)param_1 + 1) != 0) goto LAB_801353c8;
      return;
    }
    if (puVar7 < (uint *)0x2) {
      if (puVar7 == (uint *)0x0) {
        iVar12 = 0;
        if (DAT_800bf9dd < 0xf) {
          *(byte *)((int)param_1 + 5) = bVar1;
        }
        else {
          *(byte *)((int)param_1 + 5) = 2;
          ((byte *)((int)param_1 + 0x2e))[0] = 0x45;
          ((byte *)((int)param_1 + 0x2e))[1] = 0x38;
          ((byte *)((int)param_1 + 0x32))[0] = 0x6c;
          ((byte *)((int)param_1 + 0x32))[1] = 0xf8;
          uVar6 = param_1[2];
          *(byte *)param_1 = bVar1;
          ((byte *)((int)param_1 + 0x36))[0] = 0x76;
          ((byte *)((int)param_1 + 0x36))[1] = 0x11;
          if ((byte)uVar6 != 0) {
            puVar10 = (ushort *)&DAT_8014a76c;
            puVar7 = param_1;
            do {
              uVar2 = *puVar10;
              puVar8 = (undefined4 *)(uint)uVar2;
              puVar10 = puVar10 + 1;
              *(ushort *)(puVar7[0x30] + 8) = uVar2;
              iVar12 = iVar12 + 1;
              puVar7 = puVar7 + 1;
            } while (iVar12 < (int)(uint)(byte)param_1[2]);
            puVar4 = (undefined4 *)0x0;
            goto LAB_80135238;
          }
        }
        *(byte *)(param_1 + 2) = (byte)param_1[2] + 1;
        func_0x800517f8(param_1);
                    /* WARNING: Subroutine does not return */
        *(byte *)(param_1 + 2) = (byte)param_1[2] - 1;
        FUN_801252c0(param_1,1,0);
      }
    }
    else if (puVar7 == (uint *)0x2) {
      if ((DAT_800e7eaa == 0x25) || (DAT_800e7eaa - 0xe < 6)) {
        *(byte *)((int)param_1 + 1) = bVar1;
        sVar3 = func_0x80077ebc(param_1);
        sVar5 = extraout_v1_00;
        goto LAB_801353b0;
      }
      func_0x8007778c(param_1);
      if (*(byte *)((int)param_1 + 1) == 0) {
        return;
      }
      FUN_801347e4(param_1);
      *(byte *)(param_1 + 2) = (byte)param_1[2] + 1;
      puVar7 = param_1;
      func_0x800517f8(param_1);
      *(byte *)(param_1 + 2) = (byte)param_1[2] - 1;
    }
  }
  else {
    if ((uint *)0x1 < puVar13) {
      if (puVar13 != (uint *)0x2) {
        if (puVar13 != (uint *)0x3) goto LAB_801353f8;
        func_0x8007a624(param_1);
      }
      return;
    }
    if (puVar13 == (uint *)0x0) {
      if (_DAT_800ed098 < 10) {
        *(byte *)(param_1 + 1) = 3;
      }
      else {
        *(byte *)(param_1 + 2) = 10;
        *(byte *)((int)param_1 + 9) = 10;
        *(byte *)((int)param_1 + 0xb) = 1;
        iVar12 = 0;
        *(byte *)((int)param_1 + 0xd) = 0;
        *(byte *)(param_1 + 1) = (byte)param_1[1] + 1;
        if ((byte)param_1[2] != 0) {
          puVar15 = (uint *)&DAT_8014a758;
          puVar13 = param_1;
          do {
            uVar6 = func_0x8007aae8();
            puVar13[0x30] = uVar6;
            *(short *)(uVar6 + 6) = (short)iVar12 + -1;
            *(undefined4 *)puVar13[0x30] = 0;
            if (iVar12 == 0) {
              *(undefined2 *)(param_1[0x30] + 4) = 0;
              return;
            }
            *(undefined2 *)(puVar13[0x30] + 4) = 0x87;
            *(short *)(puVar13[0x30] + 8) = (short)*puVar15;
            iVar11 = iVar12 + 0x34;
            *(undefined2 *)(puVar13[0x30] + 10) = 0;
            puVar15 = (uint *)((int)puVar15 + 2);
            *(undefined2 *)(puVar13[0x30] + 0xc) = 0;
            puVar7 = (uint *)puVar13[0x30];
            iVar12 = iVar12 + 1;
            func_0x80051b04(puVar7,0xc,iVar11);
            puVar13 = puVar13 + 1;
          } while (iVar12 < (int)(uint)(byte)param_1[2]);
        }
        *(byte *)(param_1 + 2) = 9;
        *(undefined2 *)(param_1 + 0x18) = 0xf;
        ((byte *)((int)param_1 + 0x62))[0] = 0xbf;
        ((byte *)((int)param_1 + 0x62))[1] = 0x3b;
        *(undefined2 *)(param_1 + 0x19) = 0x70f0;
        ((byte *)((int)param_1 + 0x66))[0] = 0xf8;
        ((byte *)((int)param_1 + 0x66))[1] = 0x70;
        *(undefined2 *)(param_1 + 0x1a) = 0x88f0;
        ((byte *)((int)param_1 + 0x6a))[0] = 0xf8;
        ((byte *)((int)param_1 + 0x6a))[1] = 0x88;
        *(undefined2 *)(param_1 + 0x1b) = 0x28;
        sVar5 = *(short *)((int)param_1 + 0x32);
        sVar3 = *(short *)((int)param_1 + 0x36);
        ((byte *)((int)param_1 + 0x6e))[0] = 0;
        ((byte *)((int)param_1 + 0x6e))[1] = 0;
        *(short *)((int)param_1 + 0x32) = sVar5 + 0x7bb;
        *(short *)((int)param_1 + 0x36) = sVar3 + -0x418;
      }
    }
  }
LAB_801353f8:
  do {
    puVar10 = (ushort *)0x0;
    func_0x80083de0();
    puVar9 = (uint *)(*(int *)(unaff_s5 + -0x2738) + (int)unaff_s3 * 4);
    *puVar15 = *puVar9 | (uint)puVar13;
    *puVar9 = (uint)puVar15;
    unaff_s3 = puVar15 + 3;
    sVar5 = unaff_s7 + 1;
    in_at = extraout_at;
    puVar4 = unaff_s4;
    do {
      do {
        unaff_s4 = puVar4 + 4;
        if (6 < sVar5) {
          _DAT_800bf544 = unaff_s3;
          return;
        }
        puVar8 = puVar4 + 6;
        puVar4 = puVar4 + 8;
        setCopReg(2,in_zero,*unaff_s4);
        unaff_s7 = sVar5;
LAB_80135238:
        setCopReg(2,in_at,unaff_s4[1]);
        setCopReg(2,puVar4,*puVar8);
        setCopReg(2,puVar8,puVar8[1]);
        setCopReg(2,puVar7,*puVar4);
        setCopReg(2,puVar10,puVar4[1]);
        copFunction(2,0x280030);
        iVar12 = getCopControlWord(2,0xf800);
        sVar5 = unaff_s7 + 1;
        puVar4 = unaff_s4;
      } while (iVar12 < 0);
      copFunction(2,0x158002d);
      iVar12 = getCopReg(2,7);
      iVar12 = iVar12 + *(short *)(unaff_s8 + 0x32);
      uVar6 = iVar12 >> 10;
      puVar9 = (uint *)((iVar12 >> (uVar6 & 0x1f)) + uVar6 * 0x200);
      if ((uint *)0x7fb < puVar9 + -1) {
        puVar9 = (uint *)0xffffffff;
      }
      sVar5 = unaff_s7 + 1;
    } while ((int)puVar9 < 1);
    uVar6 = getCopReg(2,0xc);
    unaff_s3[2] = uVar6;
    uVar6 = getCopReg(2,0xd);
    unaff_s3[3] = uVar6;
    uVar6 = getCopReg(2,0xe);
    unaff_s3[4] = uVar6;
    puVar14 = (undefined1 *)0x55555555;
    unaff_s3[1] = unaff_s6;
    unaff_s3[5] = 0x55555555;
    puVar7 = (uint *)(*(int *)(unaff_s5 + -0x2738) + (int)puVar9 * 4);
    param_1 = (uint *)0x5000000;
    *unaff_s3 = *puVar7 | 0x5000000;
    *puVar7 = (uint)unaff_s3;
    unaff_s3 = unaff_s3 + 6;
    func_0x80083de0(unaff_s3,0,1,0x35,0);
    puVar8 = (undefined4 *)(*(int *)(unaff_s5 + -0x2738) + (int)puVar9 * 4);
    puVar13 = (uint *)0x2000000;
    uVar16 = CONCAT44(puVar8,*puVar8) | 0x2000000;
LAB_80135360:
    *unaff_s3 = (uint)uVar16;
    *(undefined4 *)(uVar16 >> 0x20) = unaff_s3;
    uVar6 = getCopReg(2,0xc);
    unaff_s3[5] = uVar6;
    uVar6 = getCopReg(2,0xd);
    unaff_s3[6] = uVar6;
    uVar6 = getCopReg(2,0xe);
    unaff_s3[7] = uVar6;
    unaff_s3[4] = unaff_s6;
    unaff_s3[8] = (uint)puVar14;
    *(short *)(unaff_s3 + 5) = (short)unaff_s3[5] + 2;
    *(short *)(unaff_s3 + 6) = (short)unaff_s3[6] + 2;
    sVar5 = *(short *)((int)unaff_s3 + 0x16);
    *(short *)(unaff_s3 + 7) = (short)unaff_s3[7] + 2;
    sVar3 = *(short *)((int)unaff_s3 + 0x1a);
    unaff_s3 = unaff_s3 + 3;
LAB_801353b0:
    *(short *)((int)unaff_s3 + 10) = sVar5 + 1;
    sVar5 = *(short *)((int)unaff_s3 + 0x12) + 1;
    *(short *)((int)unaff_s3 + 0xe) = sVar3 + 1;
LAB_801353c8:
    *(short *)((int)unaff_s3 + 0x12) = sVar5;
    puVar7 = (uint *)(*(int *)(unaff_s5 + -0x2738) + (int)puVar9 * 4);
    *unaff_s3 = *puVar7 | (uint)param_1;
    *puVar7 = (uint)unaff_s3;
    puVar7 = unaff_s3 + 6;
    puVar15 = unaff_s3 + 6;
    unaff_s3 = puVar9;
  } while( true );
}

