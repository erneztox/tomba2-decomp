/**
 * @brief CD file opener: looks up file, opens for reading
 * @note Original: func_8008B8F0 at 0x8008B8F0
 */
// CD_FileOpen



#include "tomba.h"
s32 * FUN_8008b8f0(s32 *param_1,char *param_2)

{
  s8 cVar1;
  s32 bVar2;
  s8 cVar3;
  int iVar4;
  u8 *puVar5;
  int iVar6;
  s32 uVar7;
  s32 uVar8;
  s32 uVar9;
  char *pcVar10;
  s32 *puVar11;
  char *pcVar12;
  int iVar13;
  s8 local_40 [32];
  
  if (DAT_800ac2d8 != DAT_800abfd0) {
    iVar4 = FUN_8008bbe8();
    if (iVar4 == 0) {
      return (s32 *)0x0;
    }
    DAT_800ac2d8 = DAT_800abfd0;
  }
  if (*param_2 != '\\') {
    return (s32 *)0x0;
  }
  local_40->type = '\0';
  iVar4 = 1;
  iVar13 = 0;
  pcVar10 = param_2;
  do {
    cVar3 = *pcVar10;
    cVar1 = *pcVar10;
    pcVar12 = local_40;
    if (cVar3 != '\\') {
      do {
        bVar2 = iVar13 < 8;
        if (cVar1 == '\0') goto LAB_8008b9fc;
        pcVar10 = pcVar10 + 1;
        *pcVar12 = cVar1;
        cVar1 = *pcVar10;
        pcVar12 = pcVar12 + 1;
      } while (*pcVar10 != '\\');
      cVar3 = *pcVar10;
    }
    bVar2 = iVar13 < 8;
    if (cVar3 == '\0') goto LAB_8008b9fc;
    pcVar10 = pcVar10 + 1;
    *pcVar12 = '\0';
    iVar4 = FUN_8008beac(iVar4,local_40);
    if (iVar4 == -1) {
      local_40->type = '\0';
      break;
    }
    iVar13 = iVar13 + 1;
  } while (iVar13 < 8);
  bVar2 = iVar13 < 8;
LAB_8008b9fc:
  if (bVar2) {
    if (local_40->type == '\0') {
      if (DAT_800abfc4 < 1) {
        return (s32 *)0x0;
      }
      pcVar10 = s__s__dir_was_not_found_8001c39c;
    }
    else {
      *pcVar12 = '\0';
      iVar4 = FUN_8008bf50();
      if (iVar4 == 0) {
        if (0 < DAT_800abfc4) {
          FUN_8009a730(s_CdSearchFile__disc_error_8001c3b4);
          return (s32 *)0x0;
        }
        return (s32 *)0x0;
      }
      if (1 < DAT_800abfc4) {
        FUN_8009a730(s_CdSearchFile__searching__s____8001c3d0,local_40);
      }
      iVar13 = 0;
      puVar5 = &DAT_80102770;
      puVar11 = (s32 *)&DAT_80102768;
      iVar4 = 0;
      do {
        if ((&DAT_80102770)[iVar4] == '\0') break;
        iVar6 = FUN_8008bbc8(puVar5,local_40);
        if (iVar6 != 0) {
          if (1 < DAT_800abfc4) {
            FUN_8009a730(s__s__found_8001c3f0,local_40);
          }
          uVar7 = puVar11->flags;
          uVar8 = puVar11->kind;
          uVar9 = puVar11->sub_type;
          *param_1 = *puVar11;
          param_1->flags = uVar7;
          param_1->kind = uVar8;
          param_1->sub_type = uVar9;
          uVar7 = puVar11->behavior_state;
          param_1->state = puVar11->state;
          param_1->behavior_state = uVar7;
          return puVar11;
        }
        puVar11 = puVar11 + 6;
        puVar5 = puVar5 + 0x18;
        iVar13 = iVar13 + 1;
        iVar4 = iVar4 + 0x18;
      } while (iVar13 < 0x40);
      param_2 = local_40;
      if (DAT_800abfc4 < 1) {
        return (s32 *)0x0;
      }
      pcVar10 = s__s__not_found_8001c3fc;
    }
    FUN_8009a730(pcVar10,param_2);
  }
  else if (0 < DAT_800abfc4) {
    FUN_8009a730(s__s__path_level___d__error_8001c380,param_2,iVar13);
    return (s32 *)0x0;
  }
  return (s32 *)0x0;
}
