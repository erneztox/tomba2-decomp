// FUN_80022190

void FUN_80022190(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  
  iVar8 = *(int *)(param_2 + 0x6c);
  uVar7 = 0;
  if (0 < *(short *)(param_2 + 0x6a)) {
    puVar6 = (ushort *)(iVar8 + 6);
    do {
      iVar2 = (uint)*(byte *)((int)puVar6 + -3) * 8;
      if ((*(uint *)(param_2 + 0x70) & 1 << (uVar7 & 0x1f)) != 0) {
        iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)puVar6[-1]) * 0x10000) >> 0x10;
        iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)puVar6[1]) * 0x10000) >> 0x10;
        uVar5 = FUN_80084080(iVar3 * iVar3 + iVar4 * iVar4);
        bVar1 = false;
        if ((int)(uVar5 & 0xffff) <=
            (int)((int)*(short *)(param_1 + 0x80) + (uint)(byte)(&DAT_800a29d0)[iVar2])) {
          bVar1 = (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*puVar6) +
                        (uint)*(ushort *)(param_1 + 0x84) + (uint)(byte)(&DAT_800a29d1)[iVar2] &
                       0xffff) <=
                  (int)((int)*(short *)(param_1 + 0x86) + (uint)(byte)(&DAT_800a29d1)[iVar2] * 2);
        }
        if (bVar1) {
          uVar7 = 1 << (uVar7 & 0x1f);
          *(uint *)(param_2 + 0x74) = *(uint *)(param_2 + 0x74) | uVar7;
          *(uint *)(param_2 + 0x70) = *(uint *)(param_2 + 0x70) & ~uVar7;
          FUN_8004d19c(param_2,iVar8,0);
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

