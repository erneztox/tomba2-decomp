// FUN_0803d8ac

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803d8ac(int param_1)

{
  byte bVar1;
  char cVar2;
  bool bVar3;
  short sVar4;
  undefined2 uVar5;
  int iVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 0x10);
  if (bVar1 == 1) {
    cVar2 = *(char *)(iVar6 + 1);
    *(char *)(param_1 + 1) = cVar2;
    if (cVar2 != '\0') {
      func_0x00077e7c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(iVar6 + 5) != '\x05') {
      bVar3 = true;
      if ((*(byte *)(iVar6 + 3) & 0x80) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if ((DAT_1f800207 == 0xe) && (0x283b < _DAT_1f800160)) {
        bVar3 = false;
      }
      if (DAT_1f800207 - 1 < 0xd) {
        bVar3 = false;
      }
      if (bVar3) {
        func_0x0007778c(param_1);
      }
    }
    uVar5 = _DAT_1f800162;
    sVar4 = _DAT_1f800160;
    if (DAT_1f800137 == '\0') {
      if (DAT_800bf809 == '\0') {
        if (*(char *)(param_1 + 0x2b) != '\0') {
          *(char *)(param_1 + 0x2b) = *(char *)(param_1 + 0x2b) + -1;
          halt_baddata();
        }
        if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x0803da2c */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef5e2c))();
          return;
        }
      }
    }
    else if ((*(char *)(param_1 + 5) == '\x02') && (*(char *)(param_1 + 0x29) == '\x01')) {
      *(undefined2 *)(param_1 + 0x36) = _DAT_1f800164;
      *(short *)(param_1 + 0x2e) = sVar4;
      *(undefined2 *)(param_1 + 0x32) = uVar5;
      func_0x0013b8f4(param_1,(int)*(short *)(param_1 + 100),0xffffffb0);
      *(undefined1 *)(param_1 + 6) = 0;
      *(undefined1 *)(param_1 + 5) = 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      func_0x001354c0(param_1);
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      if (*(int *)(param_1 + 0x14) == 0) {
        func_0x0007a624(param_1);
        return;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
      *(undefined4 *)(param_1 + 0x14) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x14) + 4) = 2;
      *(undefined4 *)(param_1 + 0x14) = 0;
    }
    *(undefined1 *)(*(int *)(param_1 + 0x10) + 0x47) = 1;
    *(undefined1 *)(param_1 + 0x2b) = 0;
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 5) = 3;
    *(undefined1 *)(param_1 + 4) = 1;
  }
  *(undefined1 *)(param_1 + 0x29) = 0;
  *(undefined1 *)(param_1 + 0x5f) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

