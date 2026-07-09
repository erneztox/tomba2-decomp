// FUN_80138b28

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_80138b28(int param_1,short param_2)

{
  undefined4 uVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 7) == '\0') {
                    /* WARNING: Subroutine does not return */
    *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfffb;
    FUN_801402b8(param_1,(int)param_2,8);
  }
  if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
  FUN_801406e4(param_1);
  bVar2 = false;
  if (((*(char *)(param_1 + 0x66) == -0x7f) && (*(char *)(param_1 + 0x29) == '\0')) &&
     (*(char *)(param_1 + 4) == '\x01')) {
    *(undefined4 *)(param_1 + 4) = 0x20501;
    bVar2 = true;
  }
  if (!bVar2) {
    if (0x13 < *(byte *)(param_1 + 7)) {
      uVar1 = FUN_80141c00();
      return uVar1;
    }
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) + 1;
  }
  return 0;
}

