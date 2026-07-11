// FUN_08013e88

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08013e88(int param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(byte *)(param_1 + 6) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x08013ed8 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6ffc))();
    return;
  }
  if (2 < *(byte *)(param_1 + 6)) {
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x280;
    if ((*(byte *)(param_1 + 0x46) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = (int)*(short *)(param_1 + 0x6a);
    iVar1 = func_0x00083e80(iVar2);
    iVar1 = (iVar1 * 0x50) / 100;
    if (*(short *)(param_1 + 0x72) == 0) {
      *(int *)(param_1 + 0x30) =
           *(int *)(param_1 + 0x30) + iVar1 * *(short *)(param_1 + 0x44) * 0x10;
      iVar1 = func_0x00083f50(iVar2);
      iVar1 = iVar1 * *(short *)(param_1 + 0x44) >> 4;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar1;
      *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar1;
      func_0x0010cd20();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar1 * *(short *)(param_1 + 0x44) * 0x10;
    iVar1 = func_0x00083f50(iVar2);
    iVar1 = iVar1 * *(short *)(param_1 + 0x44) >> 4;
    if (iVar1 < 0) {
      iVar1 = -iVar1;
    }
    iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x74));
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + (iVar2 * iVar1 >> 4);
    iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x74));
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) - (iVar2 * iVar1 >> 4);
  }
  return;
}

