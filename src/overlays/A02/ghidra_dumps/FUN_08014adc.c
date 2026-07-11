// FUN_08014adc

/* WARNING: Control flow encountered bad instruction data */

void FUN_08014adc(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    func_0x00076d68(param_1);
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    if (sVar3 != 1) {
      return;
    }
    *(undefined1 *)(param_1 + 0x146) = 2;
    *(undefined2 *)(param_1 + 0x40) = 3;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x2b) = 1;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar4 = func_0x0007ab20();
      if (iVar4 != 0) {
        *(undefined2 *)(iVar4 + 0x2e) = *(undefined2 *)(param_1 + 0x2e);
        *(undefined2 *)(iVar4 + 0x32) = *(undefined2 *)(param_1 + 0x32);
        *(undefined2 *)(iVar4 + 0x36) = *(undefined2 *)(param_1 + 0x36);
        uVar2 = *(undefined2 *)(param_1 + 0x56);
        *(undefined4 *)(iVar4 + 0x1c) = 0x8010b458;
        *(undefined1 *)(iVar4 + 2) = 7;
        *(undefined2 *)(iVar4 + 0x56) = uVar2;
      }
      *(undefined1 *)(param_1 + 0x146) = 1;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      func_0x00054d14(param_1,0x99,5);
      *(undefined2 *)(param_1 + 0x40) = 0xd;
    }
  }
  else if (bVar1 == 2) {
    sVar3 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar3 + -1;
    if (sVar3 != 1) {
      return;
    }
    *(undefined1 *)(param_1 + 0x146) = 0;
    *(undefined1 *)(param_1 + 5) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    func_0x00054d14(param_1,2,6);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

