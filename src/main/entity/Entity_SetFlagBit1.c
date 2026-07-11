/**
 * @brief Entity flag bit 1 set/clear: entity[7] bit 1 toggled by param_2
 * @note Original: func_80083C70 at 0x80083C70
 */
// Entity_SetFlagBit1



void FUN_80083c70(int param_1,int param_2)

{
  byte bVar1;
  
  if (param_2 == 0) {
    bVar1 = *(byte *)(param_1 + 7) & 0xfd;
  }
  else {
    bVar1 = *(byte *)(param_1 + 7) | 2;
  }
  *(byte *)(param_1 + 7) = bVar1;
  return;
}
