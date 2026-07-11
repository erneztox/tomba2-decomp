// FUN_0801c438

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0801c438(int param_1)

{
  if (*(char *)(param_1 + 6) == '\0') {
    *(undefined1 *)(param_1 + 6) = 1;
    _DAT_1f8000c0 = 0;
    _DAT_1f8000c2 = 0xf970;
    _DAT_1f8000c4 = 1000;
    func_0x00084470(0x1f800118,&DAT_1f8000c0,&DAT_1f8000a0);
    *(short *)(param_1 + 0x2e) = _DAT_1f8000de + _DAT_1f8000a0;
    *(short *)(param_1 + 0x32) = _DAT_1f8000e2 + _DAT_1f8000a4;
    *(short *)(param_1 + 0x36) = _DAT_1f8000e6 + _DAT_1f8000a8;
    func_0x00040cdc(param_1,0,*(undefined4 *)((DAT_800bf870 - 10) * 4 + -0x7fedba44));
    *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00041098(param_1);
  return *(char *)(param_1 + 0x70) == -1;
}

