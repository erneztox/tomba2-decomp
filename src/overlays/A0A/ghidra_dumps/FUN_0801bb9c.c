// FUN_0801bb9c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801bb9c(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x00114784(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      func_0x001149d8(param_1);
      uVar3 = (uint)*(byte *)(param_1 + 3);
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(uVar3 * 6 + -0x7fee1398);
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(uVar3 * 6 + -0x7fee1396);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(uVar3 * 6 + -0x7fee1394);
      func_0x0004766c(param_1);
      func_0x00048750(param_1);
      sVar2 = _DAT_1f8001a0;
      *(short *)(param_1 + 0x56) = _DAT_1f8001a0;
      if (*(char *)(param_1 + 3) == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0x56) = sVar2 + -0x200;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0xaf;
      func_0x000517f8();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

