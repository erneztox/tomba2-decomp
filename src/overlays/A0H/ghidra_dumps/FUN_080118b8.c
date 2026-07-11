// FUN_080118b8

/* WARNING: Control flow encountered bad instruction data */

void FUN_080118b8(int param_1,short param_2)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    iVar3 = func_0x0007e038((int)param_2,2);
    *(int *)(param_1 + 0x14) = iVar3;
    if (iVar3 != 0) {
      *(undefined2 *)(param_1 + 0xe) = 0x5a;
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (1 < bVar1) {
    if (bVar1 != 2) {
      halt_baddata();
    }
    sVar2 = *(short *)(param_1 + 0xe) + -1;
    *(short *)(param_1 + 0xe) = sVar2;
    if (sVar2 == -1) {
      if (*(byte *)(*(int *)(param_1 + 0x14) + 4) < 2) {
        *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
        *(undefined4 *)(param_1 + 0x14) = 0;
      }
      *(undefined1 *)(param_1 + 7) = 0;
    }
  }
  return;
}

