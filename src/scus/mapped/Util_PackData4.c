/**
 * @brief Packs 3 bytes into a 32-bit integer with 0x80000000 flag
 * @note Original: func_80013C5C at 0x80013C5C
 */
// Util_PackData4



void Util_PackData4(undefined4 param_1,uint param_2,uint param_3,uint param_4)

{
  Util_PackData4(&DAT_80010264,param_1);
  (**(code **)(DAT_8002550c + 8))
            (*(undefined4 *)(DAT_8002550c + 0xc),param_1,8,
             (param_4 & 0xff) << 0x10 | (param_3 & 0xff) << 8 | 0x80000000 | param_2 & 0xff);
  return;
}
