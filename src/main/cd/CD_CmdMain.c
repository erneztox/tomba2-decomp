/**
 * @brief CD command main: processes CD commands with retry
 * @note Original: func_80096590 at 0x80096590
 */
// CD_CmdMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

#include "tomba.h"
int FUN_80096590(uint *param_1,int param_2,code *param_3,undefined4 param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  int local_420 [256];
  
  iVar10 = 0x10;
  iVar2 = FUN_80099478();
  if (iVar2 == 1) {
    return -1;
  }
  FUN_80099450(1);
  iVar2 = (int)(short)param_2;
  if (iVar2 < 0x10) {
    iVar5 = 0;
    if (iVar2 == -1) {
      do {
        if (*(char *)(iVar5 + -0x7fefa2e8) == '\0') {
          *(undefined1 *)(iVar5 + -0x7fefa2e8) = 1;
          param_2 = iVar5;
          goto LAB_80096678;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x10);
      iVar5 = 0x10;
    }
    else {
      iVar5 = 0x100000;
      if (*(char *)(iVar2 + -0x7fefa2e8) == '\0') {
        *(undefined1 *)(iVar2 + -0x7fefa2e8) = 1;
LAB_80096678:
        _DAT_80105d70 = _DAT_80105d70 + 1;
        iVar5 = param_2 << 0x10;
        iVar10 = param_2;
      }
      iVar5 = iVar5 >> 0x10;
    }
    if (iVar5 < 0x10) {
      *(uint **)(&DAT_80105c50 + iVar5 * 4) = param_1;
      _DAT_80105cf0 = 0;
      puVar7 = param_1 + 8;
      if (*param_1 >> 8 == 0x564142) {
        _DAT_80105cda = 0x40;
        if (((*param_1 & 0xff) == 0x70) && (_DAT_80105cda = 0x40, 4 < (int)param_1->flags)) {
          _DAT_80105cda = 0x80;
        }
        uVar4 = (uint)_DAT_80105cda;
        if (uVar4 < *(ushort *)((int)param_1 + 0x12)) {
          *(undefined1 *)(((iVar10 << 0x10) >> 0x10) + -0x7fefa2e8) = 0;
        }
        else {
          *(uint **)(((iVar10 << 0x10) >> 0xe) + -0x7fefa3f0) = puVar7;
          iVar2 = 0;
          uVar9 = 0;
          puVar8 = puVar7;
          if (uVar4 != 0) {
            do {
              puVar8->kind = uVar9;
              if ((char)*puVar8 != '\0') {
                uVar9 = uVar9 + 1;
              }
              iVar2 = iVar2 + 1;
              puVar8 = puVar8 + 4;
            } while (iVar2 < (int)uVar4);
          }
          iVar5 = 0;
          iVar2 = 0;
          piVar6 = local_420;
          *(uint **)(((iVar10 << 0x10) >> 0xe) + -0x7fefa368) = puVar7 + uVar4 * 4;
          bVar1 = *(byte *)((int)param_1 + 0x16);
          puVar8 = puVar7 + uVar4 * 4 + (uint)*(ushort *)((int)param_1 + 0x12) * 0x80;
          do {
            if (iVar2 <= (int)(uint)bVar1) {
              iVar3 = (uint)(ushort)*puVar8 << 2;
              if (4 < (int)param_1->flags) {
                iVar3 = (uint)(ushort)*puVar8 << 3;
              }
              *piVar6 = iVar3;
              iVar5 = iVar5 + *piVar6;
            }
            puVar8 = (uint *)((int)puVar8 + 2);
            iVar2 = iVar2 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar2 < 0x100);
          uVar4 = iVar5 + 0x3fU & 0xffffffc0;
          iVar5 = (int)(short)iVar10;
          iVar2 = (*param_3)(uVar4,param_4,iVar5);
          if (iVar2 == -1) {
            return -1;
          }
          if (iVar2 + uVar4 < 0x80001) {
            *(int *)(iVar5 * 4 + -0x7fefa288) = iVar2;
            iVar5 = 0;
            uVar4 = 0;
            piVar6 = local_420;
            do {
              iVar5 = iVar5 + *piVar6;
              if ((uVar4 & 1) == 0) {
                *(short *)(puVar7 + ((int)uVar4 / 2) * 4 + 3) = (short)((uint)(iVar2 + iVar5) >> 3);
              }
              else {
                *(short *)((int)puVar7 + ((int)uVar4 / 2) * 0x10 + 0xe) =
                     (short)((uint)(iVar2 + iVar5) >> 3);
              }
              uVar4 = uVar4 + 1;
              piVar6 = piVar6 + 1;
            } while ((int)uVar4 <= (int)(uint)bVar1);
            iVar10 = (int)(short)iVar10;
            *(int *)(iVar10 * 4 + -0x7fefa2d0) = iVar5;
            *(undefined1 *)(iVar10 + -0x7fefa2e8) = 2;
            return iVar10;
          }
          *(undefined1 *)(iVar5 + -0x7fefa2e8) = 0;
        }
      }
      else {
        *(undefined1 *)(iVar5 + -0x7fefa2e8) = 0;
      }
      FUN_80099450(0);
      _DAT_80105d70 = _DAT_80105d70 + -1;
      return -1;
    }
  }
  FUN_80099450(0);
  return -1;
}
