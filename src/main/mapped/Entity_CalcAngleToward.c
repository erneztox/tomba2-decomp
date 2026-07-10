/**
 * @brief Calculates rotation angle from entity toward target entity
 * @note Original: func_8004130C at 0x8004130C
 */
// Entity_CalcAngleToward



undefined4 FUN_8004130c(int param_1,int param_2)

{
  ushort uVar1;
  
  if (*(char *)(param_1 + 0xbe) == '\0') {
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(param_1 + 0x60);
    if (param_2 == 0) {
      return 1;
    }
    uVar1 = *(short *)(param_1 + 0x62) >> 1;
  }
  else {
    *(ushort *)(param_1 + 0x56) = *(short *)(param_1 + 0x60) - 0x800U & 0xfff;
    if (param_2 == 0) {
      return 1;
    }
    uVar1 = 0x1000U - (*(short *)(param_1 + 0x62) >> 1) & 0xfff;
  }
  *(ushort *)(param_1 + 0x58) = uVar1;
  return 1;
}
