/**
 * @brief Opens memory card file by name
 * @note Original: func_80097498 at 0x80097498
 */
// MC_Open



undefined4 FUN_80097498(undefined4 param_1,undefined4 param_2)

{
  FUN_80097194(2,(uint)DAT_800ac61c << (DAT_800ac62c & 0x1f));
  FUN_80097194(0);
  FUN_80097194(3,param_1,param_2);
  return param_2;
}
