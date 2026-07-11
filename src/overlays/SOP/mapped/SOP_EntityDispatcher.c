// SOP_EntityDispatcher (SOP_EntityDispatcher) - Jump table entity dispatcher: 7 sub-states via param+6

void SOP_EntityDispatcher(int param_1)

{
  if (*(byte *)(param_1 + 6) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x0000261c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef702c))();
    return;
  }
  return;
}

