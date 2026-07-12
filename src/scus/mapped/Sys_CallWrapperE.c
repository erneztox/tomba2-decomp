/**
 * @brief Syscall wrapper E
 * @note Original: func_80012954 at 0x80012954
 */
// Sys_CallWrapperE



void Sys_CallWrapperE(void)

{
  int in_v0;
  int in_v1;
  
  if (*(int *)(in_v1 + -0x7b68) + 200 < in_v0) {
    DAT_80025444 = 5;
    Sys_CallWrapperE(10);
    DAT_80025454 = 0xf;
  }
  Sys_CallWrapperE();
  return;
}
