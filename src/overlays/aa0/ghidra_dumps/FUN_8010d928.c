// FUN_8010d928

/* WARNING: Removing unreachable block (ram,0x8010da84) */
/* WARNING: Removing unreachable block (ram,0x8010da94) */
/* WARNING: Removing unreachable block (ram,0x8010da9c) */

void FUN_8010d928(undefined1 *param_1,undefined1 param_2)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  undefined1 uVar4;
  short sVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined8 uVar9;
  
  iVar8 = *(int *)(param_1 + 0x10);
  bVar1 = param_1[6];
  iVar6 = *(int *)(iVar8 + 0xe4);
  if (bVar1 == 1) {
    *(undefined2 *)(param_1 + 0x88) = 0x39e0;
    *(undefined2 *)(param_1 + 0x8a) = 0xf2a4;
    *(undefined2 *)(param_1 + 0x40) = 0x5f;
    iVar6 = (int)*(short *)(param_1 + 0x40);
    if (iVar6 == 0) {
      trap(0x1c00);
    }
    if ((iVar6 == -1) &&
       ((int)*(short *)(param_1 + 0x8a) - (int)*(short *)(param_1 + 0x32) == -0x80000000)) {
      trap(0x1800);
    }
    iVar8 = (int)*(short *)(param_1 + 0x40);
    if (iVar8 == 0) {
      trap(0x1c00);
    }
    if ((iVar8 == -1) && (0x20e0 - *(short *)(param_1 + 0x36) == -0x80000000)) {
      trap(0x1800);
    }
    param_1[0x29] = 0;
    param_1[6] = 2;
    *(undefined2 *)(param_1 + 0x8c) = 0x20e0;
    *(undefined2 *)(param_1 + 0x4a) = 0xd000;
    *(short *)(param_1 + 0x4e) =
         (short)(((int)*(short *)(param_1 + 0x88) - (int)*(short *)(param_1 + 0x2e)) / 0x5f);
    *(short *)(param_1 + 0x50) =
         (short)(((int)*(short *)(param_1 + 0x8a) - (int)*(short *)(param_1 + 0x32)) / iVar6);
    *(short *)(param_1 + 0x52) = (short)((0x20e0 - *(short *)(param_1 + 0x36)) / iVar8);
LAB_8010db54:
    iVar6 = func_0x8007778c(param_1);
    if (iVar6 != 0) {
      func_0x80051844(param_1);
    }
    if ((param_1[0x29] == '\0') && (*(short *)(param_1 + 0x40) != 0)) {
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + -1;
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + *(short *)(param_1 + 0x4e);
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + *(short *)(param_1 + 0x52);
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x50);
      if (*(short *)(param_1 + 0x40) == 0x3c) {
        *param_1 = 1;
      }
      sVar5 = *(short *)(param_1 + 0x4a);
      *(short *)(param_1 + 0x4a) = sVar5 + 0x100;
      if (0x3000 < (short)(sVar5 + 0x100)) {
        *(undefined2 *)(param_1 + 0x4a) = 0x3000;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x40;
      func_0x8006cba8(param_1 + 0x2c);
      param_1[0x29] = 0;
      FUN_80116cac();
      return;
    }
    *(undefined2 *)(param_1 + 0x40) = 0xf;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    param_1[6] = param_1[6] + '\x01';
    puVar7 = param_1;
    uVar9 = func_0x8004766c();
    iVar6 = (int)uVar9 - (int)((ulonglong)uVar9 >> 0x20);
    if (puVar7 != (undefined1 *)0x0) {
      *param_1 = 2;
    }
    if ((int)*(short *)(param_1 + 0x58) * (iVar6 * 0x10000 >> 0x10) < 1) {
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x42) = 1;
      FUN_8011fbbc();
      return;
    }
    *(short *)(param_1 + 0x58) = (short)iVar6;
    FUN_80120498(param_1,2);
    sVar5 = *(short *)(param_1 + 0x40);
    *(ushort *)(param_1 + 0x40) = sVar5 - 1U;
    if (-1 < (int)((uint)(ushort)(sVar5 - 1U) << 0x10)) {
      return;
    }
    if (param_1[7] != '\0') {
      param_1[4] = 3;
      FUN_8011fc68();
      return;
    }
    param_2 = 2;
LAB_80116c68:
    param_1[5] = param_2;
    param_1[6] = 4;
    *(undefined2 *)(param_1 + 0x40) = 0x1e;
    sVar5 = FUN_8011fd94();
    if (*(short *)(param_1 + 0x56) != sVar5) {
      param_1[7] = 1;
      *(undefined2 *)(param_1 + 0x58) = 1;
      *(undefined2 *)(param_1 + 0x52) = 0;
      return;
    }
    uVar4 = 3;
LAB_80116ca8:
    param_1[7] = uVar4;
    FUN_801215b4();
    *(undefined2 *)(param_1 + 0x44) = 0x800;
    FUN_8011fc68();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      param_1[0x29] = 0;
      FUN_80116cac();
      return;
    }
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar6 + 0x2c);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar6 + 0x30);
    uVar3 = *(undefined2 *)(iVar6 + 0x34);
    *(undefined2 *)(param_1 + 0xba) = 0x2000;
    *(undefined2 *)(param_1 + 0xb8) = 0x1800;
    *(undefined2 *)(param_1 + 0xbc) = 0x1800;
    *(undefined2 *)(param_1 + 0x36) = uVar3;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x38) = 0x1000;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3a) = 0x1000;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0x3c) = 0x1000;
    func_0x80051844(param_1);
    cVar2 = *(char *)(iVar8 + 1);
    param_1[1] = cVar2;
    if (cVar2 != '\0') {
      func_0x80077efc(param_1);
    }
    if (1 < *(byte *)(iVar8 + 4)) {
      DAT_800bf9e5 = 4;
      param_1[6] = param_1[6] + '\x01';
      func_0x80042354(1,1);
      func_0x8006e1c0(8);
      func_0x8006cba8(param_1 + 0x2c);
      uVar4 = 8;
      DAT_800bf841 = 1;
      DAT_800bf809 = 1;
      goto LAB_80116ca8;
    }
    goto LAB_8010dd0c;
  }
  if (bVar1 == 2) goto LAB_8010db54;
  if (bVar1 != 3) {
    param_1[0x29] = 0;
    FUN_80116cac();
    return;
  }
  iVar6 = func_0x8007778c(param_1);
  if (iVar6 != 0) {
    func_0x80051844(param_1);
    if (param_1[0x29] == '\0') {
      sVar5 = *(short *)(param_1 + 0x4a);
      *(short *)(param_1 + 0x4a) = sVar5 + 0x100;
      if (0x2000 < (short)(sVar5 + 0x100)) {
        *(undefined2 *)(param_1 + 0x4a) = 0x2000;
      }
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      func_0x8004766c(param_1);
      goto LAB_80116c68;
    }
    *(undefined2 *)(param_1 + 0x4a) = 0;
  }
  sVar5 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar5 + -1;
  if (sVar5 == 1) {
    param_1[0x5e] = 1;
    param_1[6] = 0;
    DAT_800bf841 = 0;
    DAT_800bf809 = 0;
    func_0x80042310();
    func_0x8006e1e4();
  }
LAB_8010dd0c:
  param_1[0x29] = 0;
  return;
}

