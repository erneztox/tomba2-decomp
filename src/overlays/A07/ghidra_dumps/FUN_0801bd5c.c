// FUN_0801bd5c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0801bdf8) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801bd5c(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = _DAT_801094e8;
  local_1c = _DAT_801094ec;
  local_18 = _DAT_801094f0;
  local_14 = _DAT_801094f4;
  local_10 = _DAT_801094f8;
  local_c = _DAT_801094fc;
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 6) = 10;
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined2 *)(param_1 + 0x32) = 0xff38;
      bVar1 = *(byte *)(param_1 + 4);
    }
    if (bVar1 == 1) {
      uVar2 = func_0x0009a450();
      cVar4 = *(char *)(param_1 + 6) + -1;
      *(char *)(param_1 + 6) = cVar4;
      if (cVar4 == -1) {
        *(undefined1 *)(param_1 + 4) = 2;
      }
      uVar5 = ((uVar2 & 0x3f) >> 1) + 0x100;
      iVar3 = (uVar2 & 0x3f) + 0x200;
      *(uint *)(param_1 + 0x60) = uVar5;
      *(int *)(param_1 + 100) = iVar3;
      *(int *)(param_1 + 0x68) = iVar3;
      *(uint *)(param_1 + 0x6c) = uVar5;
      *(uint *)(param_1 + 0x60) = uVar5 >> 1;
      *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) >> 1;
      *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) >> 1;
      *(uint *)(param_1 + 0x6c) = *(uint *)(param_1 + 0x6c) >> 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
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

