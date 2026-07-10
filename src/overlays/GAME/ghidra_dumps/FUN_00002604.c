// FUN_00002604

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002604(void)

{
  short *psVar1;
  int iVar2;
  
  iVar2 = _DAT_1f800138;
  if (*(short *)(_DAT_1f800138 + 0x4c) == 0) {
    if (*(short *)(_DAT_1f800138 + 0x4e) == 0) {
      func_0x0005082c(0,0,0);
      iVar2 = _DAT_1f800138;
      psVar1 = (short *)(_DAT_1f800138 + 0x4e);
      *(undefined2 *)(_DAT_1f800138 + 0x50) = 0;
      *(short *)(iVar2 + 0x4e) = *psVar1 + 1;
    }
    else if (*(short *)(_DAT_1f800138 + 0x4e) == 1) {
      func_0x00109450();
    }
  }
  else if (*(short *)(_DAT_1f800138 + 0x4c) == 1) {
    psVar1 = (short *)(_DAT_1f800138 + 0x4a);
    *(undefined2 *)(_DAT_1f800138 + 0x4c) = 0;
    *(short *)(iVar2 + 0x4a) = *psVar1 + 1;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

