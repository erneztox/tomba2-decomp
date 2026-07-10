// FUN_800270f8

int FUN_800270f8(ushort *param_1)

{
  return (int)(((uint)*param_1 + (uint)param_1[1] + (uint)param_1[2] + (uint)param_1[3] +
                (uint)param_1[4] + (uint)param_1[5] + (uint)param_1[6] + (uint)param_1[7]) * 0x10000
              ) >> 0x10;
}

