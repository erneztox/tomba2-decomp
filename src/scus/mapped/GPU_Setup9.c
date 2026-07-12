/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80018C14 at 0x80018C14
 */
// GPU_Setup9



void GPU_Setup9(undefined4 param_1,undefined2 *param_2,undefined2 *param_3)

{
  bool bVar1;
  uint in_v0;
  uint in_v1;
  int iVar2;
  
  if ((in_v0 & in_v1) == 0) {
    DAT_80026784 = 0;
  }
  else {
    iVar2 = DAT_80026784 + 1;
    bVar1 = 0x800 < DAT_80026784;
    DAT_80026784 = iVar2;
    if (bVar1) {
                    /* WARNING: Subroutine does not return */
      GPU_Setup9(&DAT_80010504,*param_2,*param_3);
    }
  }
  DAT_800256ee = 0;
  GPU_Setup9();
  return;
}
