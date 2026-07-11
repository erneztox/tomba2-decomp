// FUN_80130624

void FUN_80130624(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  ushort uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar8 = *(int *)(param_1 + 0x10);
  if (bVar1 == 1) {
    if ((0x16 < DAT_1f800207) && (DAT_1f800207 != 0x22)) {
      if (*(char *)(iVar8 + 3) == '\0') {
        if (*(char *)(param_1 + 3) == '\0') {
          FUN_80139760(*(undefined2 *)(param_1 + 0x2e),
                       (uint)*(ushort *)(iVar8 + 0x4e) - (uint)*(ushort *)(iVar8 + 0x80));
          return;
        }
        FUN_80139778(*(undefined2 *)(param_1 + 0x2e),
                     (uint)*(ushort *)(iVar8 + 0x82) - (uint)*(ushort *)(iVar8 + 0x4e));
        return;
      }
      if (*(char *)(param_1 + 3) == '\0') {
        FUN_8013977c(*(undefined2 *)(param_1 + 0x36),
                     (uint)*(ushort *)(iVar8 + 0x52) - (uint)*(ushort *)(iVar8 + 0x84));
        return;
      }
      iVar7 = (int)(((uint)*(ushort *)(iVar8 + 0x86) - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000)
              >> 6;
      iVar5 = (int)(((uint)*(ushort *)(iVar8 + 0x86) - (uint)*(ushort *)(iVar8 + 0x52)) * 0x10000)
              >> 0x10;
      if (iVar5 == 0) {
        trap(0x1c00);
      }
      if ((iVar5 == -1) && (iVar7 == -0x80000000)) {
        trap(0x1800);
      }
      uVar3 = *(ushort *)(iVar8 + 0x50);
      uVar4 = *(ushort *)(iVar8 + 0x32);
      iVar5 = func_0x80083e80((int)(short)(iVar7 / iVar5));
      *(short *)(param_1 + 0x32) =
           *(short *)(iVar8 + 0x32) +
           (short)(((int)(((uint)uVar3 - (uint)uVar4) * 0x10000) >> 0x10) * iVar5 >> 0xc) + -0x60;
      iVar8 = func_0x8007778c(param_1);
      if (iVar8 != 0) {
        func_0x800517f8(param_1);
        FUN_80139820();
        return;
      }
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_80139820();
      return;
    }
    iVar5 = func_0x80051b70(param_1,0xc,0x16);
    if (iVar5 == 0) {
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      uVar6 = (uint)*(byte *)(param_1 + 3);
      *(undefined2 *)(param_1 + 0x2e) =
           *(undefined2 *)(((uint)*(byte *)(iVar8 + 3) * 2 + uVar6) * 8 + -0x7feb55c8);
      *(undefined2 *)(param_1 + 0x32) =
           *(undefined2 *)(((uint)*(byte *)(iVar8 + 3) * 2 + uVar6) * 8 + -0x7feb55c6);
      uVar2 = *(undefined2 *)(((uint)*(byte *)(iVar8 + 3) * 2 + uVar6) * 8 + -0x7feb55c4);
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x36) = uVar2;
      if (*(char *)(iVar8 + 3) == '\0') {
        *(undefined2 *)(param_1 + 0x56) = 0;
        FUN_801396d0();
        return;
      }
      *(undefined2 *)(param_1 + 0x56) = 0x400;
      *(undefined2 *)(param_1 + 0x58) = 0;
      FUN_80139820();
      return;
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      FUN_80139820();
      return;
    }
    func_0x8007a624(param_1);
  }
  return;
}

