// FUN_000035ec

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000035ec(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 6) == '\0') {
    if (DAT_800bfa41 != '\x06') {
      return 0;
    }
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined1 *)(param_1 + 0x18) = 0xff;
    *(undefined1 *)(param_1 + 0x19) = 0xff;
    *(undefined1 *)(param_1 + 0x1a) = 0xff;
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) | 2;
    _DAT_800e8078 = 0x500;
    _DAT_800e8042 = *(undefined2 *)(param_1 + 0x2e);
    iVar1 = (uint)*(ushort *)(param_1 + 0x84) << 0x10;
    _DAT_800e8046 = *(short *)(param_1 + 0x32) - (short)((iVar1 >> 0x10) - (iVar1 >> 0x1f) >> 1);
    _DAT_800e804a = *(undefined2 *)(param_1 + 0x36);
    func_0x00074590(0x38,0x12,0);
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077ebc(param_1);
    func_0x000517f8(param_1);
    *(char *)(param_1 + 0x18) = *(char *)(param_1 + 0x18) + -8;
    *(char *)(param_1 + 0x19) = *(char *)(param_1 + 0x19) + -8;
    *(char *)(param_1 + 0x1a) = *(char *)(param_1 + 0x1a) + -8;
    if (*(char *)(param_1 + 0x18) < '\0') {
      return 0;
    }
    *(byte *)(param_1 + 0xd) = *(byte *)(param_1 + 0xd) & 0xfd;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

