/**
 * @brief Set system status bit
 * @note Original: func_80012E60 at 0x80012E60
 */
// Sys_SetStatus



void Sys_SetStatus(void)

{
  int in_at;
  int in_v0;
  undefined1 *in_v1;
  
  *in_v1 = *(undefined1 *)(in_at + in_v0 + 0x53fc);
  return;
}
