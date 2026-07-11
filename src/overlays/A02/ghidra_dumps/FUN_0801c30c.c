// FUN_0801c30c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c30c(void)

{
  int iVar1;
  uint uVar2;
  undefined2 *puVar3;
  
  puVar3 = (undefined2 *)
           (*(int *)((uint)DAT_800bf817 * 4 + -0x7fed6494) + ((_DAT_800e7eea & 0xf0) >> 1));
  _DAT_800e7eae = *puVar3;
  if (_DAT_800e7ffe < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_800e7eb2 = puVar3[1];
  _DAT_1f800184 = 0;
  _DAT_1f8001c6 = 0;
  _DAT_800e7eb6 = puVar3[2];
  _DAT_800e7ed6 = puVar3[3];
  DAT_800bf816 = 1;
  DAT_800e800a = 2;
  DAT_800e800b = 0;
  uVar2 = (uint)DAT_800bf817;
  if (uVar2 != 7) {
    if (uVar2 == 4) {
      _DAT_1f8000d2 = *(undefined2 *)((uint)(DAT_800e7eea >> 5) * 6 + -0x7fed6474);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1f8000d2 = *(undefined2 *)(uVar2 * 6 + -0x7fed645c);
    _DAT_1f8000d6 = *(undefined2 *)(uVar2 * 6 + -0x7fed645a);
    _DAT_1f8000da = *(undefined2 *)((uint)DAT_800bf817 * 6 + -0x7fed6458);
    func_0x00054198(&DAT_800e7e80);
    DAT_800e7e85 = 0x24;
    DAT_800e7e86 = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_800e8012 = 0x118;
  DAT_800bf80f = 1;
  DAT_800e7e85 = 6;
  DAT_800e7e86 = 4;
  DAT_800e7e87 = 0;
  _DAT_800e7eea = 0;
  _DAT_800e805a = 0x1c00;
  _DAT_800e8060 = 0x160;
  iVar1 = func_0x00083e80(0x118);
  _DAT_800e8016 = _DAT_800e7eb2 + (short)(iVar1 * (_DAT_1f8000ee + _DAT_800e8060) >> 0xc);
  func_0x001167c4(0x800e8008,_DAT_800e805a + 0x800U & 0xfff);
  func_0x0006e3b0(0x800e8008,0x800e7eac);
  return;
}

