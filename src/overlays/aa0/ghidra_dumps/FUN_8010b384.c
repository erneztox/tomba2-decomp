// FUN_8010b384

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010b384(int param_1,int param_2)

{
  undefined2 uVar1;
  int iVar2;
  
  iVar2 = func_0x80024338();
  if (iVar2 != 0) {
    uVar1 = 0xffe2;
    if (*(char *)(param_2 + 3) == '\x01') {
      uVar1 = 0xffa8;
    }
    *(undefined2 *)(param_1 + 0x156) = uVar1;
    *(short *)(param_1 + 0x152) = *(short *)(param_2 + 0x80) + *(short *)(param_1 + 0x80) + -0xc;
    *(undefined1 *)(param_2 + 0x5e) = 1;
    *(undefined1 *)(param_1 + 0x164) = 1;
    DAT_1f800182 = 0;
    _DAT_1f800080 = param_2;
  }
  return;
}

