// FUN_0803c974

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0803c974(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_18 [2];
  short local_16;
  short local_12;
  short local_e;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        if (*(char *)(param_1 + 0x79) == '\x01') {
          func_0x00041718(param_1,1,4);
          *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        return 0;
      }
      if (bVar1 == 3) {
        if (DAT_800bfa00 != '\x05') {
          return 0;
        }
        return 1;
      }
      halt_baddata();
    }
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00041718(param_1,0x11,4);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  if (*(short *)(*(int *)(param_1 + 0x38) + 4) == 0) {
    return 0;
  }
  local_16 = *(short *)(*(int *)(param_1 + 0xfc) + 0x2c) +
             (short)(*(short *)(*(int *)(param_1 + 0xfc) + 0x18) * 0x19 >> 10);
  local_12 = *(short *)(*(int *)(param_1 + 0xfc) + 0x30) +
             (short)(*(short *)(*(int *)(param_1 + 0xfc) + 0x1e) * 0x19 >> 10);
  local_e = *(short *)(*(int *)(param_1 + 0xfc) + 0x34) +
            (short)(*(short *)(*(int *)(param_1 + 0xfc) + 0x24) * 0x19 >> 10);
  iVar2 = func_0x0003116c(0x14,auStack_18,0xffffffce);
  if (iVar2 != 0) {
    *(byte *)(iVar2 + 0x28) = *(byte *)(iVar2 + 0x28) | 0x80;
  }
  DAT_800bfa00 = 4;
  func_0x00074590(0x32,0xfffffffb,0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

