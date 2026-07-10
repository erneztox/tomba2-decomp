// FUN_00002c60

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00002c60(int param_1)

{
  int iVar1;
  
  iVar1 = _DAT_800bf860;
  if (*(char *)(param_1 + 0x78) == '\0') {
    if (*(short *)(param_1 + 0x36) < *(short *)(_DAT_800bf860 + 0x30)) {
      *(undefined1 *)(param_1 + 0x78) = 1;
      *(undefined1 *)(iVar1 + 4) = 2;
      func_0x00074590(0x37,0x16,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(_DAT_800bf860 + 4) == '\x03') {
      return 1;
    }
  }
  *(short *)(_DAT_800bf860 + 0x30) = *(short *)(_DAT_800bf860 + 0x30) + 0x20;
  return 0;
}

