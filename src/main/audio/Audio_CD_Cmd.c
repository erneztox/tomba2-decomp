/**
 * @brief Audio CD command: calls FUN_80093ebc(0x21, param1, param2, param3)
 * @note Original: func_80094108 at 0x80094108
 */
// Audio_CD_Cmd



void FUN_80094108(s16 param_1,s16 param_2,s16 param_3)

{
  FUN_80093ebc(0x21,(int)param_1,(int)param_2,param_3);
  return;
}
