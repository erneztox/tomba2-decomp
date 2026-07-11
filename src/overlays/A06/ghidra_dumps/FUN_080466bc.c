// FUN_080466bc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08046754) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080466bc(int param_1)

{
  byte bVar1;
  uint uVar2;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = _DAT_8010a468;
  local_1c = _DAT_8010a46c;
  local_18 = _DAT_8010a470;
  local_14 = _DAT_8010a474;
  local_10 = _DAT_8010a478;
  local_c = _DAT_8010a47c;
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined4 *)(param_1 + 100) = 0x200;
      *(undefined4 *)(param_1 + 0x68) = 0x200;
      *(undefined4 *)(param_1 + 0x60) = 0x100;
      *(undefined4 *)(param_1 + 0x6c) = 0x100;
      *(undefined2 *)(param_1 + 0x32) = 0xff38;
    }
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) - (*(uint *)(param_1 + 0x60) >> 2);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) - (*(uint *)(param_1 + 100) >> 2);
    uVar2 = *(uint *)(param_1 + 0x6c) - (*(uint *)(param_1 + 0x6c) >> 2);
    *(uint *)(param_1 + 0x6c) = uVar2;
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) - (*(uint *)(param_1 + 0x68) >> 2);
    if (uVar2 < 9) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    bVar1 = *(char *)(param_1 + 7) + 1;
    *(byte *)(param_1 + 7) = bVar1;
    if (5 < bVar1) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    *(uint *)(param_1 + 0x50) =
         *(int *)(param_1 + 0x60) * (uint)*(byte *)(&local_20 + *(byte *)(param_1 + 7)) >> 4;
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 100) *
         (uint)*(byte *)((int)&local_20 + (uint)*(byte *)(param_1 + 7) * 4 + 1) >> 4;
    *(uint *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x68) *
         (uint)*(byte *)((int)&local_20 + (uint)*(byte *)(param_1 + 7) * 4 + 2) >> 4;
    bVar1 = *(byte *)((int)&local_20 + (uint)*(byte *)(param_1 + 7) * 4 + 3);
    *(undefined1 *)(param_1 + 1) = 1;
    *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x6c) * (uint)bVar1 >> 4;
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

