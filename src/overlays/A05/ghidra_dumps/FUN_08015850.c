// FUN_08015850

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08015850(byte *param_1,undefined1 *param_2)

{
  int iVar1;
  
  if ((((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) && (iVar1 = func_0x00022f04(), iVar1 != 0)) &&
     ((*param_1 & 6) == 0)) {
    param_1[0x2b] = (byte)(_DAT_1f80009c >> 4);
    func_0x00022d08(param_1,0,1,1);
    func_0x00058304(param_1,0);
    *param_2 = 2;
    param_2[4] = 2;
    param_2[5] = 0;
    param_2[6] = 0;
  }
  return;
}

