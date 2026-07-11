// A0G_PlayerStateDispatch - Player state dispatch: 5 states via action_state

void A0G_PlayerStateDispatch(int param_1)

{
  if (*(byte *)(param_1 + 5) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08011714 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6f50))(&DAT_800e7e80);
    return;
  }
  return;
}

