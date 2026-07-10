// FUN_000080f8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000080f8(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  undefined1 auStack_28 [2];
  short local_26;
  short local_22;
  short local_1e;
  
  if (DAT_800bf871 == '\x04') {
    if (1 < DAT_800bfa55) {
      *(undefined1 *)(param_1 + 1) = 1;
      halt_baddata();
    }
  }
  else {
    if (DAT_800bf871 != '\x05') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 0x5e) == '\0') {
      func_0x00110ba0(param_1);
      func_0x000517f8(param_1);
      func_0x00110a44(param_1);
      if ((*(short *)(param_1 + 0x48) != 0) && ((_DAT_1f80017c & 7) == 0)) {
        uVar2 = 0xd;
        if (0 < *(short *)(param_1 + 0x58)) {
          uVar2 = 0xe;
        }
        _DAT_1f8000c0 = 100;
        _DAT_1f8000c2 = 0xfefc;
        _DAT_1f8000c4 = 0x1ca;
        func_0x00084470(*(int *)(param_1 + 0xc0) + 0x18,&DAT_1f8000c0,&DAT_1f8000a0);
        local_26 = *(short *)(*(int *)(param_1 + 0xc0) + 0x2c) + _DAT_1f8000a0;
        local_22 = *(short *)(*(int *)(param_1 + 0xc0) + 0x30) + _DAT_1f8000a4;
        local_1e = *(short *)(*(int *)(param_1 + 0xc0) + 0x34) + _DAT_1f8000a8;
        func_0x0003116c(uVar2,auStack_28,0xffffffce);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (*(char *)(param_1 + 0x5e) != '\x01') {
        *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 5) == '\0') {
        *(undefined1 *)(param_1 + 5) = 1;
        *(undefined2 *)(param_1 + 0x40) = 0x78;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 5) != '\x01') {
        halt_baddata();
      }
      sVar1 = *(short *)(param_1 + 0x40) + -1;
      *(short *)(param_1 + 0x40) = sVar1;
      if (sVar1 == -1) {
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        DAT_800bf80f = 2;
        DAT_800bf839 = 8;
      }
      func_0x000517f8(param_1);
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077ebc(param_1);
  }
  return;
}

