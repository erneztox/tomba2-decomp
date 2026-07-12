/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_800192A8 at 0x800192A8
 */
// GPU_MemClear2



void GPU_MemClear2(uint param_1,uint *param_2,int param_3)

{
  uint in_v0;
  
  *param_2 = param_1 & in_v0 | 1 << (param_3 + 0x10U & 0x1f) | 0x800000U;
                    /* WARNING: Subroutine does not return */
  GPU_MemClear2(&DAT_800104e8,*DAT_80026778);
}
