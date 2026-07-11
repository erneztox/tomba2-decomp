/**
 * @brief CD state reset: clears CD regs at 0x800AD098, zeros buffers at DAT_800acf54/cfd8
 * @note Original: func_8009C8E0 at 0x8009C8E0
 */
// CD_ResetState



void FUN_8009c8e0(int param_1)

{
  if (param_1 == 0) {
    *g_CD_Status = 0x80000000;
    *g_CD_IRQ = 0;
    *g_CD_Control = 0;
    *g_CD_Status = 0x60000000;
    FUN_8009c9d0(&DAT_800acf54,0x20);
    FUN_8009c9d0(&DAT_800acfd8,0x20);
  }
  else if (param_1 == 1) {
    *g_CD_Status = 0x80000000;
    *g_CD_IRQ = 0;
    *g_CD_Control = 0;
    *g_CD_Status = 0x60000000;
  }
  else {
    FUN_8009a730(s_MDEC_rest_bad_option__d__8001ca70);
  }
  return;
}
