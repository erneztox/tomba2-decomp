// FUN_8004162c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8004162c(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  if (((int)*(short *)(param_1 + 0x72) & 0x8000U) != 0) {
    iVar2 = _DAT_1f800214;
  }
  iVar1 = (*(ushort *)(param_1 + 0x72) & 0x7fff) * 4;
  if (*(short *)(param_1 + 0x74) == -1) {
    *(undefined4 *)(*(int *)(iVar2 + iVar1 + 0xc0) + 0x40) = 0;
  }
  else {
    FUN_80051b04(*(undefined4 *)(iVar2 + iVar1 + 0xc0),(int)*(short *)(param_1 + 0x74),
                 (int)*(short *)(param_1 + 0x76));
  }
  return 1;
}

