// FUN_0802cf30

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0802cf30(int param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  short local_22;
  undefined2 local_1e;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      goto LAB_0802d094;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 7) = 1;
  }
  uVar6 = func_0x0009a450();
  *(ushort *)(param_1 + 0x40) = (ushort)*(byte *)((uVar6 & 0xf) + 0x801418d4);
  if ((_DAT_800bfe56 & 0x10) == 0) {
    if (*(char *)(param_1 + 0x46) != '\x1f') {
      *(undefined1 *)(param_1 + 0x46) = 0x1f;
      func_0x00077cfc(param_1,0x80144f14,0x1f,8);
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 0x8c;
      *(undefined2 *)(param_1 + 0x86) = 0xf0;
      *(undefined2 *)(param_1 + 0x7c) = 0;
      *(undefined2 *)(param_1 + 0x7e) = 0;
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfff7;
    }
  }
  else if (*(char *)(param_1 + 0x46) != '\x13') {
    *(undefined1 *)(param_1 + 0x46) = 0x13;
    func_0x00077cfc(param_1,0x80144f14,0x13,8);
    *(undefined2 *)(param_1 + 0x80) = 0x5a;
    *(undefined2 *)(param_1 + 0x82) = 0xb4;
    *(undefined2 *)(param_1 + 0x84) = 0x8c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x4c) = 0;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0;
  *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
LAB_0802d094:
  uVar3 = *(ushort *)(param_1 + 0x40);
  *(ushort *)(param_1 + 0x40) = uVar3 - 1;
  if ((int)((uint)uVar3 << 0x10) < 1) {
    sVar5 = func_0x000781e0((int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160,
                            (int)*(short *)(param_1 + 0x36) - (int)_DAT_1f800164);
    if (((((int)_DAT_800e7ffe & 0x8200U) != 0) || (0x640 < sVar5)) || (0x44c < sVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar7 = 2;
    if (600 < sVar5) {
      iVar7 = 1;
    }
    iVar9 = 1;
    if (iVar7 != 0) {
      iVar9 = 4;
    }
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x28;
    uVar6 = func_0x00124a08(param_1);
    if ((uVar6 & 2) != 0) {
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
        iVar9 = 3;
      }
    }
    if (iVar9 != 0) {
      local_26 = *(undefined2 *)(param_1 + 0x2e);
      local_22 = *(short *)(param_1 + 0x32) + 0x50;
      local_1e = *(undefined2 *)(param_1 + 0x36);
      uVar8 = 0x502;
      if ((_DAT_800bfe56 & 0x10) != 0) {
        uVar8 = 0;
      }
      func_0x0003116c(uVar8,auStack_28,0xffffffce);
    }
    return iVar9;
  }
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
  if (!bVar4) {
    if ((_DAT_800bfe56 & 0x10) == 0) {
      *(undefined2 *)(param_1 + 0x4e) = 0x800;
    }
    else {
      uVar3 = *(ushort *)(*(int *)(param_1 + 0x38) + 4);
      *(ushort *)(param_1 + 0x4e) = uVar3;
      if ((uVar3 & 1) != 0) {
        *(undefined1 *)(param_1 + 0x67) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    if ((*(ushort *)(param_1 + 0x62) & 1) == 0) {
      *(int *)(param_1 + 0x2c) =
           *(int *)(param_1 + 0x2c) +
           (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
      *(int *)(param_1 + 0x34) =
           *(int *)(param_1 + 0x34) +
           (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
    }
    else {
      *(int *)(param_1 + 0x2c) =
           *(int *)(param_1 + 0x2c) -
           (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
      *(int *)(param_1 + 0x34) =
           *(int *)(param_1 + 0x34) -
           (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

