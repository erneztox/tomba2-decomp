// FUN_0802433c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802433c(int param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    func_0x0011d10c(param_1);
    if (*(char *)(param_1 + 1) == '\0') {
      return;
    }
    uVar2 = func_0x000781e0((int)_DAT_1f800160 - (int)*(short *)(param_1 + 0x2e),
                            (int)_DAT_1f800164 - (int)*(short *)(param_1 + 0x36));
    iVar3 = 0;
    if (uVar2 < 1000) {
      iVar4 = param_1;
      if (*(char *)(param_1 + 8) == '\0') {
        return;
      }
      do {
        *(undefined1 *)(*(int *)(iVar4 + 0xc0) + 0x3f) = 0x28;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < (int)(uint)*(byte *)(param_1 + 8));
    }
    else {
      iVar4 = param_1;
      if (*(char *)(param_1 + 8) == '\0') {
        return;
      }
      do {
        *(undefined1 *)(*(int *)(iVar4 + 0xc0) + 0x3f) = 0;
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < (int)(uint)*(byte *)(param_1 + 8));
    }
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      func_0x0011cf1c(param_1);
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

