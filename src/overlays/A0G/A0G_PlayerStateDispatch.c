// A0G_PlayerStateDispatch - Player state dispatch: 5 states via action_state

void A0G_PlayerStateDispatch(int param_1)

{
  if (param_1->behavior_state < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08011714 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->behavior_state * 4 + -0x7fef6f50))(&g_PlayerEntity);
    return;
  }
  return;
}

