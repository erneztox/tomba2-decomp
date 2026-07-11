// A0G_EntityDispatch6 - Entity dispatch: 6 states via field_0x5e

void A0G_EntityDispatch6(int param_1)

{
  if (param_1->flag_5E < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08011884 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->flag_5E * 4 + -0x7fef6f38))();
    return;
  }
  return;
}

