// FUN_00003dcc

/* WARNING: Control flow encountered bad instruction data */

void FUN_00003dcc(int param_1)

{
  byte bVar1;
  ushort uVar2;
  ushort *puVar3;
  int iVar4;
  ushort *puVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  puVar5 = (ushort *)(param_1 + 0x50);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
        return;
      }
      goto LAB_00003e8c;
    }
    iVar4 = 0;
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    puVar3 = puVar5;
    do {
      iVar4 = iVar4 + 1;
      uVar2 = func_0x0009a450();
      *puVar3 = (uVar2 & 0xfff) + 800;
      puVar3 = puVar3 + 1;
    } while (iVar4 < 0x1c);
    *(undefined2 *)(param_1 + 0x4e) = 0x4000;
    *(undefined4 *)(param_1 + 0x50) = 0x3c;
  }
  iVar4 = *(int *)(param_1 + 0x50);
  *(int *)(param_1 + 0x50) = iVar4 + -1;
  if (iVar4 == 0) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
LAB_00003e8c:
  *(undefined1 *)(param_1 + 1) = 1;
  iVar4 = 0;
  do {
    uVar2 = *puVar5;
    *puVar5 = uVar2 - 0x66;
    if ((int)((uint)(ushort)(uVar2 - 0x66) << 0x10) < 0) {
      if (*(char *)(param_1 + 4) == '\x01') {
        uVar2 = func_0x0009a450();
        *puVar5 = (uVar2 & 0xfff) + 800;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *puVar5 = 0;
    }
    iVar4 = iVar4 + 1;
    puVar5 = puVar5 + 1;
  } while (iVar4 < 0x1c);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

