// FUN_0803dfc0

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803dfc0(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xbf;
    func_0x00077c40(param_1,0x80149588,0x18);
    iVar3 = 6;
    iVar2 = param_1 + 0x18;
    do {
      iVar3 = iVar3 + 1;
      *(undefined4 *)(*(int *)(iVar2 + 0xc0) + 0x40) = 0;
      iVar2 = iVar2 + 4;
    } while (iVar3 < 0x12);
    iVar2 = func_0x00077768((uint)*(byte *)(param_1 + 0x2b) << 4,(int)*(short *)(param_1 + 0x56),0);
    if (iVar2 != 0) {
      iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x48) = (short)(-iVar2 >> 4);
      func_0x00083e80((int)*(short *)(param_1 + 0x56));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x48) = (short)(iVar2 >> 4);
    iVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x4c) = (short)(-iVar2 >> 4);
    *(undefined2 *)(param_1 + 0x4a) = 0xfe00;
    *(undefined2 *)(param_1 + 0x44) = 0x1000;
    if (*(char *)(param_1 + 5) == '\a') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (*(char *)(param_1 + 5) != '\b') {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00077e20(param_1,0x90,0x80,0x81);
    func_0x001371cc(param_1);
    if ((*(char *)(param_1 + 3) == '\0') && (iVar2 = func_0x0011629c(param_1), iVar2 != 0)) {
      *(undefined4 *)(*(int *)(param_1 + 0xd4) + 0x40) = 0;
      DAT_800bfa33 = 1;
    }
    if (*(char *)(param_1 + 1) != '\0') {
      func_0x00074590(0x8f,0,0);
    }
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    iVar2 = (int)*(short *)(param_1 + 0x44);
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x180;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * iVar2;
    *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * iVar2;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * iVar2;
    func_0x0004766c(param_1);
    iVar2 = func_0x000495dc(param_1,0x5a,0x5a);
    if (iVar2 == 0) {
      sVar1 = *(short *)(param_1 + 0x4a) + 0x30;
      *(short *)(param_1 + 0x4a) = sVar1;
      if (0x1000 < sVar1) {
        *(undefined2 *)(param_1 + 0x4a) = 0x1000;
      }
      return;
    }
    func_0x00137b18(param_1,0,0);
    *(undefined1 *)(param_1 + 4) = 3;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

