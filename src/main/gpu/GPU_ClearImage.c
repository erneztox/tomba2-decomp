/**
 * @brief GPU clear image: sends ClearImage cmd via function pointer table at 0x800A5998
 * @note Original: func_800810F0 at 0x800810F0
 */
// GPU_ClearImage



void GPU_ClearImage(s32 param_1,uint param_2,uint param_3,uint param_4)

{
  GPU_SetupPacket(s_ClearImage_8001bf14,param_1);
  (**(code **)(PTR_PTR_800a5998 + 8))
            (*(s32 *)(PTR_PTR_800a5998 + 0xc),param_1,8,
             (param_4 & 0xff) << 0x10 | (param_3 & 0xff) << 8 | param_2 & 0xff);
  return;
}
