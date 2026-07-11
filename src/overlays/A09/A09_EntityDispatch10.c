// A09_EntityDispatch10 - Entity dispatch: 10 states via color_mode

void A09_EntityDispatch10(int param_1)

{
  if (param_1->flags != '\0') {
    Entity_AnimFrame();
  }
  if (param_1->action_state < 10) {
                    /* WARNING: Could not emulate address calculation at 0x08010878 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->action_state * 4 + -0x7fef7040))();
    return;
  }
  return;
}

