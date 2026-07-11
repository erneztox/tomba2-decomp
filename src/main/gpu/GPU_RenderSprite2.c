/**
 * @brief Renders sprite variant 2: calls FUN_8007e6dc with function table lookup at 0x80017334
 * @note Original: func_8007E938 at 0x8007E938
 */
// GPU_RenderSprite2



void FUN_8007e938(undefined4 param_1,undefined2 param_2,undefined2 param_3,undefined1 param_4,
                 int param_5)

{
  undefined1 local_18;
  undefined1 local_17;
  undefined2 local_16;
  undefined2 local_10;
  undefined2 local_e;
  undefined4 local_c;
  
  local_18 = 0;
  local_16 = 0;
  local_c = 0;
  local_17 = param_4;
  local_10 = param_2;
  local_e = param_3;
  FUN_8007e6dc(&local_10,*(undefined4 *)((int)&PTR_DAT_80017334 + ((param_5 << 0x10) >> 0xe)),
               param_1,&local_18);
  return;
}
