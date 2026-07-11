// FUN_08035a50

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08035a50(int param_1)

{
  uint uVar1;
  
  if (((*(char *)(param_1 + 2) == '\x1c') &&
      (*(short *)(param_1 + 0x32) + 100 < _DAT_1f800162 + -0x82)) &&
     (uVar1 = func_0x0009a450(param_1,9), (uVar1 & 1) != 0)) {
    func_0x0012f41c(param_1,7,4);
    if (((int)_DAT_800e7ffe & 0x8200U) == 0) {
      *(undefined1 *)(param_1 + 0x5e) = 1;
    }
    *(undefined2 *)(param_1 + 0x52) = 0;
    func_0x0012f690(param_1,0xffffffff,0xffffffff,0x5a);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0012f41c(param_1,9,4);
  if (*(short *)(param_1 + 0x58) < *(short *)(param_1 + 0x6a)) {
    *(undefined2 *)(param_1 + 0x52) = 0x20;
  }
  else {
    if (*(short *)(param_1 + 0x58) <= *(short *)(param_1 + 0x6a)) {
      *(undefined2 *)(param_1 + 0x52) = 0;
      func_0x00074590(0x90,0,0);
      func_0x0012ec48(param_1);
      return;
    }
    *(undefined2 *)(param_1 + 0x52) = 0xffe0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

