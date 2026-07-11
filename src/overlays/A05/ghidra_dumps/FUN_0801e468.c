// FUN_0801e468

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0801e468(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = func_0x000519e0(param_1,0xf,_DAT_800ecfa8,0x8013b24c);
  if (iVar1 == 0) {
    param_1[0xb] = 0;
    *param_1 = 9;
    *(undefined2 *)(param_1 + 0x80) = 0x55;
    *(undefined2 *)(param_1 + 0x82) = 0xaa;
    *(undefined2 *)(param_1 + 0x84) = 0x80;
    *(undefined2 *)(param_1 + 0x86) = 0x100;
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    param_1[0xb] = param_1[0xb] & 0xc0 | 0x80;
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
  }
  return iVar1 == 0;
}

