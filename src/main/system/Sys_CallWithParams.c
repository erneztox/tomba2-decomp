/**
 * @brief Calls system function at 0x800521F4 with 4 u8 parameters
 * @note Original: func_800521F4 at 0x800521F4
 */
// Sys_CallWithParams



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Sys_CallWithParams(u8 param_1,u8 param_2,u8 param_3,u8 param_4)

{
  if ((((g_EngineState != '\x01') && (DAT_800fb167 == '\0')) && (_g_RenderFlag != 0)) &&
     ((DAT_800ecf4e == '\0' && (_DAT_800ecf4c == 0)))) {
    _DAT_800ecf4c = CONCAT11(param_3,param_2);
    MDEC_InitDecode(param_1,&DAT_800ecf4c,2);
    DAT_800ecf4e = '\x01';
    DAT_800ecf4f = param_4;
  }
  return;
}
