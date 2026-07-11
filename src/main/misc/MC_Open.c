/**
 * @brief Opens memory card file by name
 * @note Original: func_80097498 at 0x80097498
 */
// MC_Open



s32 FUN_80097498(s32 param_1,s32 param_2)

{
  FUN_80097194(2,(uint)DAT_800ac61c << (DAT_800ac62c & 0x1f));
  FUN_80097194(0);
  FUN_80097194(3,param_1,param_2);
  return param_2;
}
