// FUN_08025600

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08025600(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x5e);
  if (bVar1 == 1) {
    func_0x0011da24(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 5) == '\0') {
        if (DAT_800bf917 == 1) {
          *(undefined1 *)(param_1 + 5) = 1;
          func_0x000313a0(0x510,param_1 + 0x2c,0xffffffe0,param_1 + 0x54);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (*(char *)(param_1 + 5) != '\x01') {
          *(undefined1 *)(param_1 + 1) = 0;
          halt_baddata();
        }
        if (1 < DAT_800bf917) {
          *(undefined1 *)(param_1 + 0x5e) = 1;
          *(undefined1 *)(param_1 + 5) = 0;
        }
        if ((_DAT_1f80017c & 0xf) == 0) {
          func_0x00074590(0xd,0xffffffe3,0);
        }
      }
      *(undefined1 *)(param_1 + 1) = 0;
    }
  }
  else if (bVar1 == 2) {
    func_0x0011dce4(param_1);
    func_0x000735f4(param_1,0x6b);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

