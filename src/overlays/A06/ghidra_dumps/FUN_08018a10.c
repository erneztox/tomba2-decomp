// FUN_08018a10

/* WARNING: Control flow encountered bad instruction data */

void FUN_08018a10(int param_1,byte *param_2)

{
  int iVar1;
  
  if ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) {
    if ((*(ushort *)(param_1 + 0x17e) & 0x8000) != 0) {
      func_0x0001f054();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = func_0x0001f40c(param_1,param_2,1);
    if (-1 < iVar1) {
      if ((*param_2 & 8) != 0) {
        param_2[0x2b] = 1;
        *param_2 = 4;
        halt_baddata();
      }
      if ((*(char *)(param_1 + 0x144) == '\x01') && (iVar1 < 2)) {
        func_0x0001fdb4(param_2,7,0x10,0x20);
        *(undefined1 *)(param_1 + 0x14a) = 2;
        func_0x00042354(1,3);
      }
    }
  }
  return;
}

