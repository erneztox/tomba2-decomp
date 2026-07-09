// FUN_80139af8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80139af8(int param_1,int param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  ushort uVar4;
  
  iVar2 = func_0x800781e0((int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160,
                          (int)*(short *)(param_1 + 0x36) - (int)_DAT_1f800164);
  if (*(char *)(param_1 + 7) == '\0') {
    if (param_2 <= iVar2) {
                    /* WARNING: Subroutine does not return */
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfffb;
      FUN_801402b8(param_1,4,0);
    }
  }
  else if (*(char *)(param_1 + 7) == '\x01') {
    if (iVar2 < param_2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(short *)(param_1 + 0x4e) =
         *(short *)(param_1 + 0x4e) + (short)(param_3 - *(short *)(param_1 + 0x4e) >> 2);
    uVar3 = *(ushort *)(param_1 + 0x42) - 1;
    *(short *)(param_1 + 0x42) = (short)uVar3;
    uVar4 = (ushort)((int)(uVar3 * 0x10000) < 1);
    if ((uVar3 & 7) == 0) {
      func_0x8003116c(0,param_1 + 0x2c,0xfffffffb);
    }
    if (*(char *)(param_1 + 0x5f) == '\0') {
      bVar1 = false;
    }
    else if (*(char *)(param_1 + 0x5f) == '\x03') {
      bVar1 = true;
      if ((*(ushort *)(param_1 + 0x62) & 1) == 0) {
        iVar2 = FUN_80142c04();
        return iVar2;
      }
    }
    else {
      bVar1 = false;
      if ((*(ushort *)(param_1 + 0x62) & 1) == 0) {
        iVar2 = FUN_80142c04();
        return iVar2;
      }
    }
    if (bVar1) {
      uVar4 = 0xffff;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
    FUN_801406e4(param_1);
    if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) +
         (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) +
         (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
    if ((((uVar4 == 0) && (*(char *)(param_1 + 0x66) == -0x7f)) &&
        (*(char *)(param_1 + 0x29) == '\0')) && (*(char *)(param_1 + 4) == '\x01')) {
      *(undefined4 *)(param_1 + 4) = 0x20501;
    }
    return (int)(short)uVar4;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

