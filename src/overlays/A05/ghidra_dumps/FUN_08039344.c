// FUN_08039344

/* WARNING: Control flow encountered bad instruction data */

void FUN_08039344(int param_1)

{
  char cVar1;
  short sVar2;
  
  if (*(char *)(param_1 + 6) == '\0') {
    cVar1 = *(char *)(param_1 + 0x5e);
    if (cVar1 == '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (cVar1 == '\x01') {
      *(undefined2 *)(param_1 + 0x4a) = 0xf000;
      *(undefined2 *)(param_1 + 0x50) = 0x200;
      *(undefined2 *)(param_1 + 0x48) = 0xf800;
    }
    else {
      if (cVar1 != '\x02') {
        *(undefined2 *)(param_1 + 0x4a) = 0xe000;
        *(undefined2 *)(param_1 + 0x50) = 0x200;
        *(undefined2 *)(param_1 + 0x48) = 0;
        *(undefined2 *)(param_1 + 0x40) = 0x14;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x4a) = 0xf000;
      *(undefined2 *)(param_1 + 0x50) = 0x200;
      *(undefined2 *)(param_1 + 0x48) = 0x800;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (*(char *)(param_1 + 6) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar2 + -1;
  if (sVar2 == 1) {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + 8;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x48) * 0x100;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x00077b5c(param_1);
  return;
}

