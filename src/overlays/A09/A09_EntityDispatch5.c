// A09_EntityDispatch5 - Entity dispatch: 5 states

void A09_EntityDispatch5(int param_1)

{
  if (param_1->behavior_state < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08011be8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->behavior_state * 4 + -0x7fef6fe8))();
    return;
  }
  return;
}

