// FUN_0801c540

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801c540(void)

{
  undefined2 *puVar1;
  
  DAT_800e7feb = 0;
  DAT_800bf816 = 0;
  _DAT_1f800184 = 0;
  puVar1 = (undefined2 *)
           (*(int *)((uint)DAT_800bf817 * 4 + -0x7fed6494) + 8 + ((_DAT_800e7eea & 0xf0) >> 1));
  _DAT_800e7eae = *puVar1;
  if (_DAT_800e7ffe < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_800e7eb2 = puVar1[1];
  _DAT_800e7eb6 = puVar1[2];
  _DAT_1f8001c6 = 0;
  _DAT_800e7ed6 = puVar1[3];
  DAT_800e800a = 3;
  DAT_800e800b = 0;
  if (DAT_800bf817 == 7) {
    DAT_800e7e85 = 6;
    DAT_800e7e86 = 4;
    DAT_800e7e87 = 1;
    _DAT_800e7eea = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x00054198(&DAT_800e7e80);
  DAT_800e7e85 = 0x24;
  DAT_800e7e86 = 0;
  _DAT_800e805a = _DAT_800e7ed6 + 0x800;
  _DAT_800e8060 = 0;
  _DAT_800e8012 = 0x178;
  func_0x001167c4(0x800e8008,_DAT_800e7ed6 + 0x1000U & 0xfff);
  func_0x0006e3b0(0x800e8008,0x800e7eac);
  return;
}

