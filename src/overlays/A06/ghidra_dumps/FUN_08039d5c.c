// FUN_08039d5c

/* WARNING: Control flow encountered bad instruction data */

int FUN_08039d5c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = func_0x00072ddc(0,3,2,0x44);
  if (iVar1 != 0) {
    *(undefined4 *)(iVar1 + 0x1c) = 0x8013275c;
    *(char *)(iVar1 + 3) = (char)param_2;
    if (param_2 == 0) {
      *(undefined2 *)(iVar1 + 0x2e) = 0x444a;
      *(undefined2 *)(iVar1 + 0x32) = 0xf87e;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (param_2 == 1) {
      *(undefined2 *)(iVar1 + 0x2e) = 0x46b5;
      *(undefined2 *)(iVar1 + 0x32) = 0xf83e;
      *(undefined2 *)(iVar1 + 0x36) = 0x2535;
    }
  }
  return iVar1;
}

