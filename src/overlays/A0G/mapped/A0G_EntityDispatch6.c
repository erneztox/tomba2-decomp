// A0G_EntityDispatch6 - Entity dispatch: 6 states via field_0x5e

void A0G_EntityDispatch6(int param_1)

{
  if (*(byte *)(param_1 + 0x5e) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x08011884 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 0x5e) * 4 + -0x7fef6f38))();
    return;
  }
  return;
}

