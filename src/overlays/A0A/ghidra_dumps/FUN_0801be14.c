// FUN_0801be14

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801be14(int param_1)

{
  short sVar1;
  uint uVar2;
  
  uVar2 = (uint)*(byte *)(param_1 + 3);
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(uVar2 * 6 + -0x7fee1398);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(uVar2 * 6 + -0x7fee1396);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(uVar2 * 6 + -0x7fee1394);
  func_0x0004766c(param_1);
  func_0x00048750(param_1);
  sVar1 = _DAT_1f8001a0;
  *(short *)(param_1 + 0x56) = _DAT_1f8001a0;
  if (*(char *)(param_1 + 3) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x56) = sVar1 + -0x200;
  return;
}

