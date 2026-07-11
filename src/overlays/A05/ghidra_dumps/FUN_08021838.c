// FUN_08021838

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08021838(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x78) != '\0') {
    if (*(char *)(param_1 + 0x78) == '\x01') {
      *(ushort *)(*(int *)(param_1 + 0x14) + 0x56) = -_DAT_1f8000f2 & 0xfff;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_800bf844 = func_0x0006fb0c(param_1,0x18);
  *(undefined4 *)(param_1 + 0x14) = _DAT_800bf844;
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined2 *)(iVar1 + 0x60) = 0x60;
  *(undefined2 *)(iVar1 + 0x62) = 0x30;
  *(undefined1 *)(iVar1 + 0x5e) = 1;
  *(byte *)(iVar1 + 0x5f) = *(byte *)(iVar1 + 0x5f) | 1;
  *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

