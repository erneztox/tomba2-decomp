// A09_EntityDispatch5b - Entity dispatch variant: 5 states

void A09_EntityDispatch5b(int param_1)

{
  if (param_1->behavior_state < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08012050 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->behavior_state * 4 + -0x7fef6fd0))();
    return;
  }
  return;
}

