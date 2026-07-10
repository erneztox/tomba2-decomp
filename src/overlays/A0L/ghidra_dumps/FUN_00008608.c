// FUN_00008608

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00008608(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  iVar3 = *(int *)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        *(undefined1 *)(param_1 + 1) = 1;
        halt_baddata();
      }
      if (3 < DAT_800bfa58) {
        *(undefined1 *)(param_1 + 4) = 3;
        func_0x0004b0d8(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      func_0x00084470(iVar3 + 0x98,param_1 + 0x60,&DAT_1f8000a0);
      *(short *)(param_1 + 0x2e) = *(short *)(*(int *)(iVar3 + 0xdc) + 0x2c) + _DAT_1f8000a0;
      *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(*(int *)(iVar3 + 0xdc) + 0x30);
      *(short *)(param_1 + 0x36) = *(short *)(*(int *)(iVar3 + 0xdc) + 0x34) + _DAT_1f8000a8;
      goto LAB_00008788;
    }
    if (bVar1 != 0) {
      *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x4a) = 0xd000;
    *(undefined2 *)(param_1 + 0x50) = 0x280;
    *(undefined2 *)(param_1 + 0x40) = 0x20;
    *(undefined2 *)(param_1 + 0x60) = 0x40;
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined2 *)(param_1 + 0x62) = 0xfff0;
    *(undefined2 *)(param_1 + 100) = 0;
  }
  *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -5;
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  sVar2 = *(short *)(param_1 + 0x40) + -1;
  *(short *)(param_1 + 0x40) = sVar2;
  *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
  if (sVar2 == -1) {
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    DAT_800bfa58 = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_00008788:
  *(undefined1 *)(param_1 + 1) = 1;
  return;
}

