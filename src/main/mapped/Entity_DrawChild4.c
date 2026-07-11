/**
 * @brief Entity child drawer variant 4: reads sprite from param2[0x6C]
 * @note Original: func_80022330 at 0x80022330
 */
// Entity_DrawChild4



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80022330(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_2 + 0x6c);
  uVar7 = 0;
  if (0 < *(short *)(param_2 + 0x6a)) {
    puVar6 = (ushort *)(iVar8 + 6);
    do {
      iVar5 = (uint)*(byte *)((int)puVar6 + -3) * 8;
      if ((*(uint *)(param_2 + 0x70) & 1 << (uVar7 & 0x1f)) != 0) {
        iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)puVar6[-1]) * 0x10000) >> 0x10;
        iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)puVar6[1]) * 0x10000) >> 0x10;
        uVar4 = FUN_80084080(iVar2 * iVar2 + iVar3 * iVar3);
        bVar1 = false;
        if ((int)(uVar4 & 0xffff) <=
            (int)((int)*(short *)(param_1 + 0x80) + (uint)(byte)(&DAT_800a29d0)[iVar5])) {
          bVar1 = (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*puVar6) +
                        (uint)*(ushort *)(param_1 + 0x84) + (uint)(byte)(&DAT_800a29d1)[iVar5] &
                       0xffff) <=
                  (int)((int)*(short *)(param_1 + 0x86) + (uint)(byte)(&DAT_800a29d1)[iVar5] * 2);
        }
        if (bVar1) {
          uVar7 = 1 << (uVar7 & 0x1f);
          *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) | uVar7;
          *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & ~uVar7;
          iVar8 = FUN_8004d19c(param_2,iVar8);
          if (((_DAT_800e7ffe & 0x200) == 0) && (*(int *)(param_1 + 0x10) == 0)) {
            *(int *)(param_1 + 0x10) = iVar8;
            *(undefined1 *)(param_1 + 0x2b) = 2;
            *(undefined2 *)(iVar8 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
            *(undefined2 *)(iVar8 + 0x32) = *(undefined2 *)(param_1 + 0x32);
            *(undefined2 *)(iVar8 + 0x36) = *(undefined2 *)(param_1 + 0x36);
          }
          *(undefined1 *)(param_1 + 0x2b) = 2;
          *(undefined1 *)(iVar8 + 0x2b) = 2;
          *(byte *)(iVar8 + 0x46) = *(byte *)(param_1 + 0x46) & 1;
          FUN_80074590(0x2f,0,0);
          FUN_80031470(2,param_1 + 0x2c,*(undefined1 *)(param_1 + 0x5e),param_1 + 0x68);
          return;
        }
      }
      uVar7 = uVar7 + 1;
      puVar6 = puVar6 + 8;
      iVar8 = iVar8 + 0x10;
    } while ((int)uVar7 < (int)*(short *)(param_2 + 0x6a));
  }
  return;
}
