// A09_PlayerStateDispatch - Player state dispatch: 7 states

void A09_PlayerStateDispatch(int param_1)

{
  if (*(byte *)(param_1 + 5) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08011484 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef7004))(&DAT_800e7e80);
    return;
  }
  return;
}

