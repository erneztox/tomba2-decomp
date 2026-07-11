// FUN_0801b6b8

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801b6b8(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x154) + 0x20;
  *(short *)(param_1 + 0x154) = sVar1;
  *(byte *)(param_1 + 0x177) = *(byte *)(param_1 + 0x177) | 1;
  if (0x200 < sVar1) {
    *(undefined2 *)(param_1 + 0x154) = 0x200;
  }
  *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + *(short *)(param_1 + 0x154);
  if (*(char *)(param_1 + 0x15c) == *(char *)(param_1 + 0x147)) {
    *(short *)(param_1 + 0x14e) = *(short *)(param_1 + 0x14e) - *(short *)(param_1 + 0x154);
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x140) + 0x800;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x14e) = *(short *)(param_1 + 0x14e) + *(short *)(param_1 + 0x154);
  if (0x400 < *(short *)(param_1 + 0x42)) {
    func_0x00074590(0x1b,0,0);
    DAT_800bf840 = 0x88;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  return;
}

