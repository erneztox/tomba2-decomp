// FUN_0802ab28

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802ab28(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0xb) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x78) = 1;
    *(undefined2 *)(param_1 + 0x42) = 0x1e;
  }
  if ((_DAT_1f80017c & 1) != 0) {
    *(undefined1 *)(param_1 + 0xb) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0xb) = 1;
  sVar2 = *(short *)(param_1 + 0x42) + -1;
  *(short *)(param_1 + 0x42) = sVar2;
  if (sVar2 == -1) {
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(ushort *)(param_1 + 0x40) & 0xf) == 0) {
    func_0x00074590(0x38,0,0);
  }
  *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
  return 0;
}

