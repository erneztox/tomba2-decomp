// FUN_0801e430

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801e430(undefined1 *param_1)

{
  byte bVar1;
  undefined2 uVar2;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    func_0x000778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) *
                                 0x10000) >> 0x10);
  }
  else {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x80) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feda7c0);
      *(undefined2 *)(param_1 + 0x82) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feda7be);
      *(undefined2 *)(param_1 + 0x84) = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feda7bc);
      uVar2 = *(undefined2 *)((uint)(byte)param_1[3] * 8 + -0x7feda7ba);
      param_1[8] = 0;
      param_1[9] = 0;
      *param_1 = 1;
      param_1[0xb] = 0;
      param_1[0x2b] = 0;
      param_1[4] = param_1[4] + '\x01';
      *(undefined2 *)(param_1 + 0x86) = uVar2;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

