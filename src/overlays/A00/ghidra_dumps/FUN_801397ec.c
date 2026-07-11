// FUN_801397ec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_801397ec(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  short sVar5;
  undefined4 uVar6;
  int iVar7;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        uVar6 = FUN_80142a64();
        return uVar6;
      }
      uVar3 = *(ushort *)(param_1 + 0x40);
      *(ushort *)(param_1 + 0x40) = uVar3 - 1;
      if (0 < (int)((uint)uVar3 << 0x10)) {
        cVar2 = *(char *)(param_1 + 0x5f);
        if (cVar2 == '\0') {
          bVar4 = false;
        }
        else {
          if (cVar2 != '\x03') {
            uVar3 = *(ushort *)(param_1 + 0x62);
          }
          else {
            uVar3 = *(ushort *)(param_1 + 0x62);
          }
          bVar4 = cVar2 == '\x03';
          if ((uVar3 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
        }
        if (bVar4) {
          uVar6 = func_0x8009a450();
          return uVar6;
        }
        uVar3 = *(ushort *)(*(int *)(param_1 + 0x38) + 4);
        *(ushort *)(param_1 + 0x4e) = uVar3;
        if ((uVar3 & 1) != 0) {
          *(undefined1 *)(param_1 + 0x67) = 1;
          sVar5 = func_0x800781e0((int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160,
                                  (int)*(short *)(param_1 + 0x36) - (int)_DAT_1f800164);
          if ((((int)_DAT_800e7ffe & 0x8200U) != 0) || (0x640 < sVar5)) {
            uVar6 = FUN_8014296c();
            return uVar6;
          }
          if (0x44c < sVar5) {
            uVar6 = FUN_8014296c();
            return uVar6;
          }
        }
        if ((*(ushort *)(param_1 + 0x62) & 1) != 0) {
          uVar6 = FUN_801429d8();
          return uVar6;
        }
        *(int *)(param_1 + 0x2c) =
             *(int *)(param_1 + 0x2c) +
             (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
        *(int *)(param_1 + 0x34) =
             *(int *)(param_1 + 0x34) +
             (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
        uVar6 = FUN_80142a64();
        return uVar6;
      }
      sVar5 = func_0x800781e0((int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160,
                              (int)*(short *)(param_1 + 0x36) - (int)_DAT_1f800164);
      if (((((int)_DAT_800e7ffe & 0x8200U) == 0) && (sVar5 < 0x641)) && (sVar5 < 0x44d)) {
        iVar7 = 2;
        if (600 < sVar5) {
          iVar7 = 1;
        }
        uVar6 = 1;
        if (iVar7 != 0) {
          uVar6 = 4;
        }
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x10;
        FUN_801406e4();
        return uVar6;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      uVar6 = FUN_80142a64();
      return uVar6;
    }
    *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfffb;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  uVar6 = func_0x8009a450();
  return uVar6;
}

