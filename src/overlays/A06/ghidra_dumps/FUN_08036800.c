// FUN_08036800

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08036800(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x00077c40(param_1,0x8014d97c,3);
      func_0x00074590(0x95,0,0);
    }
  }
  else if (bVar1 == 2) {
    if (0x492f < _DAT_1f800160) {
      return;
    }
    _DAT_800e7eae = 0x4930;
    _DAT_800e7eb6 = 0x27b0;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

