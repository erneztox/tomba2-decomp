// FUN_00002cf0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00002cf0(int param_1)

{
  byte bVar1;
  int iVar2;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (*(char *)(param_1 + 3) != '\0') {
      return;
    }
    func_0x0010baf8(param_1);
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
      *(undefined1 *)(param_1 + 4) = 1;
      if (*(char *)(param_1 + 3) != '\0') {
        return;
      }
      iVar2 = *(int *)(param_1 + 0x10);
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf80;
      func_0x00077b38(param_1,0x8010d490,0);
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined2 *)(param_1 + 0x5c) = 0;
      *(undefined1 *)(param_1 + 0xb) = 0x10;
      *(undefined2 *)(param_1 + 0x5a) = 0;
      *(undefined1 *)(param_1 + 0x47) = 0;
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar2 + 0xdc) + 0x2c);
      *(short *)(param_1 + 0x32) = *(short *)(*(int *)(iVar2 + 0xdc) + 0x30) + 0x14;
      *(short *)(param_1 + 0x36) = *(short *)(*(int *)(iVar2 + 0xdc) + 0x34) + -0x50;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

