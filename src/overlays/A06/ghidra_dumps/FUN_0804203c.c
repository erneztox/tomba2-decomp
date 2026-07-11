// FUN_0804203c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0804203c(int param_1)

{
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_e;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    local_16 = 0x34e8;
    local_12 = 0xe1ba;
    local_e = 30000;
    func_0x00070f00(param_1,1,auStack_18);
    func_0x000708b4(3);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return *(char *)(_DAT_1f800214 + 3) == '\0';
}

