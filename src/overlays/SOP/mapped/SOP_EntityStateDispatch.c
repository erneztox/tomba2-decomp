// SOP_EntityStateDispatch (SOP_EntityStateDispatch) - Entity state jump table dispatcher: 8 sub-states via param+0x78

undefined4 SOP_EntityStateDispatch(int param_1)

{
  undefined4 uVar1;
  
  if (*(byte *)(param_1 + 0x78) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00001994 */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)((uint)*(byte *)(param_1 + 0x78) * 4 + -0x7fef704c))();
    return uVar1;
  }
  return 0;
}

