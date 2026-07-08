
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8006585c(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = 1;
  }
  else if (*(char *)(param_1 + 6) != '\x01') goto LAB_800658a8;
  FUN_80076d68(param_1);
  DAT_800bf80e = 1;
LAB_800658a8:
  if (_DAT_1f800184 == 2) {
    FUN_80055d5c(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
  }
  else {
    FUN_80065478(param_1,0);
  }
  return;
}

