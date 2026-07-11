// FUN_0803461c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803461c(int param_1)

{
  byte bVar1;
  short sVar2;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      func_0x00051b04(*(undefined4 *)(param_1 + 200),0xc,
                      (int)*(short *)(*(short *)(param_1 + 0xe) * 2 + -0x7fec0df8));
      sVar2 = *(short *)(param_1 + 0xe) + 1;
      *(short *)(param_1 + 0xe) = sVar2;
      if (sVar2 == 3) {
        *(undefined2 *)(param_1 + 0xe) = 0;
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x40) = 2;
    }
  }
  else if ((bVar1 < 2) && (bVar1 == 0)) {
    *(undefined1 *)(param_1 + 7) = 1;
    *(undefined2 *)(param_1 + 0x40) = 2;
    *(undefined1 *)(param_1 + 0x5e) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

