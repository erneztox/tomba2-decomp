// FUN_0801279c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801279c(void)

{
  int iVar1;
  
  if (*(short *)(_DAT_1f800138 + 0x4c) == 0) {
    func_0x00074bc4();
    *(short *)(_DAT_1f800138 + 0x4c) = *(short *)(_DAT_1f800138 + 0x4c) + 1;
  }
  else if (*(short *)(_DAT_1f800138 + 0x4c) == 1) {
    *(undefined1 *)(_DAT_1f800138 + 0x69) = 0;
    *(undefined1 *)(_DAT_1f800138 + 0x6a) = 0;
    *(undefined1 *)(_DAT_1f800138 + 0x6b) = 0;
    iVar1 = _DAT_1f800138;
    *(undefined2 *)(_DAT_1f800138 + 0x4a) = 0;
    *(undefined2 *)(iVar1 + 0x4c) = 0;
    *(undefined2 *)(iVar1 + 0x4e) = 0;
    func_0x00052078(1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

