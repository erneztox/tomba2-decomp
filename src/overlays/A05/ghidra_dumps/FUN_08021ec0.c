// FUN_08021ec0

/* WARNING: Control flow encountered bad instruction data */

void FUN_08021ec0(int param_1)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  
  if ((*(short *)(param_1 + 0x66) != 1) && (*(short *)(param_1 + 0x68) == 0)) {
    uVar2 = func_0x0011bcb0();
    if (uVar2 == 0) {
      if (*(short *)(param_1 + 0x66) == 0) {
        func_0x00077cfc(param_1,0x80141e14,0,4);
        *(undefined2 *)(param_1 + 0x42) = 3;
        *(undefined1 *)(param_1 + 6) = 7;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      uVar1 = 2;
      if (((uVar2 & 0x80) != 0) || (uVar1 = 3, (uVar2 & 2) != 0)) {
        *(undefined1 *)(param_1 + 5) = uVar1;
        *(undefined1 *)(param_1 + 6) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar3 = func_0x0011c1d4(param_1,0);
      if (iVar3 != 0) {
        return;
      }
    }
  }
  if (7 < *(byte *)(param_1 + 6)) {
    return;
  }
                    /* WARNING: Could not emulate address calculation at 0x08021f94 */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fef6600))();
  return;
}

