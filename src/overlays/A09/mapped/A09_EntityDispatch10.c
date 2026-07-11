// A09_EntityDispatch10 - Entity dispatch: 10 states via color_mode

void A09_EntityDispatch10(int param_1)

{
  if (*(char *)(param_1 + 1) != '\0') {
    func_0x00076d68();
  }
  if (*(byte *)(param_1 + 6) < 10) {
                    /* WARNING: Could not emulate address calculation at 0x08010878 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef7040))();
    return;
  }
  return;
}

