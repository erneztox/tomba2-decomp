// FUN_80109c1c

/* WARNING: Removing unreachable block (ram,0x8011bdc0) */
/* WARNING: Removing unreachable block (ram,0x8011bdd0) */
/* WARNING: Removing unreachable block (ram,0x8011bdf0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80109c1c(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  int iVar3;
  
  func_0x80041098();
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    FUN_80112cb8(param_1);
    if (param_1[0x71] != '\0') {
      return;
    }
    *(undefined2 *)(param_1 + 0x36) = 0x2340;
    param_1[0x70] = 1;
    param_1[6] = param_1[6] + '\x01';
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_80112cb8(param_1);
      if (param_1[0x71] != -1) {
        return;
      }
      func_0x80040d68(param_1,0x80135628);
      param_1[0x70] = 1;
      param_1[6] = param_1[6] + '\x01';
    }
  }
  else if (bVar1 == 2) {
    if (param_1[0x71] != -1) {
      return;
    }
    *param_1 = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[3] = param_1[3] & 0x7f;
    *(undefined2 *)(param_1 + 0x68) = *(undefined2 *)(param_1 + 0x60);
    return;
  }
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x5e] = 0;
  FUN_8011aff0(param_1);
  iVar3 = func_0x800778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) *
                                       0x10000) >> 0x10);
  if (iVar3 != 0) {
    func_0x800517f8(param_1);
  }
  if (param_1[0x5e] == '\0') {
    uVar2 = 0xa0;
    if (param_1[3] == '\x01') {
      FUN_80124efc();
      return;
    }
  }
  else {
    uVar2 = 0x78;
    if (param_1[0x5e] != '\x01') {
      FUN_8011bd98();
      return;
    }
  }
  *(undefined2 *)(param_1 + 0x84) = uVar2;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  *(undefined2 *)(param_1 + 0x86) = *(undefined2 *)(param_1 + 0x84);
  thunk_FUN_80124efc();
  return;
}

