// FUN_08021900

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08021900(int param_1)

{
  if (*(char *)(param_1 + 5) == '\0') {
    if (*(char *)(param_1 + 6) == '\0') {
      if (((int)(short)_DAT_800e7eea & 0xf000U) != 0x2000) {
        return;
      }
      if ((_DAT_800e7eea & 0x1f) != (ushort)*(byte *)(param_1 + 3)) {
        return;
      }
      if (DAT_800e7ffb != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x0004ed94(0x2b,0x41);
      func_0x00074590(0x19,0,0xf);
    }
    else if (*(char *)(param_1 + 6) == '\x01') {
      if (((int)(short)_DAT_800e7eea & 0xf000U) == 0x2000) {
        return;
      }
      *(undefined1 *)(param_1 + 6) = 0;
    }
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    func_0x00119da0();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

