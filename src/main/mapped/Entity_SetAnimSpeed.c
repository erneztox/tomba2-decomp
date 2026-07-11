/**
 * @brief Sets entity animation speed from table 0x800A4A6C by type and state
 * @note Original: func_80069634 at 0x80069634
 */
// Entity_SetAnimSpeed



void FUN_80069634(int param_1)

{
  *(undefined2 *)(param_1 + 0x44) =
       *(undefined2 *)
        (&DAT_800a4a6c + (uint)*(byte *)(param_1 + 0x5e) * 2 + (*(byte *)(param_1 + 2) - 1) * 4);
  if (*(char *)(param_1 + 0x5e) != '\0') {
    *(undefined2 *)(param_1 + 0x40) = 2;
    return;
  }
  *(undefined2 *)(param_1 + 0x40) = 1;
  return;
}
