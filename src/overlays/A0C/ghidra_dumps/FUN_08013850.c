// FUN_08013850

void FUN_08013850(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  *(undefined1 *)(param_1 + 0x160) = 0;
  if ((param_3 == 0) && (*(byte *)(param_1 + 7) < 7)) {
                    /* WARNING: Could not emulate address calculation at 0x08013894 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 7) * 4 + -0x7fef7020))();
    return;
  }
  iVar3 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0x158) != 0) {
    iVar2 = (int)((*(ushort *)(param_1 + 0x56) + 0x800) * 0x10000) >> 0x10;
    iVar1 = func_0x00083f50(iVar2);
    *(short *)(param_1 + 0x2e) =
         *(short *)(iVar3 + 0x2c) + (short)(iVar1 * *(short *)(param_1 + 0x152) >> 0xc);
    iVar1 = func_0x00083e80(iVar2);
    *(short *)(param_1 + 0x36) =
         *(short *)(iVar3 + 0x34) - (short)(iVar1 * *(short *)(param_1 + 0x152) >> 0xc);
  }
  *(short *)(param_1 + 0x32) = *(short *)(iVar3 + 0x30) + *(short *)(param_1 + 0x156);
  return;
}

