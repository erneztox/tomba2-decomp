// FUN_0801edd0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801edd0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    if (DAT_800bfa15 == '\x04') {
      bVar1 = func_0x0009a450();
      DAT_800bf9bc = bVar1 & 3;
      iVar2 = func_0x0009a450();
      DAT_800bf9eb = 0;
      DAT_800bf9bc = DAT_800bf9bc | ((char)iVar2 + (char)(iVar2 / 3) * -3) * '\x10';
      func_0x00040d68(param_1,0x8013d37c);
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x70) == -1) {
      if (*(char *)(param_1 + 7) == '\0') {
        if (DAT_800bf92a != '\0') {
          func_0x00040d68(param_1,0x8013d424);
          *(undefined1 *)(param_1 + 0x70) = 2;
          *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 7) != '\x01') {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined1 *)(param_1 + 6) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
    func_0x0004190c(param_1);
    func_0x00041098(param_1);
  }
  return;
}

