// FUN_8013989c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8013989c(void)

{
  char cVar1;
  ushort uVar2;
  bool bVar3;
  char in_v0;
  short sVar4;
  undefined4 uVar5;
  int iVar6;
  int unaff_s0;
  int unaff_s1;
  
  *(undefined2 *)(unaff_s0 + 0x4a) = 0;
  *(undefined2 *)(unaff_s0 + 0x48) = 0;
  *(char *)(unaff_s0 + 7) = in_v0 + '\x01';
  uVar2 = *(ushort *)(unaff_s0 + 0x40);
  *(ushort *)(unaff_s0 + 0x40) = uVar2 - 1;
  if ((int)((uint)uVar2 << 0x10) < 1) {
    sVar4 = func_0x800781e0((int)*(short *)(unaff_s0 + 0x2e) - (int)_DAT_1f800160,
                            (int)*(short *)(unaff_s0 + 0x36) - (int)_DAT_1f800164);
    if (((((int)_DAT_800e7ffe & 0x8200U) == 0) && (sVar4 < 0x641)) && (sVar4 < 0x44d)) {
      iVar6 = 2;
      if (600 < sVar4) {
        iVar6 = 1;
      }
      uVar5 = 1;
      if (iVar6 != 0) {
        uVar5 = 4;
      }
      *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + 0x10;
      FUN_801406e4();
      return uVar5;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  cVar1 = *(char *)(unaff_s0 + 0x5f);
  if (cVar1 == '\0') {
    bVar3 = false;
  }
  else {
    if (cVar1 != '\x03') {
      uVar2 = *(ushort *)(unaff_s0 + 0x62);
    }
    else {
      uVar2 = *(ushort *)(unaff_s0 + 0x62);
    }
    bVar3 = cVar1 == '\x03';
    if ((uVar2 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (bVar3) {
    uVar5 = func_0x8009a450();
    return uVar5;
  }
  uVar2 = *(ushort *)(*(int *)(unaff_s0 + 0x38) + 4);
  *(ushort *)(unaff_s0 + 0x4e) = uVar2;
  if ((uVar2 & 1) != 0) {
    *(undefined1 *)(unaff_s1 + 7) = 1;
    sVar4 = func_0x800781e0((int)*(short *)(unaff_s0 + 0x2e) - (int)_DAT_1f800160,
                            (int)*(short *)(unaff_s0 + 0x36) - (int)_DAT_1f800164);
    if ((((int)_DAT_800e7ffe & 0x8200U) != 0) || (0x640 < sVar4)) {
      uVar5 = FUN_8014296c();
      return uVar5;
    }
    if (0x44c < sVar4) {
      uVar5 = FUN_8014296c();
      return uVar5;
    }
  }
  if ((*(ushort *)(unaff_s0 + 0x62) & 1) != 0) {
    uVar5 = FUN_801429d8();
    return uVar5;
  }
  *(int *)(unaff_s0 + 0x2c) =
       *(int *)(unaff_s0 + 0x2c) +
       (int)*(short *)(unaff_s0 + 0x48) * (int)*(short *)(unaff_s0 + 0x4e);
  *(int *)(unaff_s0 + 0x34) =
       *(int *)(unaff_s0 + 0x34) +
       (int)*(short *)(unaff_s0 + 0x4c) * (int)*(short *)(unaff_s0 + 0x4e);
  uVar5 = FUN_80142a64();
  return uVar5;
}

