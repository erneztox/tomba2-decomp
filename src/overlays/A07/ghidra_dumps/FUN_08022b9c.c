// FUN_08022b9c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08022b9c(int param_1)

{
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined2 uStack_12;
  undefined2 local_e;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    local_16 = 0x63a;
    uStack_12 = 0xf510;
    local_e = 0x1b5c;
    func_0x00070f00(_DAT_1f800214,1,auStack_18);
    func_0x000708b4(3);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    if (*(char *)(_DAT_1f800214 + 3) != '\0') {
      return 0;
    }
    func_0x000708b4(1);
    *(undefined2 *)(param_1 + 0x4a) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

