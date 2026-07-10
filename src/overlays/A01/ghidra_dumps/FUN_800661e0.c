// FUN_800661e0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800661e0(int param_1)

{
  int iVar1;
  
  FUN_80076d68();
  if ((DAT_1f800236 == '\x05') && (*(char *)(param_1 + 6) == '\0')) {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
    iVar1 = FUN_8005444c(param_1);
    if (iVar1 != 0) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      _DAT_800e7efe = 1;
    }
  }
  return;
}

