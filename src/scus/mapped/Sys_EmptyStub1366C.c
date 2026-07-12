/**
 * @brief Empty stub function
 * @note Original: func_8001366C at 0x8001366C
 */
// Sys_EmptyStub1366C



undefined4 Sys_EmptyStub1366C(int param_1,int param_2)

{
  *(uint *)(*(int *)(param_2 + 0x54a4) + 4) =
       *(uint *)(*(int *)(param_2 + 0x54a4) + 4) & ~*(uint *)(&DAT_800254ac + param_1);
  return 1;
}
