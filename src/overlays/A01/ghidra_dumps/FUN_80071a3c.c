// FUN_80071a3c

void FUN_80071a3c(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    FUN_80071768(param_1);
    if (*(char *)(param_1 + 1) != '\0') {
      FUN_800518fc(param_1);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      FUN_800716b4(param_1);
      if ((DAT_800bfae1 == '\0') || (DAT_800bf870 != '\x04')) {
        if ((DAT_800bfae6 != '\0') && (DAT_800bf870 == '\a')) {
          func_0x801178e4(param_1);
        }
      }
      else {
        func_0x8011b79c(param_1);
      }
    }
  }
  else if ((bVar1 != 2) && (bVar1 == 3)) {
    FUN_8007a624(param_1);
  }
  return;
}

