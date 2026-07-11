// FUN_08027ce0

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08027ce0(int param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    if (*(char *)(*(int *)(param_1 + 0x38) + 4) == '\x02') {
      DAT_800bf9d6 = 5;
      func_0x00074590(0x32,0,0);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x00041718(param_1,0x2d,4);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      halt_baddata();
    }
  }
  if (*(char *)(param_1 + 0x79) == '\x01') {
    func_0x00041718(param_1,*(undefined1 *)(param_1 + 0x7b),4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

