// FUN_0801817c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801817c(int param_1,int param_2)

{
  int iVar1;
  
  if (((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) && (iVar1 = func_0x00022f04(), iVar1 != 0)) {
    *(char *)(param_1 + 0x2b) = (char)(_DAT_1f80009c >> 4);
    func_0x00022d08(param_1,param_2,1,0);
    *(undefined1 *)(param_2 + 0x2b) = 1;
  }
  return;
}

