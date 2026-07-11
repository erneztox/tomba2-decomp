// FUN_8013d3ac

/* WARNING: Control flow encountered bad instruction data */

int FUN_8013d3ac(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((DAT_800bf823 & 0x80) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar1 = func_0x80072ddc(param_1,3,2,3);
  if (iVar1 != 0) {
    DAT_800bf823 = DAT_800bf823 | 0x80;
    *(undefined1 *)(iVar1 + 3) = 0x80;
    *(undefined4 *)(iVar1 + 0x10) = param_1;
    *(undefined4 *)(iVar1 + 0x14) = param_2;
    *(undefined4 *)(iVar1 + 0x1c) = 0x80145230;
  }
  return iVar1;
}

