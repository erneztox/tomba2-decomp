// FUN_80115868

/* WARNING: Removing unreachable block (ram,0x8011e9e8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80115868(int param_1)

{
  byte bVar1;
  char cVar2;
  
  func_0x8004190c();
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    func_0x80041098(param_1);
    if (*(char *)(param_1 + 0x71) != -1) {
      return;
    }
    func_0x80040d68(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fec9a7c));
    *(undefined1 *)(param_1 + 0x70) = 1;
    *(undefined1 *)(param_1 + 6) = *(undefined1 *)(*(byte *)(param_1 + 0x5e) + 0x801365ac);
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (0x4010 < _DAT_1f800164) {
        return;
      }
      cVar2 = *(char *)(param_1 + 0x5e);
      *(undefined1 *)(param_1 + 0x70) = 1;
      if (cVar2 == '\x05') {
        *(undefined1 *)(param_1 + 6) = 2;
      }
      else {
        if ((cVar2 == '\x01') || (cVar2 == '\x04')) {
          func_0x80042354(1,3);
        }
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
    }
  }
  else if (bVar1 == 2) {
    func_0x80041098(param_1);
    if (*(char *)(param_1 + 0x71) != -1) {
      return;
    }
    if (DAT_800bf909 == -1) {
      *(undefined1 *)(param_1 + 0x5e) = 6;
      FUN_8011e980();
      return;
    }
    if (DAT_800bf907 == -1) {
      if (DAT_800bf908 != -1) {
        *(undefined1 *)(param_1 + 0x5e) = 5;
        FUN_8011e980();
        return;
      }
      *(undefined1 *)(param_1 + 0x5e) = 3;
      FUN_8011e980();
      return;
    }
    *(undefined1 *)(param_1 + 0x5e) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
    DAT_800bf9fb = 2;
  }
  else if (bVar1 == 3) {
    func_0x80041098(param_1);
    if (*(char *)(param_1 + 0x71) == -1) {
      func_0x80040d68(param_1,*(undefined4 *)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fec9a68));
      *(undefined1 *)(param_1 + 0x70) = 1;
      *(undefined1 *)(param_1 + 6) = 2;
    }
    return;
  }
  *(undefined1 *)(param_1 + 0xbf) = 0;
  return;
}

