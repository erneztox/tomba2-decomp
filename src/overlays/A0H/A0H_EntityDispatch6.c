// A0H_EntityDispatch6 - Entity state dispatch: 6 sub-states

void A0H_EntityDispatch6(int param_1)

{
  if (param_1->behavior_state < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08011488 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->behavior_state * 4 + -0x7fef6f3c))();
    return;
  }
  return;
}

