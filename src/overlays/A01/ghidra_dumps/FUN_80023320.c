// FUN_80023320

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80023320(int param_1,uint param_2,uint param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  
  if ((_DAT_800e7fee != 0) && (DAT_1f800137 == '\0')) {
    if ((param_4 & 0x100) == 0) {
      sVar1 = *(short *)(param_3 + 0x2c);
      sVar2 = *(short *)(param_3 + 0x30);
      sVar3 = *(short *)(param_3 + 0x34);
      _DAT_1f800208 = param_3 & 0x7fffffff;
      _DAT_1f800280 = param_2;
    }
    else {
      sVar1 = *(short *)(param_2 + 0x2e);
      sVar2 = *(short *)(param_2 + 0x32);
      sVar3 = *(short *)(param_2 + 0x36);
      _DAT_1f800208 = param_2;
    }
    *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x68);
    DAT_800e7fc6 = 4;
    DAT_1f80027b = 1;
    *(undefined1 *)(param_1 + 0x29) = 1;
    *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x2e) - sVar1;
    *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x32) - sVar2;
    *(short *)(param_1 + 100) = *(short *)(param_1 + 0x36) - sVar3;
    _DAT_1f800200 = *(undefined2 *)(param_1 + 0x2e);
    _DAT_1f800202 = *(undefined2 *)(param_1 + 0x32);
    _DAT_1f800204 = *(undefined2 *)(param_1 + 0x36);
    DAT_1f80023a = (param_4 & 0x1000) == 0;
    FUN_80074590(0xc,0,0);
  }
  return;
}

