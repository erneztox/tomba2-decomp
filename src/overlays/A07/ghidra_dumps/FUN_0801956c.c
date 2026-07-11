// FUN_0801956c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801956c(void)

{
  short *psVar1;
  undefined2 *puVar2;
  
  puVar2 = (undefined2 *)
           (*(int *)((uint)DAT_800bf817 * 4 + -0x7fece278) + ((_DAT_800e7eea & 0xf0) >> 1));
  _DAT_800e7eae = *puVar2;
  if (_DAT_800e7ffe < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_800e7eb2 = puVar2[1];
  _DAT_1f800184 = 0;
  _DAT_1f8001c6 = 0;
  _DAT_800e7eb6 = puVar2[2];
  _DAT_800e7ed6 = puVar2[3];
  DAT_800bf816 = 1;
  DAT_800e800a = 2;
  DAT_800e800b = 0;
  if (DAT_800bf817 == 10) {
    _DAT_1f8000d2 = *(short *)((uint)(DAT_800e7eea >> 5) * 6 + -0x7fece1f4);
    _DAT_1f8000d6 = *(undefined2 *)((uint)(DAT_800e7eea >> 5) * 6 + -0x7fece1f2);
    _DAT_1f8000da = *(undefined2 *)((uint)(DAT_800e7eea >> 5) * 6 + -0x7fece1f0);
    func_0x00054198(&DAT_800e7e80);
    DAT_800e7e85 = 0x24;
    DAT_800e7e86 = 0;
  }
  else if (DAT_800bf817 == 0xc) {
    DAT_800e7e85 = 7;
    DAT_800e7e86 = 7;
    DAT_800e7e87 = 0;
    DAT_800e7ea9 = 0;
    _DAT_1f80019e = 0;
    _DAT_800e7eea = 0;
    _DAT_1f8000d2 = _DAT_80131e18;
    _DAT_1f8000d6 = _DAT_80131e1a;
    _DAT_1f8000da = _DAT_80131e1c;
    _DAT_800e7efa = _DAT_800e7ed6;
  }
  else {
    psVar1 = (short *)((uint)DAT_800bf817 * 6 + -0x7fece244);
    if (*psVar1 != 0) {
      _DAT_1f8000d6 = *(undefined2 *)((uint)DAT_800bf817 * 6 + -0x7fece242);
      _DAT_1f8000da = *(undefined2 *)((uint)DAT_800bf817 * 6 + -0x7fece240);
      _DAT_1f8000d2 = *psVar1;
    }
    func_0x00054198(&DAT_800e7e80);
    DAT_800e7e85 = 0x24;
    if (DAT_800bf817 == 9) {
      DAT_800e7e86 = 5;
      func_0x0006e3b0(0x800e8008,0x800e7eac);
      return;
    }
    DAT_800e7e86 = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

