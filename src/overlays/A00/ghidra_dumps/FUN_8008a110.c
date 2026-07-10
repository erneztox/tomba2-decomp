// FUN_8008a110

int FUN_8008a110(byte *param_1)

{
  return (((uint)(*param_1 >> 4) * 10 + (*param_1 & 0xf)) * 0x3c +
         (uint)(param_1[1] >> 4) * 10 + (param_1[1] & 0xf)) * 0x4b +
         (uint)(param_1[2] >> 4) * 10 + (param_1[2] & 0xf) + -0x96;
}

