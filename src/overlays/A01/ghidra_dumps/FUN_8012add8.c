// FUN_8012add8

/* WARNING: Control flow encountered bad instruction data */

void FUN_8012add8(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  
  bVar1 = param_1[4];
  iVar3 = *(int *)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *param_1 = 3;
    *(undefined2 *)(param_1 + 0x80) = 0x38;
    *(undefined2 *)(param_1 + 0x82) = 0x70;
    *(undefined2 *)(param_1 + 0x84) = 0x8c;
    *(undefined2 *)(param_1 + 0x86) = 0xf0;
    param_1[0xb] = 0x20;
    *(undefined4 *)(param_1 + 0x18) = 0x8012e868;
    *(undefined4 *)(param_1 + 0x60) = 0x800030;
    *(undefined4 *)(param_1 + 0x68) = 0x80138bb4;
    *(undefined4 *)(param_1 + 100) = 0x80138bb4;
    *(undefined4 *)(param_1 + 0x6c) = 0x80138b94;
    param_1[4] = 1;
  }
  if (DAT_1f800137 == '\0') {
    *(int *)(param_1 + 100) = *(int *)(param_1 + 0x68);
    if (*(int *)(param_1 + 0x68) == 0) {
      *(undefined4 *)(param_1 + 0x68) = 0x80138bb4;
      *(undefined4 *)(param_1 + 100) = 0x80138bb4;
    }
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar3 + 0xd8) + 0x2c);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(*(int *)(iVar3 + 0xd8) + 0x30);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(iVar3 + 0xd8) + 0x34);
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_1 + 0x2e) + (*(short *)(*(int *)(iVar3 + 0xd8) + 0x18) >> 6);
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x32) + (*(short *)(*(int *)(iVar3 + 0xd8) + 0x1e) >> 6);
    *(short *)(param_1 + 0x36) =
         *(short *)(param_1 + 0x36) + (*(short *)(*(int *)(iVar3 + 0xd8) + 0x24) >> 6);
    if ((*(char *)(iVar3 + 4) == '\x01') &&
       (cVar2 = *(char *)(iVar3 + 1), param_1[1] = cVar2, cVar2 != '\0')) {
      func_0x80077e7c();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

