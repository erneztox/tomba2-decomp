// FUN_801201c4

void FUN_801201c4(int param_1)

{
  int iVar1;
  
  iVar1 = func_0x8007778c();
  if (iVar1 != 0) {
    if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Jumptable at 0x80120208 did not pass sanity check. */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef63bc))();
      return;
    }
    *(short *)(*(int *)(param_1 + 0xc0) + 0xc) =
         *(short *)(*(int *)(param_1 + 0xc0) + 0xc) + *(short *)(param_1 + 0x94);
    func_0x800517f8(param_1);
  }
  return;
}

