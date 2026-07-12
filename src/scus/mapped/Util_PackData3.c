/**
 * @brief Packs 3 bytes into a 32-bit integer
 * @note Original: func_80013BCC at 0x80013BCC
 */
// Util_PackData3



void Util_PackData3(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  Util_PackData3(&DAT_80010258,param_1);
  (**(code **)(DAT_8002550c + 8))
            (*(undefined4 *)(DAT_8002550c + 0xc),param_1,8,
             (param_4 & 0xff) << 0x10 | (param_3 & 0xff) << 8 | param_2 & 0xff);
  return;
}
