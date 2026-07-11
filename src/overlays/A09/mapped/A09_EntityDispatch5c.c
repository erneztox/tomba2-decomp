// A09_EntityDispatch5c - Entity dispatch: 5 states via entity state

void A09_EntityDispatch5c(int param_1)

{
  if (*(byte *)(param_1 + 4) < 5) {
                    /* WARNING: Could not emulate address calculation at 0x080126fc */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 4) * 4 + -0x7fef6fb8))();
    return;
  }
  return;
}

