// OPN_MoveInterpolate (OPN_MoveInterpolate) - Movement interpolation: interpolates entity to target in 20 frames with gravity

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x00002660) */
/* WARNING: Removing unreachable block (ram,0x00002670) */
/* WARNING: Removing unreachable block (ram,0x00002678) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void OPN_MoveInterpolate(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  bVar1 = *(byte *)(param_1 + 5);
  iVar9 = *(int *)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        *(undefined1 *)(param_1 + 5) = 3;
        iVar8 = (int)_DAT_800e7eae;
        iVar7 = (int)_DAT_800e7eb2;
        iVar6 = (int)_DAT_800e7eb6;
        *(undefined2 *)(param_1 + 0x40) = 0x14;
        iVar4 = (int)*(short *)(param_1 + 0x40);
        iVar7 = (iVar7 - *(short *)(param_1 + 0x32)) * 0x100;
        if (iVar4 == 0) {
          trap(0x1c00);
        }
        if ((iVar4 == -1) && (iVar7 == -0x80000000)) {
          trap(0x1800);
        }
        iVar5 = (int)*(short *)(param_1 + 0x40);
        iVar6 = (iVar6 - *(short *)(param_1 + 0x36)) * 0x100;
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && (iVar6 == -0x80000000)) {
          trap(0x1800);
        }
        *(undefined2 *)(param_1 + 0x50) = 0xf100;
        *(undefined2 *)(param_1 + 0x52) = 0x180;
        *(short *)(param_1 + 0x48) = (short)(((iVar8 - *(short *)(param_1 + 0x2e)) * 0x100) / 0x14);
        *(short *)(param_1 + 0x4a) = (short)(iVar7 / iVar4);
        *(short *)(param_1 + 0x4c) = (short)(iVar6 / iVar5);
      }
      else if (bVar1 != 3) {
        halt_baddata();
      }
      sVar2 = *(short *)(param_1 + 0x50);
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * 0x100;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * 0x100;
      sVar3 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + *(short *)(param_1 + 0x52);
      *(short *)(param_1 + 0x40) = sVar3 + -1;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
      if (sVar3 == 1) {
        *(undefined1 *)(param_1 + 4) = 3;
        func_0x0004ed94(0x2c,0x42);
        func_0x0004b0d8(param_1);
      }
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar9 + 1);
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
    func_0x00077b38(param_1,0x8014c808,0x10);
    *(undefined2 *)(param_1 + 0x60) = 0x20;
    *(undefined2 *)(param_1 + 0x62) = 0xffd0;
    *(undefined2 *)(param_1 + 100) = 0;
    *(char *)(param_1 + 8) = *(char *)(param_1 + 8) + -8;
  }
  func_0x0004bd64(param_1,1,*(undefined4 *)(iVar9 + 0xe4),0,param_1 + 0x60);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

