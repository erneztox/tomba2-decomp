// FUN_080120dc

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080120dc(int param_1)

{
  short sVar1;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    DAT_800bf9b4 = 5;
    func_0x0006cbd0(&DAT_800e8008,0x8010c974);
    *(undefined2 *)(param_1 + 0x42) = 10;
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    sVar1 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar1 + -1;
    if (sVar1 != 1) {
      return 0;
    }
    DAT_800bf80f = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

