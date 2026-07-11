// FUN_08036390

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08036390(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  short sVar3;
  
  if (*(char *)(param_1 + 7) == '\0') {
    iVar1 = func_0x00077768((int)*(short *)(param_1 + 0x6c),(int)*(short *)(param_1 + 0x56),1);
    if (iVar1 != 0) {
      return 2;
    }
    if (*(char *)(param_1 + 0xbe) != '\0') {
      *(undefined2 *)(param_1 + 0x50) = 0xff80;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x50) = 0x80;
    *(short *)(param_1 + 0x6c) = *(short *)(param_1 + 0x56) + 0x800;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  else if (*(char *)(param_1 + 7) != '\x01') {
    halt_baddata();
  }
  sVar3 = *(short *)(param_1 + 0x56) + *(short *)(param_1 + 0x50);
  *(short *)(param_1 + 0x56) = sVar3;
  if (*(char *)(param_1 + 0xbe) == '\0') {
    uVar2 = 1;
    if (sVar3 < *(short *)(param_1 + 0x6c)) {
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0;
    if (sVar3 <= *(short *)(param_1 + 0x6c)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return uVar2;
}

