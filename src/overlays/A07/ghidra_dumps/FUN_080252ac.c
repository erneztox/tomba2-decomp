// FUN_080252ac

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080252ac(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  
  *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
  iVar2 = func_0x000519e0(param_1,0xf,_DAT_800ecfc4,0x80131960);
  if (iVar2 == 0) {
    func_0x00040cdc(param_1,0x8014005c,0x800a3cd0);
    func_0x00041718(param_1,9,0);
    uVar1 = DAT_800bfa2d;
    *(undefined2 *)(param_1 + 0x80) = 0x78;
    *(undefined2 *)(param_1 + 0x84) = 0x78;
    param_1[0xb] = 0x40;
    *param_1 = 9;
    *(undefined2 *)(param_1 + 0x82) = 0xf0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x86) = 0xd2;
    param_1[0x2b] = 0;
    param_1[0x29] = 0;
    param_1[0x5e] = uVar1;
    param_1[4] = param_1[4] + '\x01';
  }
  return;
}

