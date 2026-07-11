// FUN_0803eeb8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0803eeb8(int param_1)

{
  if (*(short *)(param_1 + 0x72) == 0) {
    func_0x000440e4(&DAT_800e7e80,0xb9,4);
    _DAT_1f800184 = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_1f800184 = 0;
  return 1;
}

