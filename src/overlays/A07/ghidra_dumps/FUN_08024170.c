// FUN_08024170

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08024170(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x60) + 8;
    *(short *)(param_1 + 0x60) = sVar2;
    if (0x3ff < sVar2) {
      func_0x00074590(0x86,0,0);
      *(undefined2 *)(param_1 + 0x60) = 0x400;
      *(undefined2 *)(param_1 + 0x40) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((_DAT_1f80017c & 7) == 0) {
      func_0x00074590(0x17,0xfffffff6,0);
    }
    iVar4 = func_0x00083f50((int)*(short *)(param_1 + 0x60));
    sVar2 = (short)(iVar4 >> 2);
    *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = sVar2;
    *(short *)(*(int *)(param_1 + 0xc4) + 0xc) = sVar2 * -2;
    *(short *)(*(int *)(param_1 + 200) + 0xc) = sVar2 * 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bf9d6 == '\f') {
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar2 = *(short *)(param_1 + 0x40) + 1;
    *(short *)(param_1 + 0x40) = sVar2;
    if (5 < sVar2) {
      *(undefined1 *)(param_1 + 0x5e) = 1;
      DAT_800bf9d6 = 0xd;
      *(undefined2 *)(param_1 + 0x60) = 0;
      *(undefined1 *)(param_1 + 5) = 10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar3 = func_0x0009a450();
    *(ushort *)(param_1 + 0x60) = uVar3 & 0x3f;
    sVar2 = *(short *)(param_1 + 0x60);
    *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = sVar2;
    *(short *)(*(int *)(param_1 + 0xc4) + 0xc) = sVar2 * -2;
    *(short *)(*(int *)(param_1 + 200) + 0xc) = sVar2 * 2;
    *(short *)(*(int *)(param_1 + 0xcc) + 0xc) = sVar2 * -2;
  }
  func_0x000779d0(param_1,0,0,0xfffffda0);
  func_0x000517f8(param_1);
  return;
}

