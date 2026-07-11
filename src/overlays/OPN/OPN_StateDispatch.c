// OPN_StateDispatch (OPN_StateDispatch) - State dispatcher: 12 states via entity field_0x03

void OPN_StateDispatch(int param_1)

{
  if (param_1->sub_type < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x08010cbc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)param_1->sub_type * 4 + -0x7fe75fbc))();
    return;
  }
  return;
}

