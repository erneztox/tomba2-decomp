// FUN_0803bd50

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0803bd50(int param_1)

{
  int iVar1;
  
  func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
  if (_DAT_1f8001a4 + -500 <= (int)*(short *)(param_1 + 0x7a)) {
    *(short *)(param_1 + 0x7a) = _DAT_1f8001a4;
    return 0;
  }
  *(undefined1 *)(param_1 + 5) = 8;
  *(undefined1 *)(param_1 + 6) = 8;
  *(undefined2 *)(param_1 + 0x40) = 0;
  func_0x00077cfc(param_1,0x80149190,0x10,4);
  iVar1 = _DAT_80146e7c * 6;
  *(short *)(param_1 + 0x80) = *(short *)(iVar1 + -0x7feb9178);
  *(short *)(param_1 + 0x82) = *(short *)(iVar1 + -0x7feb9178) << 1;
  *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)(iVar1 + -0x7feb9176);
  *(undefined2 *)(param_1 + 0x86) = *(undefined2 *)(iVar1 + -0x7feb9174);
  if (*(short *)(param_1 + 0x6e) != -1) {
    *(undefined2 *)(param_1 + 0x6e) = 0xffff;
  }
  if ((-7000 < *(short *)(param_1 + 0x7a)) && (*(short *)(param_1 + 0x7a) < -0x157c)) {
    *(undefined1 *)(param_1 + 0xbe) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0xbe) = 1;
  if (*(char *)(param_1 + 0xbe) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x60);
  *(undefined2 *)(param_1 + 0x44) = 0x1000;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined1 *)(param_1 + 0xbf) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

