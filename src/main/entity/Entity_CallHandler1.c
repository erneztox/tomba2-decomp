/**
 * @brief Wraps entity handler call with flag 1
 * @note Original: func_8002421C at 0x8002421C
 */
// Entity_CallHandler1



void Entity_CallHandler1(s32 param_1,s32 param_2)

{
  Entity_MoveTarget(param_1,param_2,1);
  return;
}
