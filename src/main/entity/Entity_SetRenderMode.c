/**
 * @brief Entity render mode setter: sets entity[0xB] flags based on param (0x80/0x20 or 0x10/0x40)
 * @note Original: func_80052144 at 0x80052144
 */
// Entity_SetRenderMode



undefined2 FUN_80052144(byte param_1,short param_2)

{
  undefined2 uVar1;
  undefined2 uVar2;
  
  if (param_2 == 0) {
    uVar1 = 0x80;
    uVar2 = 0x20;
  }
  else {
    uVar1 = 0x10;
    uVar2 = 0x40;
  }
  if ((0x57 < param_1) && (uVar1 = 0, 0xa8 < param_1)) {
    uVar1 = uVar2;
  }
  return uVar1;
}
