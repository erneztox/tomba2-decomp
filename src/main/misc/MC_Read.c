/**
 * @brief Reads data from memory card file
 * @note Original: func_800974FC at 0x800974FC
 */
// MC_Read



void FUN_800974fc(int param_1,uint param_2,int param_3)

{
  if (param_3 == 0) {
    *(short *)(param_1 * 2 + DAT_800ac604) = (short)param_2;
  }
  else {
    *(short *)(param_1 * 2 + DAT_800ac604) = (short)(param_2 >> (DAT_800ac62c & 0x1f));
  }
  return;
}
