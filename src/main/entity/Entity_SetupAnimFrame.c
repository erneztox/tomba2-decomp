/**
 * @brief Sets up animation frame with offset: calls 0x80075FF8, sets entity[0xE]
 * @note Original: func_80077E3C at 0x80077E3C
 */
// Entity_SetupAnimFrame



void FUN_80077e3c(int param_1,undefined4 param_2,short param_3)

{
  FUN_80075ff8(param_1,param_2,(int)param_3);
  *(short *)(param_1 + 0xe) = param_3 + 0x1000;
  return;
}
