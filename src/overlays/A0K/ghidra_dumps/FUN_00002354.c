// FUN_00002354

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002354(int param_1)

{
  uint uVar1;
  int iVar2;
  undefined2 uVar3;
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
    func_0x0010a99c(param_1,&DAT_800e7e80,(int)*(short *)(param_1 + 0x52));
    uVar1 = (uint)_DAT_800e7eb2;
    if (*(char *)(param_1 + 100) == '\x01') {
      func_0x00083e80((int)*(short *)(param_1 + 10));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x00083e80((int)*(short *)(param_1 + 10));
    iVar2 = (uVar1 - 0x80) +
            ((uint)(iVar2 * ((int)_DAT_1f8000ee + *(int *)(param_1 + 0x58))) >> 0xc);
    uVar3 = (undefined2)iVar2;
    *(undefined2 *)(param_1 + 0xe) = uVar3;
    iVar2 = (_DAT_1f8000d4 >> 0x10) - iVar2;
    if ((iVar2 + 10U & 0xffff) < 0x15) {
      _DAT_1f8000d4 = CONCAT22(uVar3,_DAT_1f8000d4);
      *(byte *)(param_1 + 0x66) = *(byte *)(param_1 + 0x66) | 2;
      return;
    }
    _DAT_1f8000d4 = _DAT_1f8000d4 - (iVar2 * 0x10000 >> 3);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

