// OPN_StateDispatch (OPN_StateDispatch) - State dispatcher: 12 states via entity field_0x03

void OPN_StateDispatch(int param_1)

{
  if (*(byte *)(param_1 + 3) < 0xc) {
                    /* WARNING: Could not emulate address calculation at 0x00000cbc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 3) * 4 + -0x7fe75fbc))();
    return;
  }
  return;
}

