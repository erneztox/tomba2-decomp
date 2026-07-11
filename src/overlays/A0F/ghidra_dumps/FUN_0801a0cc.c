// FUN_0801a0cc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0801a16c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801a0cc(int param_1)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_28 = _DAT_801091f8;
  local_24 = _DAT_801091fc;
  local_20 = _DAT_80109200;
  local_1c = _DAT_80109204;
  local_18 = _DAT_80109208;
  local_14 = _DAT_8010920c;
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 < 3) {
    if (bVar2 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined1 *)(param_1 + 6) = 10;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 7) = 0;
      *(undefined2 *)(param_1 + 0x32) = 0xff38;
    }
    if (*(char *)(param_1 + 4) == '\x01') {
      uVar3 = func_0x0009a450();
      if (*(char *)(param_1 + 5) == '\0') {
        cVar1 = *(char *)(param_1 + 6) + -1;
        *(char *)(param_1 + 6) = cVar1;
        if (cVar1 == -1) {
          *(undefined1 *)(param_1 + 5) = 1;
          *(undefined1 *)(param_1 + 6) = 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        cVar1 = *(char *)(param_1 + 6) + -1;
        *(char *)(param_1 + 6) = cVar1;
        if (cVar1 == -1) {
          *(undefined1 *)(param_1 + 4) = 2;
        }
      }
      iVar5 = ((uVar3 & 0x3f) >> 1) + 0x200;
      iVar4 = (uVar3 & 0x3f) + 0x300;
      *(int *)(param_1 + 0x60) = iVar5;
      *(int *)(param_1 + 100) = iVar4;
      *(int *)(param_1 + 0x68) = iVar4;
      *(int *)(param_1 + 0x6c) = iVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) - (*(uint *)(param_1 + 0x60) >> 2);
    *(uint *)(param_1 + 100) = *(uint *)(param_1 + 100) - (*(uint *)(param_1 + 100) >> 2);
    uVar3 = *(uint *)(param_1 + 0x6c) - (*(uint *)(param_1 + 0x6c) >> 2);
    *(uint *)(param_1 + 0x6c) = uVar3;
    *(uint *)(param_1 + 0x68) = *(uint *)(param_1 + 0x68) - (*(uint *)(param_1 + 0x68) >> 2);
    if (uVar3 < 9) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    bVar2 = *(char *)(param_1 + 7) + 1;
    *(byte *)(param_1 + 7) = bVar2;
    if (5 < bVar2) {
      *(undefined1 *)(param_1 + 7) = 0;
    }
    *(uint *)(param_1 + 0x50) =
         *(int *)(param_1 + 0x60) * (uint)*(byte *)(&local_28 + *(byte *)(param_1 + 7)) >> 4;
    *(uint *)(param_1 + 0x54) =
         *(int *)(param_1 + 100) *
         (uint)*(byte *)((int)&local_28 + (uint)*(byte *)(param_1 + 7) * 4 + 1) >> 4;
    *(uint *)(param_1 + 0x58) =
         *(int *)(param_1 + 0x68) *
         (uint)*(byte *)((int)&local_28 + (uint)*(byte *)(param_1 + 7) * 4 + 2) >> 4;
    bVar2 = *(byte *)((int)&local_28 + (uint)*(byte *)(param_1 + 7) * 4 + 3);
    *(undefined1 *)(param_1 + 1) = 1;
    *(uint *)(param_1 + 0x5c) = *(int *)(param_1 + 0x6c) * (uint)bVar2 >> 4;
  }
  else if (bVar2 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

