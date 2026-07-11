// SOP_EntityDispatcher (SOP_EntityDispatcher) - Jump table entity dispatcher: 7 sub-states via param+6

void SOP_EntityDispatcher(int param_1)

{
  if (param_1->action_state < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0000261c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->action_state * 4 + -0x7fef702c))();
    return;
  }
  return;
}

