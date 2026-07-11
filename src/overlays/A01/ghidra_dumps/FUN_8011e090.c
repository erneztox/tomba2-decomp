// FUN_8011e090

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8011e090(int param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 in_zero;
  short sVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int in_t0;
  int in_t1;
  uint in_t2;
  int *in_t5;
  int in_t7;
  int unaff_s1;
  int unaff_s2;
  uint unaff_s3;
  uint *in_t8;
  
  *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(*(int *)(param_1 + 0x14) + 0x4a);
  cVar1 = *(char *)(*(int *)(param_1 + 0x14) + 0x46);
  bVar2 = *(byte *)(param_1 + 5);
  *(char *)(param_1 + 0x46) = cVar1;
  iVar7 = param_3;
  iVar9 = in_t7;
  puVar6 = in_t8;
  if (bVar2 == 1) {
    if (cVar1 == '\0') {
      iVar7 = (uint)*(ushort *)(param_1 + 0x4a) << 0x10;
      iVar12 = *(int *)(param_1 + 0xc0);
      iVar11 = iVar7 >> 0x1f;
      uVar8 = (uint)*(ushort *)(iVar12 + 0xc) + (iVar7 >> 0x10) / 0x3e;
      goto LAB_80127154;
    }
    iVar10 = (uint)*(ushort *)(param_1 + 0x4a) << 0x10;
    iVar12 = *(int *)(param_1 + 0xc0);
    iVar11 = iVar10 >> 0x1f;
    *(short *)(iVar12 + 0xc) = *(short *)(iVar12 + 0xc) - (short)((iVar10 >> 0x10) / 0x3e);
    if (*(short *)(param_1 + 0x4a) == 0) {
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 0;
      puVar6 = (uint *)FUN_80127270();
      return puVar6;
    }
    uVar8 = 0;
    if (0x1eff < *(short *)(param_1 + 0x4a)) {
      *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x60) + 1;
      goto LAB_801271c8;
    }
    sVar5 = *(short *)(param_1 + 0x60) + 1;
    *(short *)(param_1 + 0x60) = sVar5;
    if ((0x1f00 - *(short *)(param_1 + 0x4a) >> 7) + 7 <= (int)sVar5) {
      func_0x80074590(0x82,0,0);
      *(undefined2 *)(param_1 + 0x60) = 0;
      puVar6 = (uint *)FUN_80127270();
      return puVar6;
    }
  }
  else if (bVar2 < 2) {
    if (bVar2 != 0) {
      puVar6 = (uint *)FUN_80127270();
      return puVar6;
    }
    if (*(short *)(param_1 + 0x4a) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x5e) = 2;
      *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x46) = *(undefined1 *)(param_1 + 0x46);
      *(undefined1 *)(param_1 + 5) = 1;
      puVar6 = (uint *)FUN_80127270();
      return puVar6;
    }
    if (*(char *)(param_1 + 0x5e) == '\x02') {
      *(undefined1 *)(param_1 + 5) = 2;
      puVar6 = (uint *)FUN_80127270();
      return puVar6;
    }
  }
  else {
    if (bVar2 != 2) {
      puVar6 = (uint *)FUN_80127270();
      return puVar6;
    }
    if (cVar1 == '\0') {
      iVar10 = (uint)*(ushort *)(param_1 + 0x4a) << 0x10;
      iVar12 = *(int *)(param_1 + 0xc0);
      iVar11 = iVar10 >> 0x1f;
      uVar8 = (iVar10 >> 0x10) / 0x3e;
      while (((uVar8 == 0 && (0xef < *(ushort *)(in_t0 + -0xf))) && (0xef < *(ushort *)(in_t0 + -3))
             )) {
        do {
          do {
            do {
              do {
                in_t7 = iVar9 + 0x2c;
                in_t8 = puVar6 + 0xb;
                param_3 = iVar7 + -1;
                if (iVar7 == 0) {
                  _DAT_800bf544 = in_t1;
                  return in_t8;
                }
                setCopReg(2,in_zero,puVar6[0x10]);
                setCopReg(2,0x800,puVar6[0x11]);
                setCopReg(2,0x1800,puVar6[0x11] >> 0x10);
                setCopReg(2,iVar7,puVar6[0x12]);
                setCopReg(2,iVar11,puVar6[0x13]);
                setCopReg(2,0x2800,puVar6[0x14]);
                uVar8 = *in_t8;
                *(uint *)(in_t0 + -0x2d) = uVar8 & 0xfff0f0f0;
                copFunction(2,0x280030);
                *(uint *)(in_t0 + -0x21) = uVar8 << 4 & unaff_s3;
                uVar8 = *(uint *)(iVar9 + 0x20);
                _FUN_8011e090 = getCopControlWord(2,0xf800);
LAB_80127154:
                iVar7 = param_3;
                iVar9 = in_t7;
                puVar6 = in_t8;
              } while (_FUN_8011e090 < 0);
              copFunction(2,0x1400006);
              *(undefined4 *)(in_t0 + -0x25) = *(undefined4 *)(in_t7 + -8);
              _FUN_8011e090 = getCopReg(2,0x18);
            } while (_FUN_8011e090 < 1);
            uVar4 = getCopReg(2,0xc);
            *(undefined4 *)(in_t1 + 8) = uVar4;
            uVar4 = getCopReg(2,0xd);
            *(undefined4 *)(in_t1 + 0x14) = uVar4;
            uVar4 = getCopReg(2,0xe);
            *(undefined4 *)(in_t1 + 0x20) = uVar4;
            setCopReg(2,in_zero,in_t8[10]);
            setCopReg(2,0x800,in_t8[9] >> 0x10);
            *(uint *)(in_t0 + -0x15) = uVar8 & unaff_s3;
            copFunction(2,0x180001);
            *(uint *)(in_t0 + -9) = uVar8 << 4 & unaff_s3;
            *(undefined4 *)(in_t0 + -0x19) = *(undefined4 *)(in_t7 + -4);
LAB_801271c8:
            _FUN_8011e090 = getCopControlWord(2,0xf800);
          } while (_FUN_8011e090 < 0);
          uVar4 = getCopReg(2,0xe);
          *(undefined4 *)(in_t1 + 0x2c) = uVar4;
        } while (((0x13f < *(ushort *)(in_t0 + -0x29)) && (0x13f < *(ushort *)(in_t0 + -0x1d))) &&
                ((0x13f < *(ushort *)(in_t0 + -0x11) && (0x13f < *(ushort *)(in_t0 + -5)))));
        in_t2 = uVar8 >> 0x18;
        if (*(ushort *)(in_t0 + -0x27) < 0xf0) break;
        uVar8 = (uint)(*(ushort *)(in_t0 + -0x1b) < 0xf0);
      }
      _DAT_1f800084 = getCopReg(2,0x10);
      _DAT_1f800088 = getCopReg(2,0x11);
      _DAT_1f80008c = getCopReg(2,0x12);
      _DAT_1f800090 = getCopReg(2,0x13);
      if ((in_t2 & 3) == 1) {
        iVar7 = *(int *)(unaff_s1 + 0x88);
        if (*(int *)(unaff_s1 + 0x88) < *(int *)(unaff_s2 + 0x84)) {
          iVar7 = *(int *)(unaff_s2 + 0x84);
        }
        iVar9 = *(int *)(iVar12 + 0x90);
        bVar3 = iVar9 < iVar7;
        if (iVar9 < *(int *)(param_1 + 0x8c)) {
          puVar6 = (uint *)FUN_801302f0();
          return puVar6;
        }
      }
      else {
        if ((in_t2 & 3) != 2) {
          halt_baddata();
        }
        iVar7 = *(int *)(unaff_s1 + 0x88);
        if (*(int *)(unaff_s2 + 0x84) < *(int *)(unaff_s1 + 0x88)) {
          iVar7 = *(int *)(unaff_s2 + 0x84);
        }
        iVar9 = *(int *)(iVar12 + 0x90);
        iVar11 = *(int *)(param_1 + 0x8c);
        bVar3 = iVar7 < iVar9;
        if (iVar11 < iVar9) {
          bVar3 = iVar7 < iVar11;
          iVar9 = iVar11;
        }
      }
      if (bVar3) {
        iVar9 = iVar7;
      }
      *in_t5 = iVar9 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(*(int *)(param_1 + 0xc0) + 0xc) =
         *(short *)(*(int *)(param_1 + 0xc0) + 0xc) - *(short *)(param_1 + 0x4a) / 0x3e;
    if (*(char *)(param_1 + 0x5e) == '\0') {
      *(undefined1 *)(param_1 + 5) = 0;
    }
  }
  iVar7 = func_0x8007778c(param_1);
  puVar6 = (uint *)0x0;
  if (iVar7 != 0) {
    puVar6 = (uint *)func_0x800517f8(param_1);
  }
  return puVar6;
}

