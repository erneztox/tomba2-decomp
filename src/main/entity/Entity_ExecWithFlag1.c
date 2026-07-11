/**
 * @brief Wraps entity script execution with flag=1 parameter
 * @note Original: func_80043E9C at 0x80043E9C
 */
// Entity_ExecWithFlag1



void Entity_ExecWithFlag1(s32 param_1)

{
  Entity_StateTrigger(param_1,1);
  return;
}
