// FUN_80139318

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_80139318(int param_1)

{
  undefined4 uVar1;
  
  if (*(char *)(param_1 + 7) == '\0') {
                    /* WARNING: Subroutine does not return */
    *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfffb;
    FUN_801402b8(param_1,0x11,8);
  }
  if (*(char *)(param_1 + 7) != '\x01') {
    uVar1 = FUN_801423dc(param_1);
    return uVar1;
  }
  FUN_801406e4(param_1);
  if (*(char *)(param_1 + 0x29) != '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_801402b8(param_1,0xf,0);
  }
  if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
  *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 0x80;
  if (*(short *)(param_1 + 0x58) < 300) {
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x14;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
  return 0;
}

