// FUN_0801ca14

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0801ca14(int param_1)

{
  int iVar1;
  byte bVar2;
  
  bVar2 = *(byte *)(param_1 + 0x78);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(char *)(param_1 + 0x79) != '\x01') {
        return 0;
      }
      func_0x000416a8(param_1,0xe,0x80140f7c);
      func_0x00041718(param_1,4,0);
      halt_baddata();
    }
    if (bVar2 != 0) {
      halt_baddata();
    }
    func_0x000416a8(param_1,0xe,0x80140f7c);
    func_0x00041718(param_1,0x11,0);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
  }
  if ((uint)_DAT_1f80017c % 6 == 0) {
    func_0x00074590(8,6,0xffffffe2);
  }
  bVar2 = *(char *)(param_1 + 0x18) + 1;
  *(byte *)(param_1 + 0x1a) = bVar2;
  *(byte *)(param_1 + 0x19) = bVar2;
  *(byte *)(param_1 + 0x18) = bVar2;
  iVar1 = _DAT_800bf844;
  if (bVar2 < 0x7f) {
    return 0;
  }
  if (_DAT_800bf844 != 0) {
    *(undefined1 *)(_DAT_800bf844 + 4) = 2;
    *(undefined1 *)(iVar1 + 5) = 0;
    *(undefined2 *)(iVar1 + 0x60) = 0;
  }
  *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfd;
  func_0x000416a8(param_1,0xffffffff,0);
  func_0x00041718(param_1,0xac,0);
  *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

