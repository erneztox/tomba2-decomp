// FUN_8013d14c

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_8013d14c(int param_1)

{
  if (*(char *)(param_1 + 7) == '\0') {
                    /* WARNING: Subroutine does not return */
    *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfffb;
    FUN_801402b8(param_1,0x1a,8);
  }
  if (*(char *)(param_1 + 7) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(short *)(*(int *)(param_1 + 0x38) + 4) != 0) {
    *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) ^ 1;
                    /* WARNING: Subroutine does not return */
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x800;
    FUN_801402b8(param_1,7,0);
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
  FUN_801406e4();
  return 0;
}

