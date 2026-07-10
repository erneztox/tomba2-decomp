// FUN_00007c04

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00007c04(int param_1)

{
  short sVar1;
  
  if (*(byte *)(param_1 + 5) < 8) {
                    /* WARNING: Could not emulate address calculation at 0x00007c44 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6f08))();
    return;
  }
  *(short *)(*(int *)(param_1 + 0xc4) + 8) =
       *(short *)(*(int *)(param_1 + 0xc4) + 8) + *(short *)(param_1 + 0x4e);
  *(short *)(*(int *)(param_1 + 200) + 8) =
       *(short *)(*(int *)(param_1 + 200) + 8) + *(short *)(param_1 + 0x4e);
  if (0x200 < *(short *)(param_1 + 0x58)) {
    if (*(char *)(param_1 + 6) == '\0') {
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x00054d14(&DAT_800e7e80,0x40,0);
      *(undefined2 *)(param_1 + 0x4a) = 0xd000;
      *(undefined2 *)(param_1 + 0x50) = 0x200;
    }
    else if (*(char *)(param_1 + 6) == '\x01') {
      _DAT_800e7eb0 = _DAT_800e7eb0 + *(short *)(param_1 + 0x4a) * 0x100;
      _DAT_800e7eb6 = _DAT_800e7eb6 + 10;
      sVar1 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      *(short *)(param_1 + 0x4a) = sVar1;
      if (0x4000 < sVar1) {
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
      _DAT_1f800160 = _DAT_800e7eae;
      _DAT_1f800162 = _DAT_800e7eb2;
      _DAT_1f800164 = _DAT_800e7eb6;
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_1f8000c0 = _DAT_800e7ece;
  _DAT_1f8000c2 = _DAT_800e7ed0;
  _DAT_1f8000c4 = _DAT_800e7ed2;
  func_0x00084470(_DAT_1f800248 + 0x98,&DAT_1f8000c0,&DAT_1f8000a0);
  _DAT_800e7eae = *(short *)(_DAT_1f800248 + 0x2e) + _DAT_1f8000a0;
  _DAT_800e7eb0 = CONCAT22(*(short *)(_DAT_1f800248 + 0x32) + _DAT_1f8000a4,_DAT_800e7eb0);
  _DAT_800e7eb6 = *(short *)(_DAT_1f800248 + 0x36) + _DAT_1f8000a8;
  _DAT_1f800160 = _DAT_800e7eae;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

