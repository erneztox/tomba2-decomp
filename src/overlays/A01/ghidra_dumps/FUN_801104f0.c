// FUN_801104f0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801104f0(int param_1)

{
  undefined1 uVar1;
  bool bVar2;
  short sVar3;
  short extraout_var;
  short extraout_var_00;
  int iVar4;
  int in_v1;
  uint uVar5;
  int unaff_s0;
  int unaff_s1;
  int unaff_s2;
  
  if (in_v1 < 2) {
    if (in_v1 != 0) {
LAB_80119544:
      *(int *)(param_1 + 0x34) = *(short *)(unaff_s0 + 0x6a) * 0x10000 + 0x100;
      *(undefined1 *)(unaff_s0 + 0x5e) = 1;
      FUN_80122508();
      return;
    }
    *(undefined1 *)(unaff_s1 + 7) = 0;
    *(char *)(unaff_s1 + 6) = *(char *)(unaff_s1 + 6) + '\x01';
    param_1 = unaff_s1;
    sVar3 = FUN_80118f90();
    if (sVar3 != 0) {
      *(undefined1 *)(unaff_s1 + 7) = 0;
      *(char *)(unaff_s1 + 6) = *(char *)(unaff_s1 + 6) + '\x01';
      goto LAB_80119544;
    }
  }
  else {
    param_1 = unaff_s1;
    if (in_v1 != 2) goto LAB_80119544;
    sVar3 = FUN_80118f90();
    if (sVar3 != 0) {
      unaff_s0 = -0x7feca3c8;
      uVar5 = func_0x8009a450();
      uVar1 = *(undefined1 *)((uVar5 & 0xf) + 0x80135c38);
      *(undefined1 *)(unaff_s1 + 6) = 0;
      *(undefined1 *)(unaff_s1 + 5) = uVar1;
      goto LAB_80119544;
    }
  }
  if (*(char *)(unaff_s1 + 3) == '\x03') {
    FUN_80119570();
    return;
  }
  if (*(char *)(unaff_s1 + 3) != '\x04') {
    FUN_80119570();
    return;
  }
  if (*(short *)(unaff_s1 + 0x32) < -0x1280) {
    uVar5 = (uint)*(byte *)(unaff_s1 + 3);
    iVar4 = 4;
    if ((uVar5 == 3) || (iVar4 = -0x7ff40000, uVar5 != 4)) {
                    /* WARNING: Could not recover jumptable at 0x801195f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar5 * 4 + iVar4 + -0x64c0))();
      return;
    }
    sVar3 = -7000;
    if (DAT_800bf8bf == -1) {
      sVar3 = -0x1280;
    }
    if ((*(short *)(unaff_s1 + 0x32) < sVar3) && (*(char *)(unaff_s1 + 5) != '\x02')) {
      *(undefined1 *)(unaff_s1 + 5) = 2;
      *(undefined1 *)(unaff_s1 + 6) = 0;
      FUN_80119614();
      return;
    }
  }
  else if (*(char *)(unaff_s1 + 5) != '\x01') {
    *(undefined1 *)(unaff_s1 + 5) = 1;
    FUN_80119608();
    return;
  }
  if (*(char *)(unaff_s1 + 5) != '\x04') {
    if (DAT_800e7fe4 == '\x01') {
      if (*(char *)(unaff_s1 + 3) == '\x03') {
        bVar2 = true;
        if (0x382 < _DAT_1f800160 - 0x42cd) {
          DAT_00000007 = 0;
          goto LAB_8011969c;
        }
      }
      else {
        if (*(char *)(unaff_s1 + 3) != '\x04') {
LAB_8011969c:
          FUN_801208b4();
          FUN_801226ac();
          return;
        }
        bVar2 = true;
        if (0x1a8f < _DAT_1f800164) goto LAB_801106f8;
      }
    }
    else {
LAB_801106f8:
      bVar2 = false;
    }
    if (bVar2) {
      sVar3 = *(short *)(unaff_s2 + 0x12) + 1;
      *(short *)(unaff_s2 + 0x12) = sVar3;
      if (sVar3 < 0x3d) goto LAB_80110750;
      iVar4 = func_0x8009a450();
      if (iVar4 < 0xa000) {
        *(undefined1 *)(unaff_s1 + 5) = 4;
        *(undefined1 *)(unaff_s1 + 6) = 0;
      }
    }
  }
  *(undefined2 *)(unaff_s2 + 0x12) = 0;
LAB_80110750:
  iVar4 = func_0x80083f50((int)*(short *)(unaff_s2 + 0x10));
  *(short *)(unaff_s1 + 0x32) = *(short *)(unaff_s1 + 0x32) + (short)(iVar4 >> 9);
  iVar4 = func_0x8009a450();
  iVar4 = (uint)*(ushort *)(unaff_s2 + 0x10) + (iVar4 >> 0xb);
  *(short *)(unaff_s2 + 0x10) = (short)iVar4;
  func_0x80083f50(iVar4 * 0x10000 >> 0x10);
  *(short *)(unaff_s1 + 0x2e) = *(short *)(unaff_s2 + 0x14) + extraout_var;
  func_0x80083e80((int)*(short *)(unaff_s2 + 0x10));
  *(short *)(unaff_s1 + 0x36) = *(short *)(unaff_s2 + 0x16) + extraout_var_00;
  return;
}

