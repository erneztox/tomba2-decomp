// A09_EntityDispatch5c - Entity dispatch: 5 states via entity state

void A09_EntityDispatch5c(int param_1)

{
  if (param_1->state < 5) {
                    /* WARNING: Could not emulate address calculation at 0x080126fc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->state * 4 + -0x7fef6fb8))();
    return;
  }
  return;
}

