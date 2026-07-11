// FUN_08020ab4

/* WARNING: Control flow encountered bad instruction data */

void FUN_08020ab4(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x4a);
    sVar3 = *(short *)(param_1 + 0x4a) + 0x100;
    *(short *)(param_1 + 0x4a) = sVar3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * -0x100;
    if (0x1000 < sVar3) {
      *(undefined2 *)(param_1 + 0x4a) = 0x1000;
    }
    if (0x19 < DAT_800bfa22) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    }
  }
  else if (((bVar1 < 2) && (bVar1 == 0)) && (0x18 < DAT_800bfa22)) {
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined2 *)(param_1 + 0x4a) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x000517f8(param_1);
  return;
}

