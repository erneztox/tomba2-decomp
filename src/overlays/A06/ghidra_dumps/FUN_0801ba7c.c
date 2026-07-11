// FUN_0801ba7c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801ba7c(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_e;
  
  *(undefined2 *)(param_1 + 0x26) = 0xfa;
  _DAT_1f8000ee = 0xf6a0;
  bVar2 = *(byte *)(param_1 + 3);
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        _DAT_1f8000ee = 0xf6a0;
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 0x72) = 0;
      uVar1 = *(byte *)(param_2 + 0x2a) - 1;
      if (4 < uVar1) {
        return;
      }
                    /* WARNING: Could not emulate address calculation at 0x0801bbec */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar1 * 4 + -0x7fef6770))();
      return;
    }
    if (bVar2 != 0) {
      _DAT_1f8000ee = 0xf6a0;
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 3) = 1;
    if (*(char *)(param_2 + 0x2a) == '\x01') {
      _DAT_1f8000d2 = 0x6fea;
      _DAT_1f8000d6 = 0xf707;
      _DAT_1f8000da = 0x4ac9;
    }
  }
  bVar2 = *(byte *)(param_1 + 100) & 0x7f;
  *(byte *)(param_1 + 100) = bVar2;
  if (*(char *)(param_2 + 0x2a) == '\x01') {
    if (*(short *)(param_2 + 0x36) < 0x4e21) {
      if (*(short *)(param_2 + 0x2e) < 0x64c9) {
        return;
      }
      *(undefined2 *)(param_1 + 0x26) = 0;
    }
    else {
      *(byte *)(param_1 + 100) = bVar2 | 0x80;
      *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x2e);
      *(undefined2 *)(param_1 + 0xe) = *(undefined2 *)(param_2 + 0x32);
      *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(param_2 + 0x36);
      func_0x0006e3f4(param_1,param_1 + 8);
      local_16 = 0x6fea;
      local_12 = 0xf707;
      local_e = 0x4ac9;
      func_0x0006cec4(0x1f8000d0,auStack_18,0xe0);
    }
  }
  else {
    *(char *)(param_1 + 3) = *(char *)(param_1 + 3) + '\x01';
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

