// FUN_08045e24

/* WARNING: Control flow encountered bad instruction data */

void FUN_08045e24(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x50) = 0x800a0b38;
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined1 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  *(int *)(param_1 + 0x3c) = *(char *)(param_1 + 0x54) * 4 + -0x7feb37d8;
  *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(*(char *)(param_1 + 0x54) + -0x7feb37a4);
  cVar2 = *(char *)(param_1 + 0x54) + '\x01';
  *(char *)(param_1 + 0x54) = cVar2;
  if ('\v' < cVar2) {
    *(undefined1 *)(param_1 + 4) = 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0002b278(param_1);
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    local_1e = *(undefined2 *)(param_1 + 0x2c);
    local_1a = *(short *)(param_1 + 0x2e) + -0x8c;
    local_16 = *(undefined2 *)(param_1 + 0x30);
    iVar3 = func_0x0003116c(8,auStack_20,0);
    if (iVar3 != 0) {
      *(undefined1 *)(iVar3 + 0x28) = *(undefined1 *)(param_1 + 0x28);
    }
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else {
    if (((1 < bVar1) || (bVar1 != 0)) ||
       (cVar2 = *(char *)(param_1 + 0x54) + '\x01', *(char *)(param_1 + 0x54) = cVar2,
       cVar2 < '\x06')) {
      return;
    }
    *(undefined1 *)(param_1 + 5) = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

