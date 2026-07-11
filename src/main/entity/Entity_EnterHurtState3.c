/**
 * @brief Wrapper: Entity_EnterHurtState then sets g_HurtState = 3
 * @note Original: func_80073300 at 0x80073300
 */
// Entity_EnterHurtState3



void FUN_80073300(void)

{
  FUN_80073260();
  g_HurtState = 3;
  return;
}
