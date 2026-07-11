/**
 * @brief GPU draw environment: sends DrawEnv cmd with debug, decrements queue
 * @note Original: func_80081690 at 0x80081690
 */
// GPU_DrawEnv



void FUN_80081690(uint param_1,int param_2)

{
  undefined *puVar1;
  
  if (1 < DAT_800a59a2) {
    (*(code *)PTR_FUN_800a599c)(s_DrawOTagEnv__08x__08x_____8001bfac,param_1,param_2);
  }
  FUN_80081fb0(param_2 + 0x1c,param_2);
  puVar1 = PTR_PTR_800a5998;
  param_2->callback = param_2->callback & 0xff000000 | param_1 & 0xffffff;
  (**(code **)(puVar1 + 8))(puVar1->script_data,param_2 + 0x1c,0x40,0);
  FUN_8009a3e0(&DAT_800a59b0,param_2,0x5c);
  return;
}
