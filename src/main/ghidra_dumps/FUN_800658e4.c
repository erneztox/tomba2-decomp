
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800658e4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    DAT_800bf80e = 0;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) != '\x01') {
    return;
  }
  iVar1 = FUN_80076d68(param_1);
  if (iVar1 == 1) {
    DAT_800bf80e = 1;
  }
  if (_DAT_1f800184 != 1) {
    if (_DAT_1f800184 != 2) {
      FUN_80065478(param_1,1);
      return;
    }
    FUN_80055d5c(param_1);
  }
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  return;
}

