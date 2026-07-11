// A09_SpawnWithGTE - Spawn entity with GTE position setup

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void A09_SpawnWithGTE(int param_1)

{
  int iVar1;
  byte bVar2;
  undefined1 auStack_18 [2];
  undefined2 local_16;
  undefined2 local_12;
  undefined2 local_e;
  
  *(undefined1 *)(param_1 + 0x72) = 0;
  bVar2 = *(byte *)(param_1 + 100) & 0x7f;
  *(byte *)(param_1 + 100) = bVar2;
  if (DAT_800e7eaa != '\x02') {
    if (_DAT_800e7eae < 0x8fc) {
      *(undefined1 *)(param_1 + 0x72) = 3;
    }
    else {
      if (_DAT_800e7eae < 0x10cd) {
        return;
      }
      *(undefined1 *)(param_1 + 0x72) = 2;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)(param_1 + 100) = bVar2 | 0x80;
  if (-0x399 < _DAT_800e7eb2) {
    *(undefined2 *)(param_1 + 0xe) = 0xfc68;
    *(short *)(param_1 + 10) = _DAT_800e7eae;
    *(undefined2 *)(param_1 + 0x12) = _DAT_800e7eb6;
    func_0x0006e3f4(param_1,param_1 + 8);
    local_16 = 0x781;
    local_12 = 0xfb00;
    local_e = 0x699;
    iVar1 = func_0x0006cec4(0x1f8000d0,auStack_18,0xe0);
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0x66) = 3;
    }
    return;
  }
  *(short *)(param_1 + 0xe) = _DAT_800e7eb2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

