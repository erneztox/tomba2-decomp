// FUN_080170d8

void FUN_080170d8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x160) = 0;
  if ((param_3 == 0) && (*(byte *)(param_1 + 7) < 6)) {
                    /* WARNING: Could not emulate address calculation at 0x0801711c */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef69cc))();
    return;
  }
  if (*(int *)(param_1 + 0x158) != 0) {
    iVar2 = (int)((*(ushort *)(param_1 + 0x56) + 0x800) * 0x10000) >> 0x10;
    iVar1 = func_0x00083f50(iVar2);
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_2 + 0x2e) + (short)(iVar1 * *(short *)(param_1 + 0x152) >> 0xc);
    iVar1 = func_0x00083e80(iVar2);
    *(short *)(param_1 + 0x36) =
         *(short *)(param_2 + 0x36) - (short)(iVar1 * *(short *)(param_1 + 0x152) >> 0xc);
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_2 + 0x32) + *(short *)(param_1 + 0x156);
  return;
}

