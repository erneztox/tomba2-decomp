// FUN_8011c378

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8011c378(undefined1 *param_1,int param_2,undefined1 param_3)

{
  int in_v0;
  
  if (in_v0 == 0) {
    if (param_2 != 2) {
      return;
    }
    if (DAT_800e7ffb == '\0') {
      if (((DAT_800bf80d == '\0') && (DAT_800bf839 == '\0')) && (param_1[0x29] != '\0')) {
        if (DAT_800e7ea9 == '\0') {
          return;
        }
        param_1[5] = 3;
        *param_1 = 2;
        DAT_800bf839 = '\x03';
        DAT_800bf80f = 2;
        DAT_1f800137 = 2;
        _DAT_800bf83a = *(ushort *)(param_1 + 0x7a) | 0x100;
      }
      return;
    }
  }
  else if (param_2 == 0) {
    if ((ushort)DAT_800bf871 != *(ushort *)(param_1 + 0x7c)) {
      param_1[5] = 2;
      return;
    }
    param_1[5] = param_3;
    return;
  }
  return;
}

