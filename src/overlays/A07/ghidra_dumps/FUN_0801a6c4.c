// FUN_0801a6c4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801a6c4(int param_1)

{
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  if (*(char *)(param_1 + 4) == '\0') {
    *(short *)(param_1 + 0x52) = 0x1400 - _DAT_1f8000f2;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
  }
  else if (*(char *)(param_1 + 4) == '\x01') {
    local_1e = _DAT_800e7eae;
    local_1a = _DAT_800e7eb2 - 0x80;
    local_16 = _DAT_800e7eb6;
    func_0x0006e3f4(param_1,auStack_20);
    func_0x00112b1c(param_1,&DAT_800e7e80,(int)*(short *)(param_1 + 0x52));
    func_0x00112ce8(param_1,(int)((_DAT_800e7eb2 - 0x80) * 0x10000) >> 0x10);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

