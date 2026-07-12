/**
 * @brief Descriptive name auto-assigned
 * @note Original: func_80018400 at 0x80018400
 */
// Sys_DummyLoop



undefined4 Sys_DummyLoop(void)

{
  undefined4 local_10;
  
  *(undefined2 *)(DAT_80025668 + 10) = 0;
  local_10 = 9;
  do {
    local_10 = local_10 + -1;
  } while (local_10 != -1);
  return 0;
}
