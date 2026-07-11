// FUN_08012a1c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012a1c(int param_1)

{
  undefined4 *puVar1;
  byte bVar2;
  short sVar3;
  char cVar4;
  ushort uVar5;
  
  bVar2 = *(byte *)(param_1 + 6);
  if (bVar2 != 1) {
    if (bVar2 < 2) {
      if (bVar2 == 0) {
        *(undefined2 *)(param_1 + 0x40) = 3;
        *(undefined2 *)(param_1 + 0x42) = 0;
        *(undefined1 *)(param_1 + 7) = 0;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
    }
    else if (bVar2 == 2) {
      uVar5 = *(short *)(param_1 + 0x42) - 1;
      *(ushort *)(param_1 + 0x42) = uVar5;
      if (-1 < (int)((uint)uVar5 << 0x10)) {
        return;
      }
      func_0x0018ccfc(param_1,4);
      **(undefined2 **)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0) = _DAT_8018d470;
      *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0) + 2) =
           _DAT_8018d472;
      *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0) + 4) =
           _DAT_8018d474;
      *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0) + 8) =
           _DAT_8018d476;
      *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0) + 10) =
           _DAT_8018d478;
      *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0) + 0xc) =
           _DAT_8018d47a;
      *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0) + 0x38) = 0x1000;
      *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0) + 0x3a) = 0x1000;
      *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0) + 0x3c) = 0x1000;
      *(undefined1 *)(param_1 + 5) = 0;
      *(undefined1 *)(param_1 + 6) = 1;
      func_0x00051b04(*(undefined4 *)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0),0x1c,0x1c);
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar5 = *(short *)(param_1 + 0x42) - 1;
  *(ushort *)(param_1 + 0x42) = uVar5;
  if ((int)((uint)uVar5 << 0x10) < 0) {
    if (*(char *)(param_1 + 7) == '\0') {
      func_0x0018ccfc(param_1,8);
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 7) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0018ccfc(param_1,4);
    _DAT_800ed098 = _DAT_800ed098 + 1;
    puVar1 = (undefined4 *)(_DAT_800e7e74 + -4);
    _DAT_800e7e74 = _DAT_800e7e74 + -4;
    *puVar1 = *(undefined4 *)(param_1 + (*(byte *)(param_1 + 8) - 1) * 4 + 0xc0);
    *(undefined2 *)(param_1 + 0x42) = 5;
    sVar3 = *(short *)(param_1 + 0x40);
    cVar4 = *(char *)(param_1 + 8) + -1;
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    *(char *)(param_1 + 8) = cVar4;
    *(char *)(param_1 + 9) = cVar4;
    if (sVar3 == 1) {
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      halt_baddata();
    }
  }
  return;
}

