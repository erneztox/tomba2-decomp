// A0I_EntityDispatch5 - Entity state dispatcher: 5 sub-states via color_mode

void A0I_EntityDispatch5(int param_1)

{
  if (param_1->action_state < 5) {
                    /* WARNING: Could not emulate address calculation at 0x08011014 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->action_state * 4 + -0x7fef6f3c))();
    return;
  }
  Entity_State_Physics(param_1);
  return;
}

