// FUN_080180a8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080180a8(int param_1)

{
  int iVar1;
  byte bVar2;
  
  iVar1 = _DAT_1f800254;
  bVar2 = *(byte *)(param_1 + 0x78);
  if (bVar2 == 1) {
    bVar2 = *(char *)(param_1 + 0x18) + 8;
    *(byte *)(param_1 + 0x18) = bVar2;
    if ((int)((uint)bVar2 << 0x18) < 0) {
      func_0x00041768(param_1,4,4);
      *(undefined1 *)(param_1 + 0x18) = 0x80;
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfd;
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    }
    *(undefined1 *)(param_1 + 0x1a) = *(undefined1 *)(param_1 + 0x18);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      *(undefined1 *)(_DAT_1f800254 + 5) = 0;
      *(undefined1 *)(iVar1 + 4) = 2;
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined1 *)(param_1 + 0x1a) = 0x10;
      *(undefined1 *)(param_1 + 0x19) = 0x10;
      *(undefined1 *)(param_1 + 0x18) = 0x10;
      *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 2;
      func_0x00041768(param_1,2,6);
      func_0x00074590(0x81,0,0);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
      halt_baddata();
    }
  }
  else if (bVar2 == 2) {
    if (*(char *)(param_1 + 0x79) != '\x01') {
      return 0;
    }
    func_0x00041768(param_1,0,4);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

