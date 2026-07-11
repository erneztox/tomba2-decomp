/**
 * @brief Wrapper: Entity_EnterHurtState then sets DAT_800bf818 = 3
 * @note Original: func_80073300 at 0x80073300
 */
// Entity_EnterHurtState3



void FUN_80073300(void)

{
  FUN_80073260();
  DAT_800bf818 = 3;
  return;
}
