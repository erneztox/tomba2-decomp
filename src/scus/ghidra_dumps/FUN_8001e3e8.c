
undefined4 FUN_8001e3e8(undefined4 param_1,undefined4 param_2,int param_3,undefined2 param_4)

{
  int iVar1;
  uint in_v1;
  undefined2 unaff_s0;
  undefined2 unaff_s1;
  
  if (param_3 == -1) {
    *(undefined2 *)((in_v1 & 0xffff) + 0x18a) = unaff_s0;
    FUN_8001dd04();
    FUN_8001dd04();
    FUN_8001dd04();
    FUN_8001dd04();
    iVar1 = DAT_80026d88;
    *(undefined2 *)(DAT_80026d88 + 0x18c) = unaff_s1;
    *(undefined2 *)(iVar1 + 0x18e) = unaff_s0;
    FUN_8001dd04();
    FUN_8001dd04();
    FUN_8001dd04();
    FUN_8001dd04();
    DAT_80026dbc = 1;
    *(undefined2 *)(DAT_80026d88 + 0x1aa) = 0xc000;
    DAT_80026dc0 = 0;
    DAT_80026dc4 = 0;
    return 0;
  }
  *(undefined2 *)(param_3 * 2 + DAT_80026d88) = param_4;
  return param_2;
}

