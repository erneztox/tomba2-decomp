// FUN_80055fbc

void FUN_80055fbc(int param_1,byte param_2)

{
  ushort uVar1;
  bool bVar2;
  char cVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  int iVar8;
  byte bVar9;
  int iVar10;
  short *psVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  if ((*(byte *)(param_1 + 0x174) & 0x30) == 0) {
    psVar11 = (short *)(&DAT_800a455c + (uint)*(byte *)(param_1 + 0x6d) * 8);
  }
  else {
    psVar11 = &DAT_800a4574;
  }
  sVar5 = *psVar11;
  uVar14 = (uint)(ushort)psVar11[1];
  uVar1 = psVar11[3];
  uVar12 = (uint)uVar1;
  uVar13 = (uint)(ushort)psVar11[2];
  uVar15 = uVar12 - 0x240;
  if ((*(ushort *)(param_1 + 0x17e) & 0x30) == 0) {
    bVar2 = false;
  }
  else {
    bVar2 = (*(ushort *)(param_1 + 0x6a) & 0xf00) == 0x500;
  }
  if ((DAT_800bf816 == '\0') || (DAT_800bf84d == '\0')) {
    if (*(char *)(param_1 + 0x165) == '\0') {
      cVar3 = *(char *)(param_1 + 0x14b);
      if (cVar3 == '\x01') {
        sVar6 = 0xc0f;
      }
      else if ((cVar3 < '\x02') || (sVar6 = 0x110f, cVar3 != '\x02')) {
        sVar6 = psVar11[2];
      }
    }
    else {
      sVar5 = (short)((uint)(sVar5 * 0x13) >> 4);
      uVar14 = psVar11[1] * 3;
      uVar13 = (uint)(psVar11[2] * 0x13) >> 4;
      sVar6 = (short)(psVar11[2] * 0x13 >> 4);
    }
    *(short *)(param_1 + 0x15e) = sVar6;
  }
  else {
    *(undefined2 *)(param_1 + 0x15e) = 0xc0f;
    uVar13 = 0xc0f;
  }
  if (bVar2) {
    uVar7 = (uint)sVar5;
    if ((int)uVar7 < 0) {
      uVar7 = uVar7 + 7;
    }
    sVar5 = (short)(uVar7 >> 3);
    uVar12 = (uint)(((int)(uVar12 << 0x10) >> 0x10) - ((int)(uVar12 << 0x10) >> 0x1f)) >> 1;
    uVar15 = (uint)(((int)(uVar15 * 0x10000) >> 0x10) - ((int)(uVar15 * 0x10000) >> 0x1f)) >> 1;
  }
  if (*(char *)(param_1 + 0x145) != '\0') {
    if ((*(ushort *)(param_1 + 0x17e) & 0x60) == 0) {
      uVar14 = (uVar14 & 0xffff) << 1;
    }
    else {
      uVar14 = (uVar14 & 0xffff) << 4;
    }
  }
  bVar9 = param_2 & 3;
  sVar4 = (short)uVar13;
  sVar6 = (short)uVar12;
  if (bVar9 != 1) {
    if (1 < bVar9) {
      if (3 < bVar9) {
        return;
      }
      if ((((param_2 & 8) == 0) || ((*(ushort *)(param_1 + 0x17e) & 0x60) == 0)) ||
         (*(char *)(param_1 + 0x145) == '\0')) {
        if (((*(byte *)(param_1 + 0x5f) & 3) != (param_2 & 3)) &&
           (*(char *)(param_1 + 0x145) != '\0')) {
          *(byte *)(param_1 + 0x149) = param_2 & 1;
          uVar12 = uVar15;
        }
      }
      else {
        uVar12 = (ushort)psVar11[3] + 0x80;
      }
      iVar8 = *(ushort *)(param_1 + 0x44) - uVar12;
      if (*(short *)(param_1 + 0x44) < 1) {
        iVar8 = *(ushort *)(param_1 + 0x44) + uVar12;
        *(short *)(param_1 + 0x44) = (short)iVar8;
        if (iVar8 * 0x10000 < 0) {
          return;
        }
        *(undefined2 *)(param_1 + 0x44) = 0;
      }
      else {
        *(short *)(param_1 + 0x44) = (short)iVar8;
        if (0 < iVar8 * 0x10000) {
          return;
        }
        *(undefined2 *)(param_1 + 0x44) = 0;
      }
      *(byte *)(param_1 + 0x149) = param_2 & 3;
      return;
    }
    if (bVar9 != 0) {
      return;
    }
    if ((*(byte *)(param_1 + 0x5f) != 0) && ((*(byte *)(param_1 + 0x5f) & 1) == 0)) {
      *(undefined1 *)(param_1 + 0x149) = 0;
      if ((*(byte *)(param_1 + 0x5f) & 8) == 0) {
        iVar8 = *(ushort *)(param_1 + 0x44) - uVar12;
        *(short *)(param_1 + 0x44) = (short)iVar8;
        if (-1 < iVar8 * 0x10000) {
          return;
        }
        *(undefined2 *)(param_1 + 0x44) = 0;
        return;
      }
      iVar8 = *(ushort *)(param_1 + 0x44) + uVar14;
      if (*(short *)(param_1 + 0x44) < 0xd01) {
        *(short *)(param_1 + 0x44) = (short)iVar8;
        if (iVar8 * 0x10000 >> 0x10 < 0xd01) {
          return;
        }
      }
      else {
        iVar8 = *(ushort *)(param_1 + 0x44) - uVar15;
        *(short *)(param_1 + 0x44) = (short)iVar8;
        if (0xcff < iVar8 * 0x10000 >> 0x10) {
          return;
        }
      }
      *(undefined2 *)(param_1 + 0x44) = 0xd00;
      return;
    }
    bVar9 = *(byte *)(param_1 + 0x149);
    if ((bVar9 & 2) == 0) {
      if (bVar9 == 5) {
        if (!bVar2) {
          iVar8 = *(ushort *)(param_1 + 0x44) + uVar12;
          *(short *)(param_1 + 0x44) = (short)iVar8;
          if (iVar8 * 0x10000 < 0) {
            return;
          }
          if (*(char *)(param_1 + 0x145) == '\0') {
            *(short *)(param_1 + 0x44) = sVar4;
          }
          goto LAB_80056290;
        }
        iVar8 = (int)(uVar13 << 0x10) >> 0x10;
        iVar10 = *(ushort *)(param_1 + 0x44) + uVar12;
        *(short *)(param_1 + 0x44) = (short)iVar10;
        if (iVar10 * 0x10000 >> 0x10 < -(iVar8 - ((int)(uVar13 << 0x10) >> 0x1f) >> 1)) {
          return;
        }
        if (*(char *)(param_1 + 0x145) != '\0') goto LAB_80056290;
        if (iVar8 < 0) {
          iVar8 = iVar8 + 3;
        }
        sVar5 = (short)(iVar8 >> 2);
      }
      else {
        iVar8 = (int)*(short *)(param_1 + 0x44);
        if (0 < iVar8) {
          if (iVar8 < sVar5) {
            *(short *)(param_1 + 0x44) = sVar5;
          }
          else {
            iVar10 = *(ushort *)(param_1 + 0x44) - uVar15;
            if (*(short *)(param_1 + 0x15e) < iVar8) {
              *(short *)(param_1 + 0x44) = (short)iVar10;
              if (iVar10 * 0x10000 >> 0x10 < (int)*(short *)(param_1 + 0x15e)) {
                *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_1 + 0x15e);
              }
            }
            else {
              iVar8 = *(ushort *)(param_1 + 0x44) + uVar14;
              *(short *)(param_1 + 0x44) = (short)iVar8;
              if ((int)*(short *)(param_1 + 0x15e) < iVar8 * 0x10000 >> 0x10) {
                *(undefined2 *)(param_1 + 0x44) = *(undefined2 *)(param_1 + 0x15e);
              }
            }
          }
          goto LAB_80056290;
        }
        if (*(char *)(param_1 + 0x145) == '\0') {
          if (bVar9 == 1) {
            iVar10 = sVar4 * 3;
            if (iVar10 < 0) {
              iVar10 = iVar10 + 3;
            }
            if (iVar8 <= -(iVar10 >> 2)) {
              iVar8 = (int)*(short *)(param_1 + 0x44);
              iVar10 = (int)(short)uVar1;
              if (iVar8 < 0) {
                iVar8 = -iVar8;
              }
              if (iVar10 == 0) {
                trap(0x1c00);
              }
              if ((iVar10 == -1) && (iVar8 == -0x80000000)) {
                trap(0x1800);
              }
              *(undefined1 *)(param_1 + 0x149) = 5;
              iVar8 = iVar8 / iVar10 + -7;
              *(short *)(param_1 + 0x96) = (short)iVar8;
              if (iVar8 * 0x10000 < 1) {
                *(undefined2 *)(param_1 + 0x96) = 1;
              }
              *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + sVar6;
              return;
            }
          }
          if (*(char *)(param_1 + 0x145) != '\0') goto LAB_80056498;
        }
        else {
LAB_80056498:
          if ((*(ushort *)(param_1 + 0x17e) & 0x60) != 0) {
            sVar5 = *(short *)(param_1 + 0x44) + (short)uVar14;
            goto LAB_8005628c;
          }
        }
        sVar5 = *(short *)(param_1 + 0x44) + sVar6;
      }
    }
    else {
      if ((bVar9 & 1) != 0) goto LAB_80056290;
      sVar5 = *(short *)(param_1 + 0x44) + sVar5;
    }
LAB_8005628c:
    *(short *)(param_1 + 0x44) = sVar5;
LAB_80056290:
    *(undefined1 *)(param_1 + 0x149) = 0;
    return;
  }
  if ((*(byte *)(param_1 + 0x5f) != 0) && ((*(byte *)(param_1 + 0x5f) & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x149) = 1;
    if ((*(byte *)(param_1 + 0x5f) & 8) == 0) {
      iVar8 = *(ushort *)(param_1 + 0x44) + uVar12;
      *(short *)(param_1 + 0x44) = (short)iVar8;
      if (iVar8 * 0x10000 < 1) {
        return;
      }
      *(undefined2 *)(param_1 + 0x44) = 0;
      return;
    }
    iVar8 = *(ushort *)(param_1 + 0x44) + uVar15;
    if (*(short *)(param_1 + 0x44) < -0xd00) {
      *(short *)(param_1 + 0x44) = (short)iVar8;
      if (iVar8 * 0x10000 >> 0x10 < -0xcff) {
        return;
      }
    }
    else {
      iVar8 = *(ushort *)(param_1 + 0x44) - uVar14;
      *(short *)(param_1 + 0x44) = (short)iVar8;
      if (-0xd01 < iVar8 * 0x10000 >> 0x10) {
        return;
      }
    }
    *(undefined2 *)(param_1 + 0x44) = 0xf300;
    return;
  }
  bVar9 = *(byte *)(param_1 + 0x149);
  if ((bVar9 & 2) == 0) {
    if (bVar9 == 4) {
      if (bVar2) {
        iVar8 = (int)(uVar13 << 0x10) >> 0x10;
        iVar10 = *(ushort *)(param_1 + 0x44) - uVar12;
        *(short *)(param_1 + 0x44) = (short)iVar10;
        if (iVar8 - ((int)(uVar13 << 0x10) >> 0x1f) >> 1 < iVar10 * 0x10000 >> 0x10) {
          return;
        }
        if (*(char *)(param_1 + 0x145) != '\0') goto LAB_8005659c;
        iVar8 = -iVar8;
        if (iVar8 < 0) {
          iVar8 = iVar8 + 3;
        }
        sVar6 = (short)(iVar8 >> 2);
      }
      else {
        iVar8 = *(ushort *)(param_1 + 0x44) - uVar12;
        *(short *)(param_1 + 0x44) = (short)iVar8;
        if (0 < iVar8 * 0x10000) {
          return;
        }
        if (*(char *)(param_1 + 0x145) != '\0') goto LAB_8005659c;
        sVar6 = -sVar4;
      }
    }
    else {
      iVar8 = (int)*(short *)(param_1 + 0x44);
      if (iVar8 < 0) {
        sVar6 = -sVar5;
        if (iVar8 <= -(int)sVar5) {
          if (iVar8 < -(int)*(short *)(param_1 + 0x15e)) {
            iVar8 = *(ushort *)(param_1 + 0x44) + uVar15;
            *(short *)(param_1 + 0x44) = (short)iVar8;
            iVar10 = iVar8 * 0x10000 >> 0x10;
            iVar8 = -(int)*(short *)(param_1 + 0x15e);
          }
          else {
            iVar8 = *(ushort *)(param_1 + 0x44) - uVar14;
            *(short *)(param_1 + 0x44) = (short)iVar8;
            iVar8 = iVar8 * 0x10000 >> 0x10;
            iVar10 = -(int)*(short *)(param_1 + 0x15e);
          }
          if (iVar8 < iVar10) {
            *(short *)(param_1 + 0x44) = -*(short *)(param_1 + 0x15e);
          }
          goto LAB_8005659c;
        }
      }
      else {
        if (*(char *)(param_1 + 0x145) == '\0') {
          cVar3 = '\0';
          if (bVar9 == 0) {
            iVar10 = sVar4 * 3;
            if (iVar10 < 0) {
              iVar10 = iVar10 + 3;
            }
            if (iVar10 >> 2 <= iVar8) {
              iVar8 = (int)*(short *)(param_1 + 0x44);
              iVar10 = (int)(short)uVar1;
              if (iVar8 < 0) {
                iVar8 = -iVar8;
              }
              if (iVar10 == 0) {
                trap(0x1c00);
              }
              if ((iVar10 == -1) && (iVar8 == -0x80000000)) {
                trap(0x1800);
              }
              *(undefined1 *)(param_1 + 0x149) = 4;
              iVar8 = iVar8 / iVar10 + -7;
              *(short *)(param_1 + 0x96) = (short)iVar8;
              if (iVar8 * 0x10000 < 1) {
                *(undefined2 *)(param_1 + 0x96) = 1;
              }
              *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) - sVar6;
              return;
            }
            cVar3 = *(char *)(param_1 + 0x145);
          }
          if (cVar3 != '\0') goto LAB_8005679c;
        }
        else {
LAB_8005679c:
          if ((*(ushort *)(param_1 + 0x17e) & 0x60) != 0) {
            sVar6 = *(short *)(param_1 + 0x44) - (short)uVar14;
            goto LAB_80056594;
          }
        }
        sVar6 = *(short *)(param_1 + 0x44) - sVar6;
      }
    }
  }
  else {
    if ((bVar9 & 1) == 0) goto LAB_8005659c;
    sVar6 = *(short *)(param_1 + 0x44) - sVar5;
  }
LAB_80056594:
  *(short *)(param_1 + 0x44) = sVar6;
LAB_8005659c:
  *(undefined1 *)(param_1 + 0x149) = 1;
  return;
}

