// FUN_08033f6c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08033f6c(undefined1 *param_1)

{
  ushort uVar1;
  uint uVar2;
  
  *param_1 = 1;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  param_1[0x5f] = 0;
  func_0x0012f690(param_1,0x3c,0x28,0x3c);
  uVar2 = (uint)(byte)param_1[3];
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(uVar2 * 6 + -0x7febe534);
  *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(uVar2 * 6 + -0x7febe532);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(uVar2 * 6 + -0x7febe530);
  func_0x0004766c(param_1);
  func_0x00049760(param_1);
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  param_1[0x5e] = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  uVar1 = _DAT_1f8001a0;
  if (param_1[2] == '\x1c') {
    param_1[0xbe] = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  param_1[0xbe] = 0;
  *(ushort *)(param_1 + 0x56) = uVar1 & 0xfff;
  *(undefined2 *)(param_1 + 0x6c) = *(undefined2 *)(param_1 + 0x56);
  if ((param_1[2] == '\x1c') && (DAT_800bf9c8 == '\0')) {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x13c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x70) = *(short *)(param_1 + 0x32) + -400;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  *(undefined2 *)(param_1 + 0x7e) = 0;
  return;
}

