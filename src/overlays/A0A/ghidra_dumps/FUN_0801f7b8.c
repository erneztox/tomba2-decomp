// FUN_0801f7b8

/* WARNING: Control flow encountered bad instruction data */

undefined1 FUN_0801f7b8(int param_1)

{
  byte bVar1;
  
  *(undefined1 *)(param_1 + 0x29) = 0;
  if (*(char *)(param_1 + 0x46) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = func_0x000455c0(param_1,0,
                          (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10,
                          (int)((*(ushort *)(param_1 + 0x60) + 0x800) * 0x10000) >> 0x10);
  *(byte *)(param_1 + 0x29) = bVar1;
  if (bVar1 != 0) {
    *(byte *)(param_1 + 0x29) = bVar1 & 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(undefined1 *)(param_1 + 0x29);
}

