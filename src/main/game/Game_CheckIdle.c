/**
 * @brief Checks if game is idle: no dialogs active (0x800ED06D) and no event flag (0x800BF849)
 * @note Original: func_80042728 at 0x80042728
 */
// Game_CheckIdle



undefined4 FUN_80042728(void)

{
  undefined4 uVar1;
  
  if ((DAT_800ed06d != '\0') || (uVar1 = 1, DAT_800bf849 != '\0')) {
    uVar1 = 0;
  }
  return uVar1;
}
