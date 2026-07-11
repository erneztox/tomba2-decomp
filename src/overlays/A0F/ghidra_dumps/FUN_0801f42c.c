// FUN_0801f42c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f42c(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 5) == '\0') {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00041098(param_1);
      if (*(char *)(param_1 + 0x70) == -1) {
        *(undefined1 *)(param_1 + 4) = 3;
      }
    }
    func_0x0004190c(param_1);
    if (*(char *)(param_1 + 1) == '\0') {
      return;
    }
    func_0x000518fc(param_1);
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
      iVar3 = func_0x000519e0(param_1,0x12,_DAT_800ecf6c,0x800a43e8);
      uVar2 = _DAT_800ecf70;
      if (iVar3 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x7c) = 0x8001b354;
      *(undefined1 *)(param_1 + 0x7b) = 0;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      func_0x00041718(param_1,0,0);
      func_0x00040cdc(param_1,0x8001b354,0x80120c20);
      *(undefined1 *)(param_1 + 0x70) = 2;
      *(undefined2 *)(param_1 + 0x2e) = 0x1ae0;
      *(undefined2 *)(param_1 + 0x32) = 0xcab3;
      *(undefined2 *)(param_1 + 0x36) = 0x1370;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0xdbc;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

