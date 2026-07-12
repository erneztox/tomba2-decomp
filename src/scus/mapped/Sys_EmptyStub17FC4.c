/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80017FC4 at 0x80017FC4
 */
// Sys_EmptyStub17FC4



uint Sys_EmptyStub17FC4(int param_1,uint param_2)

{
  return (param_2 & 0x3ff) << 6 | param_1 >> 4 & 0x3fU;
}
