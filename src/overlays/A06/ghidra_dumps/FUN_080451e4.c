// FUN_080451e4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080451e4(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 0x10);
  puVar7 = (undefined1 *)(param_1 + 0x2c);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    iVar4 = 0;
    puVar3 = puVar7;
    if (bVar1 != 0) {
      halt_baddata();
    }
    do {
      *(undefined4 *)(puVar3 + 4) = 0;
      *(undefined2 *)(puVar3 + 8) = 0;
      *(undefined2 *)(puVar3 + 10) = 0xffff;
      iVar4 = iVar4 + 1;
      puVar3 = puVar3 + 8;
    } while (iVar4 < 10);
    *puVar7 = 0;
    *(undefined1 *)(param_1 + 0x2d) = 0;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  uVar5 = 0;
  *(char *)(param_1 + 0x2d) = *(char *)(param_1 + 0x2d) + -1;
  do {
    sVar2 = *(short *)(puVar7 + 10);
    if ((*(short *)(puVar7 + 10) < 0) ||
       (*(ushort *)(puVar7 + 10) = sVar2 + 2U, 0x13 < (ushort)(sVar2 + 2U))) {
      if (*(char *)(param_1 + 0x2d) < '\x01') {
        if ((uVar5 & 1) != 0) {
          *(undefined2 *)(puVar7 + 4) = *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 0x2c);
          *(undefined2 *)(puVar7 + 6) = *(undefined2 *)(*(int *)(iVar6 + 0xc0) + 0x30);
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined2 *)(puVar7 + 4) = *(undefined2 *)(*(int *)(iVar6 + 0xc4) + 0x2c);
        *(undefined2 *)(puVar7 + 6) = *(undefined2 *)(*(int *)(iVar6 + 0xc4) + 0x30);
        *(undefined2 *)(puVar7 + 8) = *(undefined2 *)(*(int *)(iVar6 + 0xc4) + 0x34);
        *(undefined2 *)(puVar7 + 10) = 0;
        *(undefined1 *)(param_1 + 0x2d) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(puVar7 + 10) = 0xffff;
    }
    uVar5 = uVar5 + 1;
    puVar7 = puVar7 + 8;
  } while ((int)uVar5 < 10);
  *(undefined1 *)(param_1 + 1) = *(undefined1 *)(iVar6 + 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

