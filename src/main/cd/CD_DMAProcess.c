/**
 * @brief CD DMA processor: manages DMA transfer queue
 * @note Original: func_80097A90 at 0x80097A90
 */
// CD_DMAProcess



void FUN_80097a90(void)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  puVar3 = DAT_800ac66c;
  iVar8 = DAT_800ac668;
  iVar7 = 0;
  puVar4 = DAT_800ac66c;
  if (-1 < DAT_800ac668) {
    do {
      iVar5 = iVar7 + 1;
      if ((*puVar4 & 0x80000000) == 0) {
LAB_80097b4c:
        puVar4 = puVar4 + 2;
        iVar7 = iVar7 + 1;
      }
      else {
        puVar2 = puVar3 + iVar5 * 2;
        while (uVar1 = *puVar2, puVar2 = puVar2 + 2, uVar1 == 0x2fffffff) {
          iVar5 = iVar5 + 1;
        }
        puVar2 = puVar3 + iVar5 * 2;
        if (((*puVar2 & 0x80000000) == 0) ||
           ((*puVar2 & 0xfffffff) != (*puVar4 & 0xfffffff) + puVar4->flags)) goto LAB_80097b4c;
        *puVar2 = 0x2fffffff;
        puVar4->flags = puVar4->flags + puVar2->flags;
      }
    } while (iVar7 <= iVar8);
  }
  iVar8 = DAT_800ac668;
  iVar7 = 0;
  puVar3 = DAT_800ac66c;
  if (-1 < DAT_800ac668) {
    do {
      if (puVar3->flags == 0) {
        *puVar3 = 0x2fffffff;
      }
      iVar7 = iVar7 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar7 <= iVar8);
  }
  puVar3 = DAT_800ac66c;
  iVar8 = 0;
  puVar4 = DAT_800ac66c;
  if (-1 < DAT_800ac668) {
    do {
      iVar7 = DAT_800ac668;
      if ((*puVar4 & 0x40000000) != 0) break;
      iVar5 = iVar8 + 1;
      if (iVar5 <= DAT_800ac668) {
        puVar2 = puVar3 + iVar5 * 2;
        do {
          uVar1 = *puVar2;
          if ((uVar1 & 0x40000000) != 0) break;
          uVar6 = *puVar4;
          if ((uVar1 & 0xfffffff) < (uVar6 & 0xfffffff)) {
            *puVar4 = uVar1;
            uVar1 = puVar4->flags;
            puVar4->flags = puVar2->flags;
            *puVar2 = uVar6;
            puVar2->flags = uVar1;
          }
          iVar5 = iVar5 + 1;
          puVar2 = puVar2 + 2;
        } while (iVar5 <= iVar7);
      }
      iVar8 = iVar8 + 1;
      puVar4 = puVar4 + 2;
    } while (iVar8 <= DAT_800ac668);
  }
  iVar8 = 0;
  puVar3 = DAT_800ac66c;
  if (-1 < DAT_800ac668) {
    do {
      if ((*puVar3 & 0x40000000) != 0) break;
      if (*puVar3 == 0x2fffffff) {
        puVar4 = DAT_800ac66c + DAT_800ac668 * 2;
        *puVar3 = *puVar4;
        DAT_800ac668 = iVar8;
        puVar3->flags = puVar4->flags;
        break;
      }
      iVar8 = iVar8 + 1;
      puVar3 = puVar3 + 2;
    } while (iVar8 <= DAT_800ac668);
  }
  puVar3 = DAT_800ac66c;
  iVar8 = DAT_800ac668 + -1;
  if (-1 < iVar8) {
    puVar4 = DAT_800ac66c + iVar8 * 2;
    do {
      if ((*puVar4 & 0x80000000) == 0) {
        return;
      }
      *puVar4 = *puVar4 & 0xfffffff | 0x40000000;
      iVar7 = DAT_800ac668 * 2;
      iVar5 = iVar8 + -1;
      DAT_800ac668 = iVar8;
      puVar4->flags = puVar4->flags + puVar3[iVar7 + 1];
      puVar4 = puVar4 + -2;
      iVar8 = iVar5;
    } while (-1 < iVar5);
  }
  return;
}
