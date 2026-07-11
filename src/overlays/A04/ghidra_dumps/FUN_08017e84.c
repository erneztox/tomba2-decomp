// FUN_08017e84

/* WARNING: Control flow encountered bad instruction data */

void FUN_08017e84(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x0010c8b4();
  if ((-1 < iVar1) && (1 < (DAT_800bfa0a & 0xf))) {
    if (iVar1 == 1) {
      *(undefined2 *)(param_1 + 0x142) = 0xfd00;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x142) = 0xff00;
    *(undefined1 *)(param_1 + 0x16a) = 10;
  }
  return;
}

