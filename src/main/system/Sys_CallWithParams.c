/**
 * @brief Calls system function at 0x800521F4 with 4 byte parameters
 * @note Original: func_800521F4 at 0x800521F4
 */
// Sys_CallWithParams



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800521f4(undefined1 param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  if ((((DAT_1f80019a != '\x01') && (DAT_800fb167 == '\0')) && (_DAT_800ecf4a != 0)) &&
     ((DAT_800ecf4e == '\0' && (_DAT_800ecf4c == 0)))) {
    _DAT_800ecf4c = CONCAT11(param_3,param_2);
    FUN_80087eac(param_1,&DAT_800ecf4c,2);
    DAT_800ecf4e = '\x01';
    DAT_800ecf4f = param_4;
  }
  return;
}
