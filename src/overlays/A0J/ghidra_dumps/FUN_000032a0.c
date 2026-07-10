// FUN_000032a0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_000032a0(int param_1)

{
  int iVar1;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  undefined2 local_1a;
  undefined2 local_16;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    func_0x0006e1c0(*(byte *)(param_1 + 3) | 0x80);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) == '\x01') {
    _DAT_800e8012 = _DAT_1f800160;
    _DAT_800e8016 = _DAT_1f800162;
    _DAT_800e801a = _DAT_1f800164;
    func_0x0006e3f4(0x800e8008,0x800e8010);
    local_1e = 0x1103;
    local_1a = 0xddfd;
    local_16 = 0x1137;
    iVar1 = func_0x0006cec4(0x1f8000d0,auStack_20,0xe0);
    if (iVar1 == 0) {
      return 0;
    }
    DAT_800e806e = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

