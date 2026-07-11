/**
 * @brief Second level init dispatch from function table at 0x800A4B50
 * @note Original: func_8006C7C4 at 0x8006C7C4
 */
// Engine_DispatchInit2



void FUN_8006c7c4(void)

{
  if (DAT_800bf870 != 3) {
    (**(code **)(&DAT_800a4b50 + (uint)DAT_800bf870 * 4))();
  }
  return;
}
