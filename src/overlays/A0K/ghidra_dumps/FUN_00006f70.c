// FUN_00006f70

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x000070bc) */
/* WARNING: Removing unreachable block (ram,0x000070cc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00006f70(undefined1 *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    param_1[4] = 1;
    *param_1 = 1;
    uVar2 = *(undefined4 *)((uint)(byte)param_1[3] * 4 + -0x7fee7834);
    *(undefined4 *)(param_1 + 0x74) = 0;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
  }
  _DAT_1f8000c0 = _DAT_1f8000d2;
  _DAT_1f8000c2 = _DAT_1f8000d6;
  _DAT_1f8000c4 = _DAT_1f8000da;
  _DAT_1f8000a0 = (int)_DAT_1f8000e8;
  _DAT_1f8000a4 = (int)_DAT_1f8000ea;
  _DAT_1f8000a8 = (int)_DAT_1f8000ec;
  *(undefined4 *)(param_1 + 0x70) = 0;
  if (**(char **)(param_1 + 0x6c) != -1) {
    if (((*(uint *)(param_1 + 0x74) & 1) == 0) &&
       (iVar3 = func_0x0010fdd8(*(char **)(param_1 + 0x6c)), iVar3 != 0)) {
      *(uint *)(param_1 + 0x70) = *(uint *)(param_1 + 0x70) | 1;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

