// FUN_08028f3c

/* WARNING: Control flow encountered bad instruction data */

void FUN_08028f3c(int param_1)

{
  byte bVar1;
  
  if (*(char *)(param_1 + 0x71) != -1) {
    if (*(char *)(param_1 + 0x71) == '\0') {
      *(undefined1 *)(param_1 + 0x70) = 1;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
    if (*(char *)(param_1 + 0x5e) == '\0') {
      if (*(char *)(param_1 + 6) != '\0') {
        return;
      }
      func_0x001221ec(param_1);
    }
    else if (*(char *)(param_1 + 0x5e) == '\x02') {
      if (*(char *)(param_1 + 6) == '\x01') {
        func_0x00122264(param_1);
      }
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *(byte *)(param_1 + 0x5e);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        DAT_800bfa1e = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (bVar1 == 2) {
        halt_baddata();
      }
      if (bVar1 == 3) goto LAB_08028fec;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_08028fec:
  func_0x00040d68(param_1,0x8012c278);
  *(undefined2 *)(param_1 + 0x80) = 0xaa;
  *(undefined2 *)(param_1 + 0x82) = 0x154;
  *(undefined1 *)(param_1 + 5) = 0;
  *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

