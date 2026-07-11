/**
 * @brief Level-specific init dispatch from function table at 0x800A4AF8
 * @note Original: func_8006C77C at 0x8006C77C
 */
// Engine_DispatchInit



void FUN_8006c77c(void)

{
  if (DAT_800bf870 != 3) {
    (**(code **)(&DAT_800a4af8 + (uint)DAT_800bf870 * 4))();
  }
  return;
}
