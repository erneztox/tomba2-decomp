// FUN_80111f00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80111f00(int param_1)

{
  int iVar1;
  
  iVar1 = (int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)_DAT_1f800162) * 0x10000) >> 0x10;
  if (499 < iVar1) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0x12);
      return;
    }
    FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0x2b);
    return;
  }
  if (399 < iVar1) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0x11);
      return;
    }
    FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0x2a);
    return;
  }
  if (299 < iVar1) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0x10);
      return;
    }
    FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0x29);
    return;
  }
  if (199 < iVar1) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0xf);
      return;
    }
    FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0x28);
    return;
  }
  if (iVar1 < 100) {
    if (*(char *)(param_1 + 0x5e) == '\0') {
      FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0xd);
      return;
    }
    func_0x80051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x26);
    return;
  }
  if (*(char *)(param_1 + 0x5e) == '\0') {
    FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0xe);
    return;
  }
  FUN_8011afd8(*(undefined4 *)(param_1 + 0xc0),0xc,0x27);
  return;
}

