/**
 * @brief Dispatches overlay call by game state: 0, 5, 6 each call different overlay functions
 * @note Original: func_80065374 at 0x80065374
 */
// Game_DispatchOverlayCall



void FUN_80065374(void)

{
  if (DAT_800bf870 == 5) {
    func_0x80110cb8();
  }
  else if (DAT_800bf870 < 6) {
    if (DAT_800bf870 == 0) {
      func_0x8010aecc();
    }
  }
  else if (DAT_800bf870 == 6) {
    func_0x80113e3c();
  }
  return;
}
