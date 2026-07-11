/**
 * @brief Debug printf main: formatted output engine (340L)
 * @note Original: func_8009A770 at 0x8009A770
 */
// Debug_PrintfMain



#include "tomba.h"
undefined1 * FUN_8009a770(undefined4 param_1,byte *param_2,uint *param_3)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined1 **ppuVar14;
  char *pcVar15;
  uint uVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  byte *pbVar20;
  int iVar21;
  uint uVar22;
  undefined1 auStack_78 [16];
  undefined1 local_68 [38];
  undefined1 local_42->kind;
  undefined1 *local_40;
  undefined1 *local_3c;
  int local_38;
  undefined1 *local_34;
  char *local_30;
  
  if (param_2 == (byte *)0x0) {
    local_40 = (undefined1 *)0x0;
  }
  else {
    local_30 = s_0123456789abcdef_8001c740;
    local_40 = (undefined1 *)0x0;
LAB_8009a7c0:
    uVar9 = (uint)*param_2;
    if (uVar9 != 0) {
      uVar16 = 0;
      bVar4 = false;
      bVar7 = false;
      bVar6 = false;
      bVar5 = false;
      if (uVar9 == 0x25) {
        puVar17 = (undefined1 *)0xffffffff;
        iVar21 = 0;
        local_3c = (undefined1 *)0x0;
        local_38 = 0;
        local_34 = (undefined1 *)0x0;
        puVar13 = param_3;
        pbVar20 = param_2;
LAB_8009a7ec:
        param_2 = pbVar20 + 1;
        puVar12 = puVar13;
        switch(*param_2) {
        case 0:
          goto switchD_8009a814_caseD_0;
        default:
          uVar9 = (uint)(char)*param_2;
          local_40 = local_40 + 1;
          param_3 = puVar13;
          break;
        case 0x20:
          pbVar20 = param_2;
          if (iVar21 == 0) {
            iVar21 = 0x20;
          }
          goto LAB_8009a7ec;
        case 0x23:
          bVar7 = true;
          pbVar20 = param_2;
          goto LAB_8009a7ec;
        case 0x2a:
          puVar12 = puVar13 + 1;
          local_34 = (undefined1 *)*puVar13;
          puVar13 = puVar12;
          pbVar20 = param_2;
          if (-1 < (int)local_34) goto LAB_8009a7ec;
          local_34 = (undefined1 *)-(int)local_34;
        case 0x2d:
          uVar16 = uVar16 | 0x10;
          puVar13 = puVar12;
          pbVar20 = param_2;
          goto LAB_8009a7ec;
        case 0x2b:
          iVar21 = 0x2b;
          pbVar20 = param_2;
          goto LAB_8009a7ec;
        case 0x2e:
          pbVar20 = pbVar20 + 2;
          bVar1 = *pbVar20;
          if (bVar1 == 0x2a) {
            puVar17 = (undefined1 *)*puVar13;
            puVar13 = puVar13 + 1;
          }
          else {
            puVar17 = (undefined1 *)0x0;
            while ((bVar1 < 0x80 && (bVar2 = *pbVar20, ((&DAT_800ace75)[bVar2] & 4) != 0))) {
              pbVar20 = pbVar20 + 1;
              bVar1 = *pbVar20;
              puVar17 = (undefined1 *)((int)puVar17 * 10 + -0x30 + (uint)bVar2);
            }
            pbVar20 = pbVar20 + -1;
          }
          if ((int)puVar17 < 0) {
            puVar17 = (undefined1 *)0xffffffff;
          }
          goto LAB_8009a7ec;
        case 0x30:
          uVar16 = uVar16 | 0x20;
          pbVar20 = param_2;
          goto LAB_8009a7ec;
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
          local_34 = (undefined1 *)0x0;
          do {
            pbVar20 = param_2;
            param_2 = pbVar20 + 1;
            local_34 = (undefined1 *)((int)local_34 * 10 + -0x30 + (uint)*pbVar20);
            if (0x7f < *param_2) break;
          } while (((&DAT_800ace75)[*param_2] & 4) != 0);
          goto LAB_8009a7ec;
        case 0x44:
          bVar5 = true;
        case 100:
        case 0x69:
          if ((bVar5) || (!bVar6)) {
            uVar9 = *puVar13;
          }
          else {
            uVar9 = (uint)(short)*puVar13;
          }
          uVar10 = 10;
          if ((int)uVar9 < 0) {
            uVar9 = -uVar9;
            iVar21 = 0x2d;
          }
LAB_8009ab3c:
          local_3c = puVar17;
          if (-1 < (int)puVar17) {
            uVar16 = uVar16 & 0xffffffdf;
          }
          pcVar15 = (char *)&local_40;
          if ((uVar9 != 0) || (puVar19 = auStack_78 + -(int)pcVar15, puVar17 != (undefined1 *)0x0))
          goto LAB_8009ab64;
          goto LAB_8009abd8;
        case 0x4c:
          pbVar20 = param_2;
          goto LAB_8009a7ec;
        case 0x4f:
          bVar5 = true;
        case 0x6f:
          if ((bVar5) || (uVar10 = 8, !bVar6)) {
            uVar9 = *puVar13;
            uVar10 = 8;
LAB_8009ab38:
            iVar21 = 0;
          }
          else {
            uVar9 = (uint)(short)*puVar13;
            iVar21 = 0;
          }
          goto LAB_8009ab3c;
        case 0x55:
          bVar5 = true;
        case 0x75:
          if ((bVar5) || (uVar10 = 10, !bVar6)) {
            uVar9 = *puVar13;
            uVar10 = 10;
            goto LAB_8009ab38;
          }
          uVar9 = (uint)(short)*puVar13;
          iVar21 = 0;
          goto LAB_8009ab3c;
        case 0x58:
          local_30 = s_0123456789ABCDEF_8001c75c;
        case 0x78:
          if ((bVar5) || (!bVar6)) {
            uVar9 = *puVar13;
          }
          else {
            uVar9 = (uint)(short)*puVar13;
          }
          uVar10 = 0x10;
          iVar21 = 0;
          if ((bVar7) && (uVar9 != 0)) {
            bVar4 = true;
            goto LAB_8009ab38;
          }
          goto LAB_8009ab3c;
        case 99:
          pcVar15 = local_68;
          puVar19 = (undefined1 *)0x1;
          iVar21 = 0;
          local_68->type = (char)*puVar13;
          goto LAB_8009abdc;
        case 0x68:
          bVar6 = true;
          pbVar20 = param_2;
          goto LAB_8009a7ec;
        case 0x6c:
          goto switchD_8009a814_caseD_6c;
        case 0x6e:
          if ((bVar5) || (!bVar6)) {
            param_3 = puVar13 + 1;
            *(undefined1 **)*puVar13 = local_40;
          }
          else {
            param_3 = puVar13 + 1;
            *(undefined2 *)*puVar13 = local_40._0_2_;
          }
          goto LAB_8009adcc;
        case 0x70:
          uVar9 = *puVar13;
          uVar10 = 0x10;
          goto LAB_8009ab38;
        case 0x73:
          pcVar15 = (char *)*puVar13;
          if ((undefined1 **)pcVar15 == (undefined1 **)0x0) {
            pcVar15 = s__null__8001c754;
          }
          if ((int)puVar17 < 0) {
            puVar17 = (undefined1 *)FUN_8009a600(pcVar15);
          }
          else {
            iVar8 = FUN_8009ae10(pcVar15,0,puVar17);
            if ((iVar8 != 0) &&
               (iVar21 = 0, puVar19 = (undefined1 *)(iVar8 - (int)pcVar15),
               iVar8 - (int)pcVar15 <= (int)puVar17)) goto LAB_8009abdc;
          }
          iVar21 = 0;
          puVar19 = puVar17;
          goto LAB_8009abdc;
        }
      }
      FUN_8009ae60(uVar9);
      goto LAB_8009adcc;
    }
switchD_8009a814_caseD_0:
    FUN_8009af5c();
  }
  return local_40;
switchD_8009a814_caseD_6c:
  bVar5 = true;
  pbVar20 = param_2;
  goto LAB_8009a7ec;
LAB_8009ab64:
  do {
    ppuVar14 = (undefined1 **)pcVar15;
    uVar22 = uVar9 / uVar10;
    if (uVar10 == 0) {
      trap(0x1c00);
    }
    cVar3 = local_30[uVar9 % uVar10];
    pcVar15 = (char *)((int)ppuVar14 + -1);
    *pcVar15 = cVar3;
    uVar9 = uVar22;
  } while (uVar22 != 0);
  local_30 = s_0123456789abcdef_8001c740;
  if (bVar7) {
    puVar19 = auStack_78 + -(int)pcVar15;
    if ((uVar10 != 8) || (puVar19 = auStack_78 + -(int)pcVar15, cVar3 == '0')) goto LAB_8009abd8;
    pcVar15 = (char *)((int)ppuVar14 + -2);
    *pcVar15 = '0';
  }
  puVar19 = auStack_78 + -(int)pcVar15;
LAB_8009abd8:
  puVar19 = puVar19 + 0x38;
LAB_8009abdc:
  param_3 = puVar13 + 1;
  puVar17 = puVar19 + local_38;
  if (iVar21 != 0) {
    puVar17 = puVar17 + 1;
  }
  if (bVar4) {
    puVar17 = puVar17 + 2;
  }
  puVar18 = local_3c;
  if ((int)local_3c < (int)puVar17) {
    puVar18 = puVar17;
  }
  if (((uVar16 == 0) && (local_34 != (undefined1 *)0x0)) &&
     (puVar11 = puVar18, (int)puVar18 < (int)local_34)) {
    do {
      FUN_8009ae60(0x20);
      puVar11 = puVar11 + 1;
    } while ((int)puVar11 < (int)local_34);
  }
  if (iVar21 != 0) {
    FUN_8009ae60();
  }
  if (bVar4) {
    FUN_8009ae60(0x30);
    FUN_8009ae60((int)(char)*param_2);
  }
  if ((uVar16 == 0x20) && (puVar11 = puVar18, (int)puVar18 < (int)local_34)) {
    do {
      FUN_8009ae60(0x30);
      puVar11 = puVar11 + 1;
    } while ((int)puVar11 < (int)local_34);
  }
  if ((int)puVar17 < (int)local_3c) {
    do {
      FUN_8009ae60(0x30);
      puVar17 = puVar17 + 1;
    } while ((int)puVar17 < (int)local_3c);
  }
  while (puVar19 = puVar19 + -1, -1 < (int)puVar19) {
    cVar3 = *pcVar15;
    pcVar15 = (char *)((int)pcVar15 + 1);
    FUN_8009ae60((int)cVar3);
  }
  while (local_38 = local_38 + -1, -1 < local_38) {
    FUN_8009ae60(0x30);
  }
  if (((uVar16 & 0x10) != 0) && (puVar17 = puVar18, (int)puVar18 < (int)local_34)) {
    do {
      FUN_8009ae60(0x20);
      puVar17 = puVar17 + 1;
    } while ((int)puVar17 < (int)local_34);
  }
  puVar17 = local_34;
  if ((int)local_34 < (int)puVar18) {
    puVar17 = puVar18;
  }
  local_40 = local_40 + (int)puVar17;
LAB_8009adcc:
  param_2 = param_2 + 1;
  goto LAB_8009a7c0;
}
