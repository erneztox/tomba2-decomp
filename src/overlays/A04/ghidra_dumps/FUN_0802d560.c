// FUN_0802d560

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0802d560(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  short local_22;
  undefined2 local_1e;
  
  if (*(char *)(param_1 + 7) == '\0') {
    if (*(char *)(param_1 + 0x46) != '\b') {
      *(undefined1 *)(param_1 + 0x46) = 8;
      func_0x00077cfc(param_1,0x80144f14,8,3);
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 0x8c;
      *(undefined2 *)(param_1 + 0x86) = 0xf0;
      *(undefined2 *)(param_1 + 0x7c) = 0;
      *(undefined2 *)(param_1 + 0x7e) = 0;
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfff7;
    }
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  else if (*(char *)(param_1 + 7) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(short *)(*(int *)(param_1 + 0x38) + 4) != 0) {
    *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) ^ 1;
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x800;
    if (*(char *)(param_1 + 0x46) != '\r') {
      *(undefined1 *)(param_1 + 0x46) = 0xd;
      func_0x00077c40(param_1,0x80144f14,0xd);
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 0x8c;
      *(undefined2 *)(param_1 + 0x86) = 0xf0;
      *(undefined2 *)(param_1 + 0x7c) = 0;
      *(undefined2 *)(param_1 + 0x7e) = 0;
      *(ushort *)(param_1 + 0x62) = *(ushort *)(param_1 + 0x62) & 0xfff7;
    }
    local_26 = *(undefined2 *)(param_1 + 0x2e);
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
    local_22 = *(short *)(param_1 + 0x32) + 0x50;
    local_1e = *(undefined2 *)(param_1 + 0x36);
    uVar1 = 0x502;
    if ((_DAT_800bfe56 & 0x10) != 0) {
      uVar1 = 0;
    }
    func_0x0003116c(uVar1,auStack_28,0xffffffce);
    if (0x13 < *(byte *)(param_1 + 7)) {
      if (-1 < param_2) {
        *(char *)(param_1 + 5) = (char)param_2;
      }
      if (-1 < param_3) {
        *(char *)(param_1 + 6) = (char)param_3;
      }
      *(undefined1 *)(param_1 + 7) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)(param_1 + 7) = *(byte *)(param_1 + 7) + 1;
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 0x28;
  func_0x00124a08();
  return 0;
}

