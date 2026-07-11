/**
 * @brief Enters hurt state variant 1: calls EnterHurtState, sets DAT_800bf818=1, saves entity[3]
 * @note Original: func_800732C0 at 0x800732C0
 */
// Entity_EnterHurtState1



void FUN_800732c0(int param_1)

{
  FUN_80073260();
  DAT_800bf818 = 1;
  DAT_800bf817 = *(undefined1 *)(param_1 + 3);
  return;
}
