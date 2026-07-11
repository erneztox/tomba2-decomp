// FUN_0803985c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803985c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,2,3,0x10);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x80132418;
    if (param_2 < 3) {
      *(undefined1 *)(iVar1 + 3) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(iVar1 + 3) = 5;
    *(char *)(iVar1 + 0x5e) = (char)param_2 + -3;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
  }
  return;
}

