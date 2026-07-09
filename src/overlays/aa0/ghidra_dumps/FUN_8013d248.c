// FUN_8013d248

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_8013d248(int param_1,short param_2)

{
  if (*(char *)(param_1 + 7) == '\0') {
                    /* WARNING: Subroutine does not return */
    *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfffb;
    FUN_801402b8(param_1,(int)param_2,8);
  }
  if (*(byte *)(param_1 + 7) < 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) - 1;
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
  FUN_801406e4();
  return 0;
}

