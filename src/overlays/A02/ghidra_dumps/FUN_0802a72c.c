// FUN_0802a72c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802a72c(undefined1 *param_1)

{
  int iVar1;
  
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
  iVar1 = func_0x000519e0(param_1,0x10,_DAT_800ecfa8,0x80129158);
  if (iVar1 != 0) {
    return;
  }
  func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0x14,0x10);
  *(undefined4 *)(*(int *)(param_1 + ((byte)param_1[9] - 1) * 4 + 0xc0) + 0x40) = 0;
  func_0x00040cdc(param_1,0x80139240,0x800a3cd0);
  func_0x00041718(param_1,0x13,0);
  if (DAT_800bf8ff == -1) {
    func_0x00041718(param_1,2,0);
    param_1[0x5e] = 4;
  }
  else if (DAT_800bf8fe == 0xff) {
    param_1[3] = 1;
    if (DAT_800bfafe == '\0') {
      param_1[0x5e] = 2;
    }
    else {
      param_1[0x5e] = 3;
    }
  }
  else {
    if (((DAT_800bf8fe & 2) == 0) || (DAT_800bfaff == '\0')) {
      param_1[0x5e] = 0;
      *param_1 = 9;
      *(undefined2 *)(param_1 + 0x80) = 0xaa;
      *(undefined2 *)(param_1 + 0x82) = 0x154;
      *(undefined2 *)(param_1 + 0x84) = 200;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      param_1[0xb] = 0;
      *(undefined2 *)(param_1 + 0x86) = 0x168;
      param_1[0x2b] = 0;
      param_1[0x29] = 0;
      param_1[4] = param_1[4] + '\x01';
      return;
    }
    param_1[0x5e] = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

