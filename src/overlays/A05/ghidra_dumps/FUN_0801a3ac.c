// FUN_0801a3ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_0801a3ac(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = func_0x000519e0(param_1,0xf,_DAT_800ecf94,0x8013b634);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
    func_0x00040cdc(param_1,0x80140f7c,0x800a3d18);
    param_1[0x7b] = 0x1d;
    param_1[0xb] = 0;
    *(undefined2 *)(param_1 + 0x80) = 0x50;
    *(undefined2 *)(param_1 + 0x82) = 0xa0;
    *(undefined2 *)(param_1 + 0x84) = 0x80;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x86) = 0xe0;
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    param_1[0x46] = 0x1d;
    param_1[0xb] = param_1[0xb] & 0xc0 | 0x80;
    func_0x00041718(param_1,0x1d);
    param_1[0x2a] = 0x2b;
    *(undefined4 *)(param_1 + 0x2c) = 0x3a800000;
    *(undefined4 *)(param_1 + 0x30) = 0xd6fc0000;
    *(undefined4 *)(param_1 + 0x34) = 0x12f00000;
    param_1[0xbe] = 1;
    func_0x00041194(param_1,0x60,1,0);
    func_0x0004130c(param_1,1);
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(undefined2 *)(param_1 + 0x52) = 0;
  }
  return iVar1 == 0;
}

