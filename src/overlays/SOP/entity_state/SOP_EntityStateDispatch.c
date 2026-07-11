// SOP_EntityStateDispatch (SOP_EntityStateDispatch) - Entity state jump table dispatcher: 8 sub-states via param+0x78

s32 SOP_EntityStateDispatch(int param_1)

{
  s32 uVar1;
  
  if (param_1->sub_state < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08011994 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)param_1->sub_state * 4 + -0x7fef704c))();
    return uVar1;
  }
  return 0;
}

