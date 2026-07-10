/**
 * @brief Submits entity draw data via FUN_8007e6dc with data table lookup
 * @note Original: func_80026320 at 0x80026320
 */
// Entity_SubmitDraw2



void FUN_80026320(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  FUN_8007e6dc(param_2,*(undefined4 *)((int)&PTR_DAT_80017334 + ((param_4 << 0x10) >> 0xe)),
               *(undefined4 *)(param_1 + 0x3c),param_3);
  return;
}
