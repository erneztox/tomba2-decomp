// A09_PlayerStateDispatch - Player state dispatch: 7 states

void A09_PlayerStateDispatch(int param_1)

{
  if (param_1->behavior_state < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08011484 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->behavior_state * 4 + -0x7fef7004))(&g_PlayerEntity);
    return;
  }
  return;
}

