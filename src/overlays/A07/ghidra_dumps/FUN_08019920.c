// FUN_08019920

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019920(void)

{
  undefined2 *puVar1;
  
  DAT_800e7feb = 0;
  DAT_800bf816 = 0;
  _DAT_1f800184 = 0;
  puVar1 = (undefined2 *)
           (*(int *)((uint)DAT_800bf817 * 4 + -0x7fece278) + 8 + ((_DAT_800e7eea & 0xf0) >> 1));
  _DAT_800e7eae = *puVar1;
  if (_DAT_800e7ffe < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  _DAT_800e7eb2 = puVar1[1];
  _DAT_800e7eb6 = puVar1[2];
  _DAT_1f8001c6 = 0;
  _DAT_800e7ed6 = puVar1[3];
  DAT_800e7e81 = 0;
  DAT_800e800a = 1;
  DAT_800e800b = 0;
  func_0x00054198(&DAT_800e7e80);
  _DAT_800e8012 = 0x178;
  _DAT_800e8060 = 0;
  _DAT_800e805a = _DAT_800e7ed6 + 0x800;
  return;
}

