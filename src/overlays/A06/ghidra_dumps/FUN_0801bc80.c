// FUN_0801bc80

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801bc80(int param_1,int param_2)

{
  undefined1 uVar1;
  
  *(undefined2 *)(param_1 + 0x56) = 0x100;
  *(undefined1 *)(param_1 + 0x72) = 0;
  *(byte *)(param_1 + 100) = *(byte *)(param_1 + 100) & 0x7f;
  _DAT_1f8000ee = 0xf92a;
  *(undefined4 *)(param_1 + 0x24) = 0;
  if (*(byte *)(param_1 + 3) == 0) {
    uVar1 = 1;
    if (0xe < DAT_800bf871) {
      uVar1 = 2;
    }
    *(undefined1 *)(param_1 + 3) = uVar1;
    if (*(byte *)(param_2 + 0x2a) < 0x14) {
                    /* WARNING: Could not emulate address calculation at 0x0801bd20 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_2 + 0x2a) * 4 + -0x7fef6758))();
      return;
    }
  }
  else if (*(byte *)(param_1 + 3) < 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (DAT_800bf816 == '\0') {
    if (*(byte *)(param_2 + 0x2a) < 0xf) {
      if (-0x7d1 < _DAT_1f8000d6) {
        *(undefined1 *)(param_1 + 0x74) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (-0x1e78 < _DAT_1f8000d6) {
        *(undefined1 *)(param_1 + 0x74) = 0;
        halt_baddata();
      }
    }
    else {
      if (-0x1389 < _DAT_1f8000d6) {
        *(undefined1 *)(param_1 + 0x74) = 2;
        halt_baddata();
      }
      if (-0x1e78 < _DAT_1f8000d6) goto LAB_0801c224;
    }
    *(undefined1 *)(param_1 + 0x74) = 8;
    _DAT_1f8000d6 = 0xe188;
    *(undefined2 *)(param_1 + 0x4a) = 0xe188;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_0801c224:
  *(undefined1 *)(param_1 + 0x74) = 0;
  return;
}

