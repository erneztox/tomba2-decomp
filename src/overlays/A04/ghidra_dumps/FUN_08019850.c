// FUN_08019850

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019850(int param_1)

{
  int iVar1;
  
  func_0x0006f0e4();
  *(undefined1 *)(param_1 + 1) = 1;
  if ((DAT_800bf816 != '\0') && (DAT_800bf817 == '\x01')) {
    DAT_1f800137 = 2;
    _DAT_1f800184 = 0;
    *(undefined1 *)(param_1 + 0x16b) = 8;
    iVar1 = _DAT_1f800138;
    _DAT_1f800210 = 0xc00;
    *(undefined2 *)(param_1 + 0x140) = 0xc00;
    *(undefined2 *)(param_1 + 0x142) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(iVar1 + 0x4c) = 3;
    *(undefined2 *)(iVar1 + 0x4e) = 1;
    DAT_800bf818 = 2;
    func_0x00054198(param_1);
    func_0x00055284(param_1);
    func_0x00054d14(param_1,2,0);
    *(undefined1 *)(param_1 + 4) = 4;
    *(undefined1 *)(param_1 + 5) = 0x21;
    *(undefined1 *)(param_1 + 6) = 0;
    DAT_1f80019c = 3;
    func_0x0001cf2c();
    func_0x00044bd4(0x80115eb0,0x1c,0,3);
    DAT_1f80019c = 0;
    func_0x00074f24(DAT_800bf870);
    halt_baddata();
  }
  func_0x00055d5c(param_1);
  *(undefined2 *)(param_1 + 0x142) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  func_0x00054198(param_1);
  func_0x00055284(param_1);
  func_0x00054d14(param_1,2,0);
  if (DAT_800bf871 == '\0') {
    DAT_1f800137 = 2;
    *(undefined1 *)(param_1 + 4) = 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((byte)(DAT_800bf871 - 7U) < 2) {
    DAT_1f800137 = 2;
    *(undefined1 *)(param_1 + 4) = 4;
    *(undefined1 *)(param_1 + 5) = 0x21;
    *(undefined1 *)(param_1 + 6) = 0;
  }
  func_0x0003315c(param_1);
  if (((int)(uint)_DAT_800bfe56 >> (DAT_800bf870 & 0x1f) & 1U) == 0) {
    *(undefined1 *)(param_1 + 0x17c) = 1;
  }
  return;
}

