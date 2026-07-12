/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80017FEC at 0x80017FEC
 */
// Sys_EmptyStub17FEC



void Sys_EmptyStub17FEC(uint *param_1,uint *param_2)

{
  *param_2 = *param_2 & 0xff000000 | *param_1 & 0xffffff;
  *param_1 = *param_1 & 0xff000000 | (uint)param_2 & 0xffffff;
  return;
}
