/**
 * @brief Camera shake effect: toggles sub-entity position with random offset every 16 frames
 * @note Original: func_8003FD10 at 0x8003FD10
 */
// Entity_Behavior_Shake



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8003fd10(int param_1)

{
  short sVar1;
  ushort uVar2;
  
  if (param_1->action_state == '\0') {
    if (param_1->move_mode != '\0') {
      param_1->action_state = 1;
      param_1->move_mode = 0;
      param_1->timer1 = 0x10;
    }
  }
  else if (param_1->action_state == '\x01') {
    if (param_1->move_mode != '\0') {
      param_1->move_mode = 0;
      param_1->timer1 = 0x10;
    }
    sVar1 = param_1->timer1 + -1;
    param_1->timer1 = sVar1;
    if (sVar1 == -1) {
      param_1->action_state = param_1->action_state + -1;
    }
    *(ushort *)(param_1->sprite_ptr1 + 2) = (_DAT_1f80017c & 1) * 6;
    uVar2 = FUN_8009a450();
    **(short **)(param_1 + 0xc0) = ((uVar2 & 3) - 2) * 6;
  }
  return;
}
