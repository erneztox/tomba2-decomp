/**
 * @brief Wraps entity script execution with flag=0 parameter
 * @note Original: func_80043EBC at 0x80043EBC
 */
// Entity_ExecWithFlag0



void Entity_ExecWithFlag0(s32 param_1)

{
  Entity_StateTrigger(param_1,0);
  return;
}
