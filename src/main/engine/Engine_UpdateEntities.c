/**
 * @brief Calls EntityLoop_Player then EntityLoop_Active for entity updates
 * @note Original: func_8003FA1C at 0x8003FA1C
 */
// Engine_UpdateEntities



void Engine_UpdateEntities(void)

{
  EntityLoop_Player();
  EntityLoop_Active();
  return;
}
