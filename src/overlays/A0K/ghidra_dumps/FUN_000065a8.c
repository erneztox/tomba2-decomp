// FUN_000065a8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000065a8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined2 *)(param_1 + 0x56) = 0xc00;
  *(undefined2 *)(param_1 + 0x140) = 0xc00;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x172) = 0;
  if (DAT_800bf871 < 4) {
    func_0x00109788(param_1);
    iVar1 = func_0x0003315c(param_1);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x1c) = 0x8010de18;
    }
    func_0x00054d14(param_1,2,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  DAT_1f800137 = 2;
  if (DAT_800bf871 == 4) {
    _DAT_1f800240 = 800;
    DAT_800bfa53 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_1f800240 = 0;
  DAT_800bfa53 = 2;
  *(undefined2 *)(param_1 + 0x15e) = 0x3c00;
  uVar2 = func_0x00112f34(param_1);
  *(undefined4 *)(param_1 + 0x10) = uVar2;
  *(undefined1 *)(param_1 + 5) = 2;
  *(undefined1 *)(param_1 + 6) = 0;
  *(undefined1 *)(param_1 + 7) = 0;
  _DAT_1f8001c6 = 0;
  func_0x00057dc0(param_1,0);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x46;
  return;
}

