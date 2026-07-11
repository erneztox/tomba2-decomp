// FUN_0803decc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0803decc(int param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = _DAT_1f800214;
  if (*(char *)(param_1 + 0x78) == '\0') {
    func_0x00120260(param_1,2);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 0x78) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = func_0x00085690(-((int)(((uint)_DAT_1f800164 - (uint)*(ushort *)(_DAT_1f800214 + 0x36)) *
                                 0x10000) >> 0x10),
                          (int)(((uint)_DAT_1f800160 - (uint)*(ushort *)(_DAT_1f800214 + 0x2e)) *
                               0x10000) >> 0x10);
  *(ushort *)(iVar1 + 0x56) = uVar2 & 0xfff;
  return DAT_800bf9bb == -0x80;
}

