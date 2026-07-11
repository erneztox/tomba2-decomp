// FUN_0802d77c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_0802d77c(int param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  short sVar6;
  undefined1 auStack_30 [2];
  undefined2 local_2e;
  short local_2a;
  undefined2 local_26;
  
  sVar6 = 0;
  iVar4 = func_0x000781e0((int)*(short *)(param_1 + 0x2e) - (int)_DAT_1f800160,
                          (int)*(short *)(param_1 + 0x36) - (int)_DAT_1f800164);
  if (*(char *)(param_1 + 7) == '\0') {
    *(undefined2 *)(param_1 + 0x4e) = 0;
    if (iVar4 < param_2) {
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x46) != '\a') {
      *(undefined1 *)(param_1 + 0x46) = 7;
      func_0x00077c40(param_1,0x80144f14,7);
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 0x8c;
      *(undefined2 *)(param_1 + 0x86) = 0xf0;
      *(undefined2 *)(param_1 + 0x7c) = 0;
      *(undefined2 *)(param_1 + 0x7e) = 0;
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfff7;
    }
    *(undefined2 *)(param_1 + 0x42) = 0x3c;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  else if (*(char *)(param_1 + 7) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((iVar4 < param_2) ||
     (uVar3 = *(short *)(param_1 + 0x42) - 1, *(ushort *)(param_1 + 0x42) = uVar3,
     (int)((uint)uVar3 << 0x10) < 1)) {
    sVar6 = 1;
  }
  if ((*(ushort *)(param_1 + 0x42) & 7) == 0) {
    local_2e = *(undefined2 *)(param_1 + 0x2e);
    local_2a = *(short *)(param_1 + 0x32) + 0x50;
    local_26 = *(undefined2 *)(param_1 + 0x36);
    uVar5 = 0x502;
    if ((_DAT_800bfe56 & 0x10) != 0) {
      uVar5 = 0;
    }
    func_0x0003116c(uVar5,auStack_30,0xffffffce);
  }
  *(short *)(param_1 + 0x4e) =
       *(short *)(param_1 + 0x4e) + (short)(param_3 - *(short *)(param_1 + 0x4e) >> 2);
  cVar1 = *(char *)(param_1 + 0x5f);
  if (cVar1 == '\0') {
    bVar2 = false;
  }
  else {
    if (cVar1 != '\x03') {
      uVar3 = *(ushort *)(param_1 + 0x62);
    }
    else {
      uVar3 = *(ushort *)(param_1 + 0x62);
    }
    bVar2 = cVar1 == '\x03';
    if ((uVar3 & 1) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  if (bVar2) {
    sVar6 = -1;
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x28;
  func_0x00124a08(param_1);
  if ((*(ushort *)(param_1 + 0x62) & 1) == 0) {
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) +
         (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) +
         (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x4e);
    if (sVar6 != -1) {
      if (sVar6 != 0) {
        *(undefined1 *)(param_1 + 7) = 0;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
      return (int)sVar6;
    }
    *(undefined1 *)(param_1 + 5) = 0xd;
    *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) - (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x4e);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

