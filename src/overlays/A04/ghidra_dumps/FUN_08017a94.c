// FUN_08017a94

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08017a94(byte *param_1)

{
  int iVar1;
  
  iVar1 = func_0x0001f830();
  if (iVar1 != 0) {
    param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
    iVar1 = func_0x00022d08(param_1,0,1,1);
    if (((iVar1 != 0) && ((param_1[0x177] & 2) == 0)) &&
       ((*(ushort *)(param_1 + 0x17e) & 0x30) != 0)) {
      param_1[5] = 0;
      param_1[6] = 4;
      param_1[7] = 0;
      *param_1 = *param_1 | 8;
    }
  }
  return;
}

