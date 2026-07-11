/**
 * @brief Applies velocity vector (entity[0x44-0x4C]) to entity position
 * @note Original: func_80056B48 at 0x80056B48
 */
// Entity_ApplyVelocity



void FUN_80056b48(int param_1,int param_2)

{
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
  if (param_2 == 0) {
    *(int *)(param_1 + 0x30) =
         *(int *)(param_1 + 0x30) +
         (int)*(short *)(param_1 + 0x4a) * (int)*(short *)(param_1 + 0x44);
  }
  if ((*(char *)(param_1 + 0x16b) == '\0') && (*(char *)(param_1 + 0x61) == '\0')) {
    FUN_80054650(param_1,0);
  }
  else {
    *(byte *)(param_1 + 0x5f) = *(byte *)(param_1 + 0x5f) & 0xfb;
  }
  return;
}
