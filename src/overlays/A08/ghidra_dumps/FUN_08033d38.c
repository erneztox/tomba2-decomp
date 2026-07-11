// FUN_08033d38

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08033d38(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0x10);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar4 = func_0x00051b70(param_1,0x1b,0x10);
    if (iVar4 != 0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecf90;
    **(short **)(param_1 + 0xc0) = **(short **)(param_1 + 0xc0) + -0x2d;
    *(short *)(*(int *)(param_1 + 0xc0) + 4) = *(short *)(*(int *)(param_1 + 0xc0) + 4) + 0x28;
    *(undefined2 *)(param_1 + 0x54) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
    *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar5 + 0x56);
    uVar2 = *(undefined2 *)(iVar5 + 0x32);
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(undefined2 *)(param_1 + 0x32) = uVar2;
  }
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 != 1) {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(_DAT_800e7f50 + 0x2c);
      *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(_DAT_800e7f50 + 0x34);
      halt_baddata();
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 4) = 3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar3 = *(short *)(param_1 + 0x56) + 0x70;
    *(short *)(param_1 + 0x56) = sVar3;
    if (*(short *)(iVar5 + 0x56) + 0x1000 <= (int)sVar3) {
      *(short *)(param_1 + 0x56) = *(short *)(iVar5 + 0x56) + 0x1000;
    }
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
  }
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(*(int *)(iVar5 + 0xdc) + 0x2c);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(*(int *)(iVar5 + 0xdc) + 0x34);
  iVar4 = func_0x00083f50((int)*(short *)(iVar5 + 0x56));
  *(short *)(param_1 + 0x2e) =
       *(short *)(param_1 + 0x2e) - (short)(iVar4 * *(short *)(param_1 + 0x40) >> 0xc);
  iVar5 = func_0x00083e80((int)*(short *)(iVar5 + 0x56));
  *(short *)(param_1 + 0x36) =
       *(short *)(param_1 + 0x36) - (short)(-iVar5 * (int)*(short *)(param_1 + 0x40) >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

