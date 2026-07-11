/**
 * @brief Checks if animation ended: entity->anim_check < 1, calls FUN_80041718(0,2)
 * @note Original: func_80070830 at 0x80070830
 */
// Entity_CheckAnimEnd



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_80070830(void)

{
  bool bVar1;
  
  bVar1 = _DAT_1f800214->anim_check < '\x01';
  if (bVar1) {
    FUN_80041718(_DAT_1f800214,0,2);
  }
  return bVar1;
}
