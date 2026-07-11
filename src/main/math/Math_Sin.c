/**
 * @brief Math sin lookup: piecewise sin from table at 0x800A5AF0, handles quadrants
 * @note Original: func_80083EBC at 0x80083EBC
 */
// Math_Sin



int FUN_80083ebc(int param_1)

{
  int iVar1;
  
  if (param_1 < 0x801) {
    if (param_1 < 0x401) {
      iVar1 = (int)*(short *)(&DAT_800a5af0 + param_1 * 2);
    }
    else {
      iVar1 = (int)*(short *)(&DAT_800a5af0 + (0x800 - param_1) * 2);
    }
  }
  else if (param_1 < 0xc01) {
    iVar1 = -(int)*(short *)(&DAT_800a4af0 + param_1 * 2);
  }
  else {
    iVar1 = -(int)*(short *)(&DAT_800a5af0 + (0x1000 - param_1) * 2);
  }
  return iVar1;
}
