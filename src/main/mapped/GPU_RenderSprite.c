/**
 * @brief GPU sprite renderer: dispatches via function table at 0x80017334 + param index
 * @note Original: func_8007E8DC at 0x8007E8DC
 */
// GPU_RenderSprite



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8007e8dc(undefined2 param_1,undefined2 param_2,undefined1 param_3,int param_4)

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
  local_17 = param_3;
  local_10 = param_1;
  local_e = param_2;
  FUN_8007e1b8(&local_10,*(undefined4 *)((int)&PTR_DAT_80017334 + ((param_4 << 0x10) >> 0xe)),
               _DAT_800ecf58,&local_18);
  return;
}
