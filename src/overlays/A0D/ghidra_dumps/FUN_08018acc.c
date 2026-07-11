// FUN_08018acc

/* WARNING: Control flow encountered bad instruction data */

void FUN_08018acc(int param_1)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  
  bVar3 = *(byte *)(param_1 + 4);
  puVar6 = (undefined1 *)(param_1 + 0x50);
  if (bVar3 != 1) {
    if (1 < bVar3) {
      if (bVar3 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    iVar5 = 0;
    puVar4 = puVar6;
    if (bVar3 != 0) {
      halt_baddata();
    }
    do {
      iVar5 = iVar5 + 1;
      uVar2 = func_0x0009a450();
      *puVar4 = uVar2;
      uVar2 = func_0x0009a450();
      puVar4[1] = uVar2;
      puVar4[2] = 0;
      bVar3 = func_0x0009a450();
      puVar4[3] = bVar3 & 0xf;
      puVar4 = puVar4 + 4;
    } while (iVar5 < 10);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0xe;
    *(undefined1 *)(param_1 + 7) = 0;
  }
  if (*(short *)(param_1 + 0x48) < 0x400) {
    *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x199;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\n';
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\n';
    *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 0x66;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x48) = *(short *)(param_1 + 0x48) + 0x28;
  if (0x7ff < *(short *)(param_1 + 0x48)) {
    *(undefined2 *)(param_1 + 0x48) = 0;
  }
  bVar3 = *(char *)(param_1 + 5) + 1;
  *(byte *)(param_1 + 5) = bVar3;
  if (0x1b < bVar3) {
    *(undefined1 *)(param_1 + 5) = 0;
  }
  bVar3 = *(char *)(param_1 + 6) + 1;
  *(byte *)(param_1 + 6) = bVar3;
  if (0x1b < bVar3) {
    *(undefined1 *)(param_1 + 6) = 0;
  }
  bVar3 = *(char *)(param_1 + 7) + 4;
  *(byte *)(param_1 + 7) = bVar3;
  iVar5 = 0;
  if ((int)((uint)bVar3 << 0x18) < 0) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    do {
      cVar1 = puVar6[3];
      if (('\0' < (char)puVar6[3]) && (puVar6[3] = cVar1 + '\n', 'G' < (char)(cVar1 + '\n'))) {
        if (*(short *)(param_1 + 0x48) < 0x400) {
          bVar3 = func_0x0009a450();
          puVar6[3] = bVar3 & 0xf;
          uVar2 = func_0x0009a450();
          *puVar6 = uVar2;
          uVar2 = func_0x0009a450();
          puVar6[1] = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        puVar6[3] = 0xff;
      }
      iVar5 = iVar5 + 1;
      puVar6 = puVar6 + 4;
    } while (iVar5 < 10);
    *(undefined1 *)(param_1 + 1) = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

