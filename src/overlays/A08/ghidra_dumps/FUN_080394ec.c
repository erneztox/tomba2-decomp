// FUN_080394ec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080394ec(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    func_0x00054dac(&DAT_800e7e80,2,4);
    _DAT_1f800190 = 0;
    _DAT_1f800192 = 0;
    DAT_800e7e85 = 0x1f;
    DAT_800e7e86 = 0;
    *(undefined2 *)(param_1 + 0x72) = 0;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((DAT_800bfa3f & 0x80) == 0) {
    *(undefined2 *)(param_1 + 0x72) = 0;
  }
  else {
    sVar1 = *(short *)(param_1 + 0x72) + 1;
    *(short *)(param_1 + 0x72) = sVar1;
    if (0xf < sVar1) {
      halt_baddata();
    }
  }
  return 0;
}

