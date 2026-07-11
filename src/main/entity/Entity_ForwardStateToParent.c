/**
 * @brief Forwards entity->behavior_state state check to parent entity
 * @note Original: func_80041FF8 at 0x80041FF8
 */
// Entity_ForwardStateToParent



void FUN_80041ff8(int param_1)

{
  FUN_80041fcc(param_1->parent);
  return;
}
