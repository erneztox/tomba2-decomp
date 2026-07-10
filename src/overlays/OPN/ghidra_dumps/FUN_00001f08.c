// FUN_00001f08

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001f08(int param_1)

{
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined2 *)(param_1 + 0x56) = 0x800;
    *(undefined1 *)(param_1 + 0xb) = 1;
    *(undefined1 *)(param_1 + 0x47) = 2;
    *(undefined1 *)(param_1 + 0x5f) = 0;
    *(undefined2 *)(param_1 + 0x80) = 0xfec0;
    *(undefined2 *)(param_1 + 0x84) = 0;
    func_0x00042354(1,1);
    func_0x00077cfc(param_1,0x8014e4ec,4,4);
    func_0x00040cdc(param_1,0x8014e4ec,0x8018d378);
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    func_0x00076d68(param_1);
    func_0x00041098(param_1);
    if (0xe < *(byte *)(param_1 + 6)) {
      func_0x0007778c(param_1);
      func_0x000518fc(param_1);
      if (*(char *)(param_1 + 0x5f) != '\0') {
        _DAT_1f8000c0 = 0x5c;
        _DAT_1f8000c4 = 0;
        _DAT_1f8000c2 = -0x80 - *(short *)(*(int *)(param_1 + 0xec) + 2);
        func_0x000844c0(*(int *)(param_1 + 0xec) + 0x18,&DAT_1f8000c0,&DAT_1f8000c8);
        _DAT_800e7eae = *(short *)(param_1 + 0x2e) + _DAT_1f8000c8;
        _DAT_800e7eb2 = *(short *)(param_1 + 0x32) + _DAT_1f8000ca;
        _DAT_800e7eb6 = *(short *)(param_1 + 0x36) + _DAT_1f8000cc;
      }
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x00001ff4 */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((uint)*(byte *)(param_1 + 6) * 4 + -0x7fe75f6c))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

