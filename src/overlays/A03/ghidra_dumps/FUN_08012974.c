// FUN_08012974

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012974(void)

{
  short sVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  int iVar17;
  
  iVar13 = _DAT_1f800208;
  func_0x00109870(0x800e7e80);
  sVar7 = *(short *)(_DAT_800e7f44 + 0x2c);
  iVar17 = *(int *)(iVar13 + 0x60);
  sVar8 = *(short *)(_DAT_800e7f44 + 0x30);
  sVar9 = *(short *)(_DAT_800e7f44 + 0x34);
  sVar1 = *(short *)(iVar17 + 0x14);
  sVar2 = *(short *)(iVar13 + 0x6a);
  sVar3 = *(short *)(iVar17 + 0x1a);
  sVar4 = *(short *)(iVar13 + 0x6a);
  sVar5 = *(short *)(iVar17 + 0x20);
  sVar6 = *(short *)(iVar13 + 0x6a);
  if (_DAT_8011bb50 != iVar17) {
    _DAT_8011bb5c = 0;
  }
  if (((int)_DAT_800e7ffe & 0x8200U) == 0) {
    _DAT_8011bb5c = _DAT_8011bb5c + 1;
    uVar16 = 0;
    if (_DAT_8011bb5c < 3) {
      piVar15 = (int *)&DAT_8011ba48;
      do {
        iVar14 = *piVar15;
        if (iVar14 != 0) {
          if (piVar15[1] * 0x30 + -0x7feee4b8 == iVar17) {
            iVar10 = (int)*(short *)(iVar14 + 0x2c) -
                     (int)(short)(sVar7 - (short)((int)sVar1 * (int)sVar2 >> 0xc));
            iVar11 = (int)*(short *)(iVar14 + 0x2e) -
                     (int)(short)(sVar8 - (short)((int)sVar3 * (int)sVar4 >> 0xc));
            iVar14 = (int)*(short *)(iVar14 + 0x30) -
                     (int)(short)(sVar9 - (short)((int)sVar5 * (int)sVar6 >> 0xc));
            uVar12 = func_0x00077fb0(iVar10 * iVar10 + iVar11 * iVar11 + iVar14 * iVar14);
            uVar12 = uVar12 & 0xffff;
            if ((*(byte *)(iVar13 + 0x72) & 1) == 0) {
              uVar12 = (int)uVar12 >> 2;
            }
            if (uVar12 < 0x96) {
              if (piVar15[7] == 0) {
                iVar13 = func_0x000310f4(0x1f,0);
                if (iVar13 != 0) {
                  *(undefined2 *)(iVar13 + 0x2c) = *(undefined2 *)(*piVar15 + 0x2c);
                  *(undefined2 *)(iVar13 + 0x2e) = *(undefined2 *)(*piVar15 + 0x2e);
                  *(undefined2 *)(iVar13 + 0x30) = *(undefined2 *)(*piVar15 + 0x30);
                }
                piVar15[7] = 1;
                *(undefined1 *)(*piVar15 + 4) = 2;
                func_0x0004ed0c(0x36);
                DAT_800e7eab = DAT_800e7eab | (byte)(1 << (uVar16 & 0x1f));
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              goto LAB_08012bc0;
            }
          }
          piVar15[7] = 0;
        }
LAB_08012bc0:
        uVar16 = uVar16 + 1;
        piVar15 = piVar15 + 8;
      } while ((int)uVar16 < 5);
    }
  }
  _DAT_8011bb50 = *(undefined4 *)(iVar13 + 0x60);
  _DAT_8011bb54 = (int)*(short *)(iVar13 + 0x6e);
  _DAT_8011bb58 = (int)*(short *)(iVar13 + 0x76);
  return;
}

