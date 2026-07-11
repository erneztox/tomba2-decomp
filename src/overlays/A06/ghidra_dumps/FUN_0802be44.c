// FUN_0802be44

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802be44(int param_1)

{
  short sVar1;
  int iVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if (*(char *)(param_1 + 0xbf) == DAT_800bfa10) {
      return;
    }
    *(undefined2 *)(param_1 + 0x40) = 8;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    iVar2 = *(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0);
    *(short *)(iVar2 + 0xc) = *(short *)(iVar2 + 0xc) + 0x100;
    iVar2 = *(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0);
    *(ushort *)(iVar2 + 0xc) = *(ushort *)(iVar2 + 0xc) & 0xfff;
    sVar1 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar1 + -1;
    if (sVar1 == 1) {
      *(undefined1 *)(param_1 + 5) = 0;
      *(byte *)(param_1 + 0xbf) = *(byte *)(param_1 + 0xbf) ^ 1;
      func_0x00074590(0x1a,0xfffffff8,0);
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

