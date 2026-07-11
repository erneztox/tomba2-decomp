// FUN_08030ecc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08030ecc(int param_1)

{
  short *psVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined2 *puVar6;
  
  bVar2 = *(byte *)(param_1 + 4);
  if (bVar2 == 1) {
    func_0x00129bf8(param_1);
    iVar4 = func_0x0007778c(param_1);
    if (iVar4 != 0) {
      func_0x00051844(param_1);
    }
    *(undefined1 *)(param_1 + 0x29) = 0;
  }
  else {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        if (bVar2 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar2 == 0) {
      if (*(char *)(param_1 + 5) == '\0') {
        *(undefined1 *)(param_1 + 8) = 2;
        if (_DAT_800ed098 < 2) {
          *(undefined1 *)(param_1 + 4) = 3;
        }
        else {
          iVar4 = 0;
          *(undefined1 *)(param_1 + 9) = 2;
          *(undefined1 *)(param_1 + 0xd) = 4;
          *(undefined1 *)(param_1 + 0xb) = 0xf;
          *(undefined2 *)(param_1 + 0xb8) = 0xe00;
          *(undefined2 *)(param_1 + 0xba) = 0x1000;
          *(undefined2 *)(param_1 + 0xbc) = 0x1000;
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
          if (*(char *)(param_1 + 8) != '\0') {
            puVar6 = (undefined2 *)&DAT_8013efdc;
            iVar5 = param_1;
            do {
              iVar4 = iVar4 + 1;
              iVar3 = func_0x0007aae8();
              *(int *)(iVar5 + 0xc0) = iVar3;
              *(undefined2 *)(iVar3 + 6) = *puVar6;
              **(undefined2 **)(iVar5 + 0xc0) = puVar6[1];
              *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2) = puVar6[2];
              *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4) = puVar6[3];
              *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 8) = 0;
              *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 10) = 0;
              *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0xc) = 0;
              *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x38) = 0x1000;
              *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x3a) = 0x1000;
              *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x3c) = 0x1000;
              psVar1 = puVar6 + 4;
              puVar6 = puVar6 + 5;
              func_0x00051b04(*(undefined4 *)(iVar5 + 0xc0),0xc,(int)*psVar1);
              iVar5 = iVar5 + 4;
            } while (iVar4 < (int)(uint)*(byte *)(param_1 + 8));
          }
          *(undefined1 *)(*(int *)(param_1 + 0xc0) + 0x3f) = 0x30;
          *(undefined1 *)(*(int *)(param_1 + 0xc4) + 0x3f) = 0;
          *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38) = 0x400;
        }
      }
      else if (*(char *)(param_1 + 5) == '\x01') {
        iVar4 = func_0x0012999c(param_1);
        if (iVar4 != 0) {
          *(undefined1 *)(param_1 + 4) = 1;
          *(undefined1 *)(param_1 + 5) = 0;
          *(undefined1 *)(param_1 + 6) = 0;
        }
        func_0x0007778c(param_1);
        func_0x00051844(param_1);
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

