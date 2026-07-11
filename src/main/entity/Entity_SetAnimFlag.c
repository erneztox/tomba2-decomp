/**
 * @brief Sets entity->collision_state=1 if animation check passes
 * @note Original: func_80023764 at 0x80023764
 */
// Entity_SetAnimFlag



void FUN_80023764(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_8001f830();
  if (iVar1 != 0) {
    param_2->collision_state = 1;
  }
  return;
}
