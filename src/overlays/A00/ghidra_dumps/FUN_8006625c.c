// FUN_8006625c

void FUN_8006625c(int param_1)

{
  undefined4 uVar1;
  
  if (DAT_800bfe55 == '\0') {
    FUN_80022c0c(param_1,1);
    uVar1 = 0x23;
    if (*(short *)(param_1 + 0x16e) == 0) {
      uVar1 = 0x24;
    }
    FUN_80074590(uVar1,0,0);
    FUN_800521f4(0,0x81,0x81,0xf);
    *(undefined2 *)(param_1 + 0x170) = *(undefined2 *)(param_1 + 0x16e);
    FUN_80058304(param_1,0xb);
  }
  return;
}

