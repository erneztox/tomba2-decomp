// A0I_EntityDispatch6 - Entity state dispatcher: 6 sub-states via action_state

void A0I_EntityDispatch6(int param_1)

{
  if (param_1->behavior_state < 6) {
                    /* WARNING: Could not emulate address calculation at 0x080118d4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->behavior_state * 4 + -0x7fef6f28))();
    return;
  }
  return;
}

