// FUN_0801948c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801948c(int param_1)

{
  int iVar1;
  
  func_0x00115334();
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  _DAT_1f8001c6 = 0;
  if (DAT_800bf871 == '\x03') {
    DAT_800bf816 = 1;
    _DAT_1f800184 = 0;
    _DAT_1f8001c6 = 0;
    func_0x00054198(param_1);
    *(undefined1 *)(param_1 + 4) = 4;
    *(undefined2 *)(param_1 + 0x56) = 0x400;
    iVar1 = _DAT_1f800138;
    *(undefined2 *)(_DAT_1f800138 + 0x4c) = 4;
    *(undefined2 *)(iVar1 + 0x4e) = 3;
    DAT_800bf818 = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x56) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x172) = 0;
  func_0x00054d14(param_1,2,0);
  iVar1 = func_0x0003315c(param_1);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8010f954;
  }
  return;
}

