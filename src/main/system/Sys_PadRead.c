/**
 * @brief Controller pad read wrapper: calls low-level pad polling function
 * @note Original: func_8001CE90 at 0x8001CE90
 */
// Sys_PadRead



void Sys_PadRead(u8 param_1)

{
  CD_ReadRequest(param_1);
  return;
}
