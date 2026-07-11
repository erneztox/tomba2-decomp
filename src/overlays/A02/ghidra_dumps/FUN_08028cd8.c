// FUN_08028cd8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08028cd8(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = func_0x000519e0(param_1,0x10,_DAT_800ecfb0,0x801291d8);
  if (iVar1 != 0) {
    return;
  }
  func_0x00051b04(*(undefined4 *)(param_1 + ((byte)param_1[9] - 1) * 4 + 0xc0),0x1b,5);
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
  func_0x00040cdc(param_1,0x80139240,0x8012c278);
  func_0x00041718(param_1,3,0);
  *(undefined2 *)(param_1 + 0x56) = 0x800;
  *param_1 = 9;
  *(undefined2 *)(param_1 + 0x80) = 0xaa;
  *(undefined2 *)(param_1 + 0x82) = 0x154;
  *(undefined2 *)(param_1 + 0x84) = 0x78;
  *(undefined2 *)(param_1 + 0x86) = 0xf0;
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x58) = 0;
  param_1[0xb] = 0;
  param_1[0x2b] = 0;
  param_1[0x29] = 0;
  *(undefined2 *)(param_1 + 0x40) = 0x1e;
  param_1[4] = param_1[4] + '\x01';
  if (DAT_800bf905 == -1) {
    param_1[0x5e] = 3;
  }
  else {
    if (DAT_800bfa1e == '\0') {
      param_1[0x5e] = 0;
      return;
    }
    param_1[0x5e] = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

