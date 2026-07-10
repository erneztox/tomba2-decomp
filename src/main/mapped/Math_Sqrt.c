/**
 * @brief Integer square root via binary search algorithm
 * @note Original: func_80077FB0 at 0x80077FB0
 */
// Math_Sqrt



uint FUN_80077fb0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = -(uint)(0x3fffffff < param_1) & 0xffff8000;
  uVar3 = uVar1 + 0x4000;
  uVar2 = uVar3 & 0xc000;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar3;
  }
  uVar2 = uVar1 + 0x2000 & 0xffff;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar1 + 0x2000;
  }
  uVar2 = uVar1 + 0x1000 & 0xffff;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar1 + 0x1000;
  }
  uVar2 = uVar1 + 0x800 & 0xffff;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar1 + 0x800;
  }
  uVar2 = uVar1 + 0x400 & 0xffff;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar1 + 0x400;
  }
  uVar2 = uVar1 + 0x200 & 0xffff;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar1 + 0x200;
  }
  uVar2 = uVar1 + 0x100 & 0xffff;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar1 + 0x100;
  }
  uVar2 = uVar1 + 0x80 & 0xffff;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar1 + 0x80;
  }
  uVar2 = uVar1 + 0x40 & 0xffff;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar1 + 0x40;
  }
  uVar2 = uVar1 + 0x20 & 0xffff;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar1 + 0x20;
  }
  uVar2 = uVar1 + 0x10 & 0xffff;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar1 + 0x10;
  }
  uVar2 = uVar1 + 8 & 0xffff;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar1 + 8;
  }
  uVar2 = uVar1 + 4 & 0xffff;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar1 + 4;
  }
  uVar2 = uVar1 + 2 & 0xffff;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar1 + 2;
  }
  uVar2 = uVar1 + 1 & 0xffff;
  if (uVar2 * uVar2 <= param_1) {
    uVar1 = uVar1 + 1;
  }
  uVar3 = uVar1 & 0xffff;
  uVar2 = 0xffff;
  if ((uVar3 != 0xffff) && (uVar2 = uVar1 & 0xffff, uVar3 * uVar3 + uVar3 < param_1)) {
    uVar2 = uVar1 + 1 & 0xffff;
  }
  return uVar2;
}
