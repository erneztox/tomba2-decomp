// FUN_0802a8c4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802a8c4(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    *(undefined1 *)(param_1 + 0x78) = 1;
    _DAT_800e8078 = 0;
    DAT_800e806c = 1;
    _DAT_800e8076 = 0xc0;
    _DAT_800e8074 = (undefined2)((_DAT_801003f8 * 0x23) / 10);
    func_0x0006cba8(param_1 + 0x2c);
  }
  else if (*(char *)(param_1 + 0x78) == '\x01') {
    uVar1 = 1;
    if (DAT_800e806e != '\x03') {
      if ((*(ushort *)(param_1 + 0x40) & 0xf) == 0) {
        func_0x00074590(0x38,0,0);
      }
      uVar1 = 0;
      *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
    }
    return uVar1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

