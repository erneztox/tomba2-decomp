// FUN_08025be8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08025be8(undefined1 *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = func_0x000519e0(param_1,5,_DAT_800ecfc8,0x8013b9ec);
  uVar1 = _DAT_800ecfd8;
  uVar3 = 0;
  if (iVar2 == 0) {
    *(undefined4 *)(param_1 + 0x7c) = 0x80142108;
    *(undefined4 *)(param_1 + 0x3c) = uVar1;
    func_0x00041718(param_1,0,0);
    if (param_2 != 0) {
      func_0x00041ac0(param_1);
    }
    uVar3 = 1;
    *param_1 = 1;
    *(undefined2 *)(param_1 + 0x80) = 0x60;
    *(undefined2 *)(param_1 + 0x82) = 0xc0;
    *(undefined2 *)(param_1 + 0x84) = 0x40;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x86) = 0xa0;
    param_1[0xbe] = 0;
    param_1[0x29] = 0;
    param_1[0x5f] = 0;
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x60);
  }
  return uVar3;
}

