// FUN_080224dc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080225c8) */
/* WARNING: Removing unreachable block (ram,0x080225d8) */
/* WARNING: Removing unreachable block (ram,0x080225e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080224dc(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar8 = _DAT_800bf860;
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * 0x100;
    sVar2 = *(short *)(param_1 + 0x40);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * 0x100;
    if (sVar2 != 1) {
      return;
    }
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 5) = 1;
      sVar2 = *(short *)(iVar8 + 0x2e);
      sVar3 = *(short *)(param_1 + 0x2e);
      sVar4 = *(short *)(iVar8 + 0x36);
      sVar5 = *(short *)(param_1 + 0x36);
      sVar6 = *(short *)(iVar8 + 0x32);
      sVar7 = *(short *)(param_1 + 0x32);
      *(ushort *)(param_1 + 0x4e) = (ushort)*(byte *)(param_1 + 3) * 0x560;
      iVar8 = func_0x00083e80((int)((uint)*(byte *)(param_1 + 3) * 0x5600000) >> 0x10);
      iVar9 = func_0x00083f50((int)*(short *)(param_1 + 0x4e));
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
      iVar11 = (int)*(short *)(param_1 + 0x40);
      iVar12 = ((int)sVar6 - (sVar7 + 0x104)) * 0x100;
      if (iVar11 == 0) {
        trap(0x1c00);
      }
      if ((iVar11 == -1) && (iVar12 == -0x80000000)) {
        trap(0x1800);
      }
      iVar10 = (int)*(short *)(param_1 + 0x40);
      iVar9 = (((int)sVar4 - (int)sVar5) + (iVar9 * 0xa0 >> 0xc)) * 0x100;
      if (iVar10 == 0) {
        trap(0x1c00);
      }
      if ((iVar10 == -1) && (iVar9 == -0x80000000)) {
        trap(0x1800);
      }
      *(short *)(param_1 + 0x48) =
           (short)(((((int)sVar2 - (int)sVar3) + (iVar8 * 0xa0 >> 0xc)) * 0x100) / 0x1e);
      *(short *)(param_1 + 0x4a) = (short)(iVar12 / iVar11);
      *(short *)(param_1 + 0x4c) = (short)(iVar9 / iVar10);
    }
  }
  else if (bVar1 == 2) {
    *(ushort *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x40U & 0xfff;
    *(short *)(param_1 + 0x32) = *(short *)(iVar8 + 0x32) + -0x104;
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar8 + 0x2e);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar8 + 0x36);
    iVar8 = func_0x00083e80((int)*(short *)(param_1 + 0x4e));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar8 * 0xa00;
    iVar8 = func_0x00083f50((int)*(short *)(param_1 + 0x4e));
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar8 * 0xa00;
    if (*(char *)(param_1 + 3) == '\0') {
      if (DAT_800bfa1c == 0) {
        return;
      }
      *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 3) == '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bfa1c < 3) {
      return;
    }
    *(undefined1 *)(param_1 + 4) = 2;
    func_0x00074590(0x8e,0,0);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

