// A09_EntityDispatch5d - Entity dispatch: 5 states

void A09_EntityDispatch5d(int param_1)

{
  if (param_1->state < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08013754 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->state * 4 + -0x7fef6fa4))();
    return;
  }
  return;
}

