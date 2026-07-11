/**
 * @brief Audio command setup: builds 2-word cmd with param*0x81, sends via struct
 * @note Original: func_80090700 at 0x80090700
 */
// Audio_SetupCmd



void FUN_80090700(s16 param_1,s16 param_2)

{
  s32 local_30;
  s16 local_2c;
  s16 local_2a;
  
  local_30 = 3;
  local_2c = param_1 * 0x81;
  local_2a = param_2 * 0x81;
  FUN_80099490(&local_30);
  return;
}
