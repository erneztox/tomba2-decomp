// FUN_08027bac

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08027bac(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 6) = 2;
    func_0x00040cdc(param_1,0x80140f7c,0x8013e454);
    *(undefined1 *)(param_1 + 0x70) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(char *)(param_1 + 0x2b) == '\x03') {
        *(undefined1 *)(param_1 + 6) = 1;
        func_0x00042354(1,1);
      }
      else {
        if (DAT_800bf9c5 != '\x02') {
          return 0;
        }
        *(undefined2 *)(param_1 + 0x56) = 0xfe00;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        func_0x00077c40(param_1,0x80140f7c,0x19);
      }
    }
  }
  else if (bVar1 == 2) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 6) = 0;
    func_0x00042310();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

