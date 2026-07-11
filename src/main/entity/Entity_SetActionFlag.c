/**
 * @brief Sets action flag: if 0x800BF816 set, calls 0x8005444C; else clears flags
 * @note Original: func_80065478 at 0x80065478
 */
// Entity_SetActionFlag



void FUN_80065478(int param_1,int param_2)

{
  if ((DAT_800bf816 == '\0') || (param_2 == 0)) {
    *(undefined2 *)(param_1 + 0x16c) = 0;
    param_1->type_flags = 0;
    param_1->collision_state = 1;
  }
  else {
    FUN_8005444c(param_1);
    FUN_80056c00(param_1,1);
  }
  return;
}
