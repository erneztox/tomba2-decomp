// FUN_8011e748

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x8011e928) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_8011e748(uint param_1,int param_2,int param_3)

{
  bool bVar1;
  byte bVar2;
  short sVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 in_zero;
  int iVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  char *in_t0;
  uint *in_t1;
  int *in_t5;
  int in_t7;
  int iVar10;
  int *unaff_s2;
  uint unaff_s3;
  int unaff_s4;
  int unaff_s5;
  uint *unaff_s6;
  uint *in_t8;
  int *unaff_s8;
  
  uVar9 = 1;
  bVar2 = *(byte *)(param_1 + 6);
  iVar10 = *(int *)(param_1 + 0x10);
  if (bVar2 == 1) {
    FUN_8012757c();
    uVar9 = param_1;
    param_2 = iVar10;
  }
  else {
    iVar6 = 2;
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        iVar6 = (uint)*(ushort *)(iVar10 + 0x4a) * 0x10000;
        if (*(ushort *)(iVar10 + 0x4a) != 0) {
          iVar7 = iVar6 >> 0x19;
          if (*(char *)(iVar10 + 0x46) == '\0') {
            uVar9 = (uint)*(ushort *)(param_1 + 0x58);
            if (*(short *)(param_1 + 0x58) < -0x2ff) {
              iVar7 = uVar9 + iVar7;
              *(short *)(param_1 + 0x58) = (short)iVar7;
              in_t0[-0x24] = (char)iVar7;
              in_t0[-0x19] = in_t0[-0x19] + *(char *)(unaff_s5 + -0x7714);
              in_t0[-0x18] = in_t0[-0x18] + (&DAT_ffff88ee)[unaff_s4];
              in_t0[-0xd] = in_t0[-0xd] + *(char *)(unaff_s5 + -0x7714);
              in_t0[-0xc] = in_t0[-0xc] + (&DAT_ffff88ee)[unaff_s4];
              in_t0[-1] = in_t0[-1] + *(char *)(unaff_s5 + -0x7714);
              *in_t0 = *in_t0 + (&DAT_ffff88ee)[unaff_s4];
              iVar6 = *in_t5;
              *in_t1 = unaff_s6[iVar6] | 0xc000000;
              unaff_s6[iVar6] = (uint)in_t1;
              do {
                do {
                  do {
                    do {
                      puVar8 = in_t8;
                      iVar7 = in_t7;
                      in_t7 = iVar7 + 0x2c;
                      in_t8 = puVar8 + 0xb;
                      iVar6 = param_3 + -1;
                      if (param_3 == 0) {
                        _DAT_800bf544 = in_t1 + 0xd;
                        return in_t8;
                      }
                      setCopReg(2,in_zero,puVar8[0x10]);
                      setCopReg(2,0x800,puVar8[0x11]);
                      setCopReg(2,0x1800,puVar8[0x11] >> 0x10);
                      setCopReg(2,param_3,puVar8[0x12]);
                      setCopReg(2,0xc000000,puVar8[0x13]);
                      setCopReg(2,0x2800,puVar8[0x14]);
                      uVar9 = *in_t8;
                      *(uint *)(in_t0 + 7) = uVar9 & 0xfff0f0f0;
                      copFunction(2,0x280030);
                      *(uint *)(in_t0 + 0x13) = uVar9 << 4 & unaff_s3;
                      uVar9 = *(uint *)(iVar7 + 0x20);
                      _FUN_8011e748 = getCopControlWord(2,0xf800);
                      param_3 = iVar6;
                    } while (_FUN_8011e748 < 0);
                    copFunction(2,0x1400006);
                    *(undefined4 *)(in_t0 + 0xf) = *(undefined4 *)(iVar7 + 0x24);
                    _FUN_8011e748 = getCopReg(2,0x18);
                  } while (_FUN_8011e748 < 1);
                  uVar4 = getCopReg(2,0xc);
                  in_t1[0xf] = uVar4;
                  uVar4 = getCopReg(2,0xd);
                  in_t1[0x12] = uVar4;
                  uVar4 = getCopReg(2,0xe);
                  in_t1[0x15] = uVar4;
                  setCopReg(2,in_zero,puVar8[0x15]);
                  setCopReg(2,0x800,puVar8[0x14] >> 0x10);
                  *(uint *)(in_t0 + 0x1f) = uVar9 & unaff_s3;
                  copFunction(2,0x180001);
                  *(uint *)(in_t0 + 0x2b) = uVar9 << 4 & unaff_s3;
                  *(undefined4 *)(in_t0 + 0x1b) = *(undefined4 *)(iVar7 + 0x28);
                  _FUN_8011e748 = getCopControlWord(2,0xf800);
                } while (_FUN_8011e748 < 0);
                uVar4 = getCopReg(2,0xe);
                in_t1[0x18] = uVar4;
              } while (((((0x13f < *(ushort *)(in_t0 + 0xb)) && (0x13f < *(ushort *)(in_t0 + 0x17)))
                        && (0x13f < *(ushort *)(in_t0 + 0x23))) &&
                       (0x13f < *(ushort *)(in_t0 + 0x2f))) ||
                      (((0xef < *(ushort *)(in_t0 + 0xd) && (0xef < *(ushort *)(in_t0 + 0x19))) &&
                       ((0xef < *(ushort *)(in_t0 + 0x25) && (0xef < *(ushort *)(in_t0 + 0x31)))))))
              ;
              _DAT_1f800084 = getCopReg(2,0x10);
              _DAT_1f800088 = getCopReg(2,0x11);
              _DAT_1f80008c = getCopReg(2,0x12);
              _DAT_1f800090 = getCopReg(2,0x13);
              uVar9 = uVar9 >> 0x18 & 3;
              if (uVar9 == 1) {
                iVar6 = *(int *)(iVar10 + 0x88);
                if (*(int *)(iVar10 + 0x88) < unaff_s2[0x21]) {
                  iVar6 = unaff_s2[0x21];
                }
                iVar10 = *(int *)(param_2 + 0x90);
                bVar1 = iVar10 < iVar6;
                if (iVar10 < *(int *)(param_1 + 0x8c)) {
                  puVar8 = (uint *)FUN_801302f0();
                  return puVar8;
                }
              }
              else {
                if (uVar9 != 2) {
                  halt_baddata();
                }
                iVar6 = *(int *)(iVar10 + 0x88);
                if (unaff_s2[0x21] < *(int *)(iVar10 + 0x88)) {
                  iVar6 = unaff_s2[0x21];
                }
                iVar10 = *(int *)(param_2 + 0x90);
                iVar7 = *(int *)(param_1 + 0x8c);
                bVar1 = iVar6 < iVar10;
                if (iVar7 < iVar10) {
                  bVar1 = iVar6 < iVar7;
                  iVar10 = iVar7;
                }
              }
              if (bVar1) {
                iVar10 = iVar6;
              }
              *in_t5 = iVar10 >> 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
              halt_baddata();
            }
            iVar10 = uVar9 + (iVar6 >> 0x18);
            *(short *)(param_1 + 0x58) = (short)iVar10;
            if (0 < iVar10 * 0x10000) {
              *(undefined2 *)(param_1 + 0x58) = 0;
              *(undefined1 *)(param_1 + 6) = 2;
              *(undefined1 *)(param_1 + 7) = 0;
            }
            *(undefined1 *)(param_1 + 0xbf) = 1;
            iVar6 = 1;
          }
          else {
            iVar7 = (uint)*(ushort *)(param_1 + 0x58) - iVar7;
            *(short *)(param_1 + 0x58) = (short)iVar7;
            iVar6 = -0x400;
            if (iVar7 * 0x10000 >> 0x10 < -0x400) {
              *(undefined2 *)(param_1 + 0x58) = 0xfc00;
            }
            else {
              *(undefined1 *)(param_1 + 0xbf) = 1;
            }
          }
          goto LAB_801278f4;
        }
        if (-0x300 < *(short *)(param_1 + 0x58)) {
          *(undefined1 *)(param_1 + 6) = 1;
          puVar8 = (uint *)FUN_801278f0();
          return puVar8;
        }
        goto LAB_8011e958;
      }
      goto LAB_801278f4;
    }
    iVar6 = 3;
    if (bVar2 != 2) {
      if (bVar2 == 3) {
        if ((*(short *)(iVar10 + 0x4a) != 0) && (*(char *)(iVar10 + 0x46) == '\x01')) {
          *(undefined1 *)(param_1 + 6) = 0;
          *(undefined1 *)(param_1 + 7) = 0;
        }
        goto LAB_8011e958;
      }
      goto LAB_801278f4;
    }
    if (*(char *)(param_1 + 7) == '\0') {
      *(undefined2 *)(param_1 + 0x42) = 8;
      *(undefined1 *)(param_1 + 7) = 1;
      *(undefined1 *)(param_1 + 0xbf) = 2;
      DAT_800e807e = 1;
      if (DAT_800bf80f == '\0') {
        uVar9 = 0x84;
        param_2 = 0;
        func_0x80074590(0x84,0,0);
      }
    }
    else if (*(char *)(param_1 + 7) != '\x01') goto LAB_801278bc;
    *(ushort *)(*(int *)(param_1 + 0xc0) + 2) = ((_DAT_1f80017c & 3) - 2) * 0xc;
    sVar3 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar3 + -1;
    if (sVar3 != 1) {
LAB_8011e958:
      if (((*(char *)(param_1 + 0xbf) == '\x01') && (0x1e < *(short *)(param_1 + 0x60))) ||
         ((*(char *)(param_1 + 0xbf) == '\x02' && (0xe < *(short *)(param_1 + 0x60))))) {
        if (DAT_800bf80f == '\0') {
          func_0x80074590(0x83,0,0);
        }
        *(undefined2 *)(param_1 + 0x60) = 0;
      }
      puVar8 = (uint *)0x0;
      if (*(char *)(param_1 + 0xbf) != '\0') {
        puVar8 = (uint *)(uint)((int)((uint)*(ushort *)(iVar10 + 0x4a) << 0x10) >> 0x1a < 4);
        if (puVar8 == (uint *)0x0) {
          puVar8 = (uint *)(*(ushort *)(param_1 + 0x60) + 1);
          *(short *)(param_1 + 0x60) = (short)puVar8;
        }
        *(undefined1 *)(param_1 + 0xbf) = 0;
      }
      return puVar8;
    }
    DAT_800e807e = 0;
  }
LAB_801278bc:
  unaff_s8 = (int *)&DAT_1f800000;
  bVar1 = unaff_s5 == 0;
  iVar6 = unaff_s5;
  unaff_s3 = (uint)_DAT_800bf544;
  unaff_s5 = unaff_s5 + -1;
  if (bVar1) {
    return unaff_s6;
  }
LAB_801278f4:
  iVar10 = uVar9 + 0x20;
  do {
    setCopReg(2,in_zero,unaff_s6[4]);
    setCopReg(2,iVar6,unaff_s6[6]);
    setCopReg(2,0x800,unaff_s6[5]);
    setCopReg(2,uVar9,unaff_s6[7]);
    setCopReg(2,0x1800,unaff_s6[5] >> 0x10);
    setCopReg(2,param_2,unaff_s6[8]);
    *(uint *)(unaff_s3 + 4) = *unaff_s6;
    copFunction(2,0x280030);
    *(undefined4 *)(unaff_s3 + 0xc) = *(undefined4 *)(iVar10 + -0x18);
    *(undefined4 *)(unaff_s3 + 0x18) = *(undefined4 *)(iVar10 + -0x14);
    uVar9 = *(uint *)(iVar10 + -0x1c);
    iVar6 = getCopControlWord(2,0xf800);
    *unaff_s8 = iVar6;
    if (-1 < *unaff_s8) {
      copFunction(2,0x1400006);
      *(uint *)(unaff_s3 + 0x10) = uVar9 & 0xf0f0f0;
      iVar6 = getCopReg(2,0x18);
      *unaff_s8 = iVar6;
      if (0 < *unaff_s8) {
        uVar5 = getCopReg(2,0xc);
        *(undefined4 *)(unaff_s3 + 8) = uVar5;
        uVar5 = getCopReg(2,0xd);
        *(undefined4 *)(unaff_s3 + 0x14) = uVar5;
        uVar5 = getCopReg(2,0xe);
        *(undefined4 *)(unaff_s3 + 0x20) = uVar5;
        if ((((*(ushort *)(unaff_s3 + 8) < 0x140) || (*(ushort *)(unaff_s3 + 0x14) < 0x140)) ||
            (*(ushort *)(unaff_s3 + 0x20) < 0x140)) &&
           (((*(ushort *)(unaff_s3 + 10) < 0xf0 || (*(ushort *)(unaff_s3 + 0x16) < 0xf0)) ||
            (*(ushort *)(unaff_s3 + 0x22) < 0xf0)))) {
          *(uint *)(unaff_s3 + 0x1c) = (uVar9 & 0xf0f0f) << 4;
          _DAT_1f800084 = getCopReg(2,0x11);
          _DAT_1f800088 = getCopReg(2,0x12);
          _DAT_1f80008c = getCopReg(2,0x13);
          if (((uVar9 >> 0x18 & 0x40) == 0) || (_DAT_1f80009c == 0)) {
            uVar9 = uVar9 >> 0x18 & 3;
            iVar10 = _DAT_1f80008c >> 2;
            if (uVar9 == 1) {
              if (_DAT_1f800084 <= _DAT_1f800088) {
                puVar8 = (uint *)FUN_80130aac();
                return puVar8;
              }
              if (_DAT_1f800084 <= _DAT_1f80008c) goto LAB_80127b20;
            }
            else if (uVar9 == 2) {
              if (_DAT_1f800084 < _DAT_1f800088) {
                puVar8 = (uint *)FUN_80130a5c();
                return puVar8;
              }
              if (_DAT_1f800088 < _DAT_1f80008c) {
                iVar10 = _DAT_1f800088 >> 2;
              }
LAB_80127b20:
              *unaff_s2 = iVar10;
              puVar8 = (uint *)FUN_80130acc();
              return puVar8;
            }
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
      }
    }
    iVar10 = iVar10 + 0x24;
    unaff_s6 = unaff_s6 + 9;
    bVar1 = unaff_s5 == 0;
    iVar6 = unaff_s5;
    unaff_s5 = unaff_s5 + -1;
    if (bVar1) {
      _DAT_800bf544 = (uint *)unaff_s3;
      return unaff_s6;
    }
  } while( true );
}

