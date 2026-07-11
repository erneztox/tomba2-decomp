// FUN_80138880

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80138880(int param_1)

{
  byte bVar1;
  char cVar2;
  short sVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  short sVar7;
  int iVar8;
  short sVar9;
  
  sVar9 = 0;
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    sVar3 = *(short *)(param_1 + 0x60);
    sVar7 = func_0x800782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
    bVar5 = ((sVar3 - sVar7) + 0x400U & 0xfff) < 0x801;
    if ((*(ushort *)(param_1 + 0x62) & 1) == 0) {
      bVar6 = true;
      if (bVar5) {
        bVar6 = false;
      }
    }
    else {
      bVar6 = false;
      if (bVar5) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if (bVar6) {
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      iVar8 = FUN_80141980();
      return iVar8;
    }
    if ((DAT_800e7e80 & 2) != 0) {
      *(undefined1 *)(param_1 + 7) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        iVar8 = FUN_80141980();
        return iVar8;
      }
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfffb;
      FUN_801406e4(param_1);
                    /* WARNING: Subroutine does not return */
      FUN_801402b8(param_1,0,8);
    }
    if (bVar1 != 2) {
      iVar8 = FUN_80141980();
      return iVar8;
    }
    iVar8 = func_0x800781e0((int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160,
                            (int)*(short *)(param_1 + 0x36) - (int)_DAT_1f800164);
    if (0x13f < iVar8) {
      sVar9 = 1;
    }
  }
  if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
    iVar8 = FUN_801419dc();
    return iVar8;
  }
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
  cVar2 = *(char *)(param_1 + 0x5f);
  if (cVar2 == '\0') {
    bVar5 = false;
  }
  else {
    if (cVar2 != '\x03') {
      uVar4 = *(ushort *)(param_1 + 0x62);
    }
    else {
      uVar4 = *(ushort *)(param_1 + 0x62);
    }
    bVar5 = cVar2 == '\x03';
    if ((uVar4 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (bVar5) {
    sVar9 = -1;
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
  FUN_801406e4(param_1);
  if ((((sVar9 == 0) && (*(char *)(param_1 + 0x66) == -0x7f)) && (*(char *)(param_1 + 0x29) == '\0')
      ) && (*(char *)(param_1 + 4) == '\x01')) {
    *(undefined4 *)(param_1 + 4) = 0x20501;
  }
  return (int)sVar9;
}

