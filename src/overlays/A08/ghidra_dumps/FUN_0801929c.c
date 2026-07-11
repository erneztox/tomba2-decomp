// FUN_0801929c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080193d4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801929c(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  
  _DAT_1f800248 = 0;
  func_0x0006f0e4();
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined2 *)(param_1 + 0x142) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  func_0x00054198(param_1);
  func_0x00055284(param_1);
  func_0x00055d5c(param_1);
  func_0x0003315c(param_1);
  iVar2 = _DAT_1f800138;
  if ((DAT_800bf871 != '\x03') && (DAT_800bf871 != '\x11')) {
    if ((DAT_800bf871 == '\f') || ((DAT_800bf871 == '\x10' || (DAT_800bf871 == '\x13')))) {
      DAT_800bf81f = *(char *)(param_1 + 0x147) << 4;
      *(undefined2 *)(_DAT_1f800138 + 0x4c) = 3;
      *(undefined2 *)(iVar2 + 0x4e) = 1;
      func_0x00054d14(param_1,2,0);
      func_0x0001cf2c();
      func_0x00113780();
      DAT_800bf818 = 2;
    }
    func_0x00054d14(param_1,2,0);
    return;
  }
  if ((DAT_800bf871 == '\x11') && (DAT_800bf873 != '\0')) {
    *(undefined2 *)(param_1 + 0x32) = 0xebf4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0x181) = 1;
  *(undefined1 *)(param_1 + 6) = 1;
  *(undefined1 *)(param_1 + 5) = 0x1d;
  *(undefined1 *)(param_1 + 7) = 2;
  *(undefined2 *)(param_1 + 0x50) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x16c) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  iVar2 = func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
  uVar1 = _DAT_1f8001a8;
  if ((iVar2 != 0) && (_DAT_1f8001a4 + -500 <= (int)_DAT_1f80019e)) {
    _DAT_1f80019e = _DAT_1f8001a4;
    *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
    *(undefined2 *)(param_1 + 0x16c) = uVar1;
    func_0x00049674(param_1);
    *(undefined2 *)(param_1 + 0x142) = _DAT_1f8001a2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

