// FUN_08033910

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08033910(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  short local_12;
  undefined2 local_e;
  
  if (param_2 != 0) {
    iVar1 = (int)*(short *)(param_1 + 0x44);
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    if (0x1800 < iVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((_DAT_1f80017c & 0xf) != 0) {
      return;
    }
  }
  local_16 = *(undefined2 *)(param_1 + 0x2e);
  local_12 = *(short *)(param_1 + 0x32) + 0x50;
  local_e = *(undefined2 *)(param_1 + 0x36);
  func_0x0003116c(0x502,auStack_18,0xffffffce);
  return;
}

