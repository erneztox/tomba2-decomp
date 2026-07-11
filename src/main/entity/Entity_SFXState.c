/**
 * @brief Entity SFX state machine: switch on g_SFXState & 0xF, plays sounds
 * @note Original: func_8006F04C at 0x8006F04C
 */
// Entity_SFXState



void FUN_8006f04c(void)

{
  uint uVar1;
  
  if ((g_SFXState & 0x80) == 0) {
    return;
  }
  uVar1 = g_SFXState & 0xf;
  switch(uVar1) {
  case 0:
  case 1:
  case 6:
    if (*(u8 *)(uVar1 + 0x800bfe3a) < 3) {
      *(u8 *)(uVar1 + 0x800bfe3a) = *(u8 *)(uVar1 + 0x800bfe3a) + 1;
      g_SFXState = 0;
      return;
    }
    break;
  default:
    goto LAB_8006f0d4;
  case 7:
  case 8:
    FUN_8006f02c(uVar1);
  }
  FUN_8006f00c(uVar1);
LAB_8006f0d4:
  g_SFXState = 0;
  return;
}
