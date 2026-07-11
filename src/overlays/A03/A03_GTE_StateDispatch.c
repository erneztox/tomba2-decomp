// A03_GTE_StateDispatch - GTE state dispatcher with sin/cos matrix ops

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A03_GTE_StateDispatch(void)

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
  sVar7 = _DAT_800e7f44->pos_x;
  iVar17 = *(int *)(iVar13 + 0x60);
  sVar8 = *(short *)(_DAT_800e7f44 + 0x30);
  sVar9 = *(short *)(_DAT_800e7f44 + 0x34);
  sVar1 = *(short *)(iVar17 + 0x14);
  sVar2 = iVar13->type_flags;
  sVar3 = *(short *)(iVar17 + 0x1a);
  sVar4 = iVar13->type_flags;
  sVar5 = *(short *)(iVar17 + 0x20);
  sVar6 = iVar13->type_flags;
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
          if (piVar15->flags * 0x30 + -0x7feee4b8 == iVar17) {
            iVar10 = (int)iVar14->pos_x -
                     (int)(short)(sVar7 - (short)((int)sVar1 * (int)sVar2 >> 0xc));
            iVar11 = (int)iVar14->pos_y -
                     (int)(short)(sVar8 - (short)((int)sVar3 * (int)sVar4 >> 0xc));
            iVar14 = (int)*(short *)(iVar14 + 0x30) -
                     (int)(short)(sVar9 - (short)((int)sVar5 * (int)sVar6 >> 0xc));
            uVar12 = Math_Sqrt(iVar10 * iVar10 + iVar11 * iVar11 + iVar14 * iVar14);
            uVar12 = uVar12 & 0xffff;
            if ((*(u8 *)(iVar13 + 0x72) & 1) == 0) {
              uVar12 = (int)uVar12 >> 2;
            }
            if (uVar12 < 0x96) {
              if (piVar15->sub_action == 0) {
                iVar13 = Entity_SpawnNoPos(0x1f,0);
                if (iVar13 != 0) {
                  iVar13->pos_x = *(s16 *)(*piVar15 + 0x2c);
                  iVar13->pos_y = *(s16 *)(*piVar15 + 0x2e);
                  *(s16 *)(iVar13 + 0x30) = *(s16 *)(*piVar15 + 0x30);
                }
                piVar15->sub_action = 1;
                *(u8 *)(*piVar15 + 4) = 2;
                UI_DrawItemIcon(0x36);
                DAT_800e7eab = DAT_800e7eab | (u8)(1 << (uVar16 & 0x1f));
                    /* WARNING: Bad instruction - Truncating control flow here */
                halt_baddata();
              }
              goto LAB_08012bc0;
            }
          }
          piVar15->sub_action = 0;
        }
LAB_08012bc0:
        uVar16 = uVar16 + 1;
        piVar15 = piVar15 + 8;
      } while ((int)uVar16 < 5);
    }
  }
  _DAT_8011bb50 = *(s32 *)(iVar13 + 0x60);
  _DAT_8011bb54 = (int)*(short *)(iVar13 + 0x6e);
  _DAT_8011bb58 = (int)*(short *)(iVar13 + 0x76);
  return;
}

