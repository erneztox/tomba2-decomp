// FUN_0802549c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802549c(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined1 auStack_20 [2];
  short local_1e;
  short local_1a;
  undefined2 local_16;
  
  if ((DAT_800bf816 != '\0') && (DAT_800bf817 == *(char *)(param_1 + 3))) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x8c);
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 5) = 2;
    *(undefined1 *)(param_1 + 0x29) = 1;
    DAT_800bf81f = ('\x01' - *(char *)(param_1 + 0x5f)) * '\x10';
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      if (DAT_800e7eaa != *(char *)(param_1 + 0x2a)) {
        return;
      }
      if (DAT_800e7e85 != '\0') {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 1;
      DAT_1f800137 = 2;
      local_1e = _DAT_800e7eae;
      if ((DAT_800e7ff4 & 4) == 0) {
        local_1a = _DAT_800e7eb2 + -0x8c;
        local_16 = _DAT_800e7eb6;
        func_0x0003116c(8,auStack_20,0xffffffe2);
        local_1e = _DAT_800e7eae + -0x3c;
        local_1a = _DAT_800e7eb2;
        func_0x0003116c(8,auStack_20,0xffffffe2);
        local_1e = _DAT_800e7eae + 0x3c;
        func_0x0003116c(8,auStack_20,0xffffffe2);
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      if (DAT_800e7eaa == *(char *)(param_1 + 0x2a)) {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 0;
      return;
    }
  }
  iVar2 = func_0x00073328(param_1);
  if (iVar2 != 0) {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

