
void FUN_800192a8(uint param_1,uint *param_2,int param_3)

{
  uint in_v0;
  
  *param_2 = param_1 & in_v0 | 1 << (param_3 + 0x10U & 0x1f) | 0x800000U;
                    /* WARNING: Subroutine does not return */
  FUN_8001e5ec(&DAT_800104e8,*DAT_80026778);
}

