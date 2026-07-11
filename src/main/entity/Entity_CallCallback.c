/**
 * @brief Calls function pointer stored at entity[0x74] as callback
 * @note Original: func_800412CC at 0x800412CC
 */
// Entity_CallCallback



void Entity_CallCallback(int param_1)

{
  (**(code **)(param_1 + 0x74))();
  return;
}
