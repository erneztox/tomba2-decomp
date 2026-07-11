// FUN_08036fb8

/* WARNING: Control flow encountered bad instruction data */

void FUN_08036fb8(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 uStack_16;
  
  bVar1 = *(byte *)(param_1 + 6);
  iVar3 = *(int *)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        halt_baddata();
      }
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * 0x100;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      if (-0x1f39 < *(short *)(param_1 + 0x32)) {
        local_1e = *(undefined2 *)(param_1 + 0x2e);
        *(undefined2 *)(param_1 + 0x32) = 0xe0c8;
        local_1a = *(short *)(param_1 + 0x32) + -0x78;
        uStack_16 = *(undefined2 *)(param_1 + 0x36);
        iVar3 = func_0x0003116c(8,auStack_20,0x1e);
        *(byte *)(iVar3 + 0x28) = *(byte *)(iVar3 + 0x28) | 0x80;
        func_0x00074590(7,0,0);
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
      if (DAT_800bf816 == '\0') {
        *(undefined1 *)(param_1 + 4) = 3;
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 6) = 1;
    *(undefined2 *)(param_1 + 0x40) = 0x10;
  }
  sVar2 = *(short *)(param_1 + 0x40);
  *(short *)(param_1 + 0x40) = sVar2 + -1;
  if (sVar2 == 1) {
    *(undefined2 *)(param_1 + 0x4a) = 0xe000;
    *(undefined2 *)(param_1 + 0x50) = 0x280;
    *(undefined2 *)(param_1 + 0x48) = 0xf700;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    func_0x00074590(9,6,0);
  }
  func_0x0004bd64(param_1,0,*(undefined4 *)(iVar3 + 0xdc),*(undefined4 *)(iVar3 + 0xd0),0);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

