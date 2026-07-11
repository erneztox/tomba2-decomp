// OPN_EntityDispatch (OPN_EntityDispatch) - Entity dispatcher: 15 states via entity field_0x06 (color_mode)

void OPN_EntityDispatch(int param_1)

{
  if (param_1->action_state < 0xf) {
                    /* WARNING: Could not emulate address calculation at 0x00000338 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->action_state * 4 + -0x7fe75ffc))();
    return;
  }
  return;
}

