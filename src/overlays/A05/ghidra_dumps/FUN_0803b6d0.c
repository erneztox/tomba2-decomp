// FUN_0803b6d0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803b6d0(int param_1)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 0x10);
  if (bVar1 == 1) {
    *(short *)(param_1 + 0x2e) = *(short *)(iVar3 + 0x2e) + *(short *)(param_1 + 0x60);
    *(short *)(param_1 + 0x32) = *(short *)(iVar3 + 0x32) + *(short *)(param_1 + 0x62);
    *(short *)(param_1 + 0x36) = *(short *)(iVar3 + 0x36) + *(short *)(param_1 + 100);
    iVar2 = func_0x000777fc(param_1);
    if (iVar2 == 0) {
      return;
    }
    if ((*(byte *)(param_1 + 3) & 0x80) == 0) {
      *(undefined2 *)(param_1 + 0x5a) = *(undefined2 *)(iVar3 + 0x58);
    }
    else {
      if (*(char *)(param_1 + 0xbe) == '\0') {
        *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(iVar3 + 0x58);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(ushort *)(param_1 + 0x58) = -*(short *)(iVar3 + 0x58) & 0xfff;
      func_0x000517f8(param_1);
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      func_0x00134000(param_1,iVar3);
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
  else if (bVar1 == 2) {
    func_0x000777fc(param_1);
    func_0x001344f4(param_1);
  }
  else if (bVar1 == 3) {
    func_0x0007a624(param_1);
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

