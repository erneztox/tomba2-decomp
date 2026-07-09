// FUN_8010b1c0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010b1c0(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  
  iVar2 = func_0x80024bd8(param_1,param_2,*(undefined4 *)(param_2 + 0xc0));
  if (iVar2 != 0) {
    sVar1 = *(short *)(param_2 + 0x80);
    *(undefined1 *)(param_2 + 0x29) = 1;
    *(undefined1 *)(param_1 + 0x164) = 1;
    *(undefined1 *)(param_1 + 0x15c) = 0;
    DAT_1f800182 = 0;
    _DAT_1f800080 = param_2;
    *(short *)(param_1 + 0x152) = sVar1 + *(short *)(param_1 + 0x80) + -0xc;
  }
  return;
}

