// FUN_000012ac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000012ac(int param_1)

{
  byte bVar1;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_e;
  
  if (*(char *)(param_1 + 2) == '\0') {
    *(undefined2 *)(param_1 + 0x56) = 0;
    _DAT_1f8000ee = 0xf542;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    _DAT_1f8000d2 = 0xc0a;
    _DAT_1f8000d6 = 0xeaa8;
    _DAT_1f8000da = 0x12c1;
  }
  else if (*(char *)(param_1 + 2) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *(byte *)(param_1 + 100) & 0x7f;
  *(byte *)(param_1 + 100) = bVar1;
  if (DAT_800e7eaa == '\t') {
    *(byte *)(param_1 + 100) = bVar1 | 0x80;
    *(undefined2 *)(param_1 + 10) = _DAT_800e7eae;
    *(undefined2 *)(param_1 + 0xe) = _DAT_800e7eb2;
    *(undefined2 *)(param_1 + 0x12) = _DAT_800e7eb6;
    func_0x0006e3f4(param_1,0x800e7eac);
    local_16 = 0xc0a;
    local_12 = 0xeaa8;
    local_e = 0x12c1;
    func_0x0006cec4(0x1f8000d0,auStack_18,0xe0);
  }
  return;
}

