/**
 * @brief Submits entity draw data via FUN_8007e1b8 with data table lookup
 * @note Original: func_800262D8 at 0x800262D8
 */
// Entity_SubmitDraw



void FUN_800262d8(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  FUN_8007e1b8(param_2,*(undefined4 *)((int)&PTR_DAT_80017334 + ((param_4 << 0x10) >> 0xe)),
               *(undefined4 *)(param_1 + 0x3c),param_3);
  return;
}
