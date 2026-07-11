/**
 * @brief Increments global counter at 0x800BF87E with upper limit cap
 * @note Original: func_80026100 at 0x80026100
 */
// Sys_IncCounter



void FUN_80026100(s8 param_1)

{
  g_ItemMax = g_ItemMax + param_1;
  if (g_ItemFlag < g_ItemMax) {
    g_ItemMax = g_ItemFlag;
  }
  DAT_800ed065 = DAT_800ed065 | 1;
  return;
}
