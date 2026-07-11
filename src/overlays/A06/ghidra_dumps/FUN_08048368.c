// FUN_08048368

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08048368(int param_1)

{
  byte bVar1;
  
  *(undefined1 *)(param_1 + 0xb) = 0x10;
  *(undefined1 *)(param_1 + 8) = 0xf0;
  bVar1 = *(byte *)(param_1 + 3);
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined2 *)(param_1 + 0x5c) = 0;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined1 *)(param_1 + 0x47) = 0;
  *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  if (bVar1 == 1) {
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf58;
    func_0x00077b38(param_1,0x80017334,0);
    *(undefined2 *)(param_1 + 0x80) = 0x20;
    *(undefined2 *)(param_1 + 0x82) = 0x40;
    *(undefined2 *)(param_1 + 0x84) = 0x20;
    *(undefined2 *)(param_1 + 0x86) = 0x40;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf58;
    func_0x00077b38(param_1,0x80017334,1);
    *(undefined2 *)(param_1 + 0x80) = 0x20;
    *(undefined2 *)(param_1 + 0x82) = 0x40;
    *(undefined2 *)(param_1 + 0x84) = 0x40;
    *(undefined2 *)(param_1 + 0x86) = 0x80;
    *(undefined1 *)(param_1 + 0x5e) = 100;
    *(undefined2 *)(param_1 + 0x5c) = 0x2b1f;
  }
  else if (bVar1 == 3) {
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf58;
    func_0x00077b38(param_1,0x80017334,1);
    *(undefined2 *)(param_1 + 0x80) = 0x20;
    *(undefined2 *)(param_1 + 0x82) = 0x40;
    *(undefined2 *)(param_1 + 0x84) = 0x40;
    *(undefined2 *)(param_1 + 0x86) = 0x80;
    *(undefined2 *)(param_1 + 0x5c) = 0x2a5f;
    *(undefined1 *)(param_1 + 0x5e) = 200;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

