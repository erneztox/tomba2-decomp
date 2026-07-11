/**
 * @brief Circular motion: cos/sin on entity[0x44] angle, offset from entity[0x4E/0x50/0x52], advance angle 0x20
 * @note Original: func_80070E60 at 0x80070E60
 */
// Entity_MoveInCircle



void FUN_80070e60(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_80083f50((int)*(short *)(param_1 + 0x44));
  iVar1 = iVar1 * 0x18;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x4e) + (short)(iVar1 >> 0xc);
  iVar1 = FUN_80083e80((int)*(short *)(param_1 + 0x44) << 1);
  iVar1 = iVar1 * 0x18;
  if (iVar1 < 0) {
    iVar1 = iVar1 + 0xfff;
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x50) + (short)(iVar1 >> 0xc);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x52);
  *(ushort *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + 0x20U & 0xfff;
  return;
}
