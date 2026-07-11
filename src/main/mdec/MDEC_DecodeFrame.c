/**
 * @brief MDEC frame decoder: processes full frame, dispatches blocks
 * @note Original: func_80088E88 at 0x80088E88
 */
// MDEC_DecodeFrame



void FUN_80088e88(int param_1)

{
  s32 bVar1;
  int iVar2;
  int iVar3;
  u8 *pbVar4;
  u8 *puVar5;
  u8 *pbVar6;
  u8 bVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  
  FUN_8009a340(param_1 + 0x57,6);
  if ((*(s16 *)(param_1 + 0xe6) == 0) || (*(int *)(param_1 + 0x28) == 0)) {
    if (((param_1->state - 4 < 2) || (param_1->state == 7)) &&
       ((*(s16 *)(param_1 + 0xe6) == 0 && (1 < *(u8 *)(param_1 + 0x34))))) {
      if ((((**(u8 **)(param_1 + 0x28) & 0xc0) == 0x40) &&
          (((*(u8 **)(param_1 + 0x28))[1] & 1) != 0)) && (DAT_800abe80 + 10 < 0x3d)) {
        *(u8 *)(param_1 + 0x58) = 1;
        *(u8 *)(param_1 + 0x57) = 1;
        DAT_800abe80 = DAT_800abe80 + 10;
      }
    }
    else if (param_1->state == '\x03') {
      *(u8 *)(param_1 + 0x57) = 1;
    }
    else if (*(s16 *)(param_1 + 0xe6) == 0) {
      iVar10 = 5;
      param_1 = param_1 + 5;
      do {
        *(u8 *)(param_1 + 0x57) = 1;
        iVar10 = iVar10 + -1;
        param_1 = param_1 + -1;
      } while (-1 < iVar10);
    }
  }
  else {
    uVar9 = 6;
    if (*(u8 *)(param_1 + 0x34) < 7) {
      uVar9 = (uint)*(u8 *)(param_1 + 0x34);
    }
    uVar8 = 0;
    if (param_1->state != '\0') {
      iVar10 = 0;
      do {
        bVar1 = false;
        bVar7 = 1;
        if (*(s8*)(iVar10 + *(int *)(param_1 + 4) + 2) != '\0') {
          bVar7 = 0xff;
        }
        pbVar6 = (u8 *)(param_1 + 0x5d);
        pbVar4 = *(u8 **)(param_1 + 0x28);
        iVar2 = 0;
        if (uVar9 != 0) {
          do {
            if ((*pbVar6 == uVar8) && ((*pbVar4 & bVar7) != 0)) {
              bVar1 = true;
              break;
            }
            pbVar6 = pbVar6 + 1;
            iVar2 = iVar2 + 1;
            pbVar4 = pbVar4 + 1;
          } while (iVar2 < (int)uVar9);
        }
        if ((bVar1) &&
           (iVar2 = DAT_800abe80 + (uint)*(u8 *)(iVar10 + *(int *)(param_1 + 4) + 3), iVar2 < 0x3d
           )) {
          pbVar4 = (u8 *)(param_1 + 0x5d);
          puVar5 = (u8 *)(param_1 + 0x57);
          iVar3 = 0;
          DAT_800abe80 = iVar2;
          if (uVar9 != 0) {
            do {
              bVar7 = *pbVar4;
              pbVar4 = pbVar4 + 1;
              if (bVar7 == uVar8) {
                *puVar5 = 1;
              }
              iVar3 = iVar3 + 1;
              puVar5 = puVar5 + 1;
            } while (iVar3 < (int)uVar9);
          }
        }
        uVar8 = uVar8 + 1;
        iVar10 = iVar10 + 5;
      } while ((int)uVar8 < (int)(uint)param_1->state);
    }
  }
  return;
}
