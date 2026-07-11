/**
 * @brief Decrements entity timer: entity[0x16E] -= param2, sets DAT_800bf80d=0xFF on expire
 * @note Original: func_80022C0C at 0x80022C0C
 */
// Entity_DecrementTimer



undefined4 FUN_80022c0c(byte *param_1,int param_2)

{
  ushort uVar1;
  
  if (DAT_800bfe55 == '\0') {
    *param_1 = *param_1 | 2;
    if (*(short *)(param_1 + 0x17e) < 0) {
      param_2 = param_2 << 1;
    }
    uVar1 = *(ushort *)(param_1 + 0x16e);
    *(short *)(param_1 + 0x16e) = (short)((uint)uVar1 - param_2);
    if ((int)(((uint)uVar1 - param_2) * 0x10000) < 1) {
      param_1[0x16e] = 0;
      param_1[0x16f] = 0;
      DAT_800bf80d = 0xff;
    }
    DAT_800bf81e = 0;
    return 1;
  }
  return 0;
}
