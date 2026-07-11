// FUN_080186bc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080186bc(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 5);
  iVar3 = *(int *)(param_1 + 0x10);
  if (bVar1 == 1) {
    func_0x0004bd64(param_1,0,*(undefined4 *)(iVar3 + 0xd8),*(undefined4 *)(iVar3 + 0xcc),0);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x14;
    if (5 < DAT_800bfa28) {
      *(undefined2 *)(param_1 + 0x56) = 0xfc00;
      *(undefined2 *)(param_1 + 0x54) = 0x200;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x0004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x3c;
    if (4 < DAT_800bfa28) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    func_0x0004bd64(param_1,0,*(undefined4 *)(iVar3 + 0xd8),*(undefined4 *)(iVar3 + 0xcc),0);
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0x14;
    if (6 < DAT_800bfa28) {
      *(undefined2 *)(param_1 + 0x4a) = 0xe000;
      *(undefined2 *)(param_1 + 0x50) = 0x80;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 3) {
      halt_baddata();
    }
    if (7 < DAT_800bfa28) {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -10;
    *(short *)(param_1 + 0x54) = *(short *)(param_1 + 0x54) + 0x40;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    sVar2 = *(short *)(param_1 + 0x60) + 1;
    *(short *)(param_1 + 0x60) = sVar2;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    if (sVar2 == 4) {
      func_0x00074590(0x2a,0xe,0);
      func_0x00074590(0xf,3,0);
    }
  }
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x000517f8(param_1);
  return;
}

