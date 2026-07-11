// FUN_0803b160

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803b160(int param_1)

{
  short sVar1;
  ushort uVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 6) == '\0') {
    *(byte *)(param_1 + 0x1b) = *(byte *)(param_1 + 0x1b) & 0xbf;
    func_0x00041768(param_1,0xf,4);
    iVar3 = func_0x00077768((uint)*(byte *)(param_1 + 0x2b) << 4,(int)*(short *)(param_1 + 0x56),0);
    if (iVar3 != 0) {
      iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x48) = (short)(-iVar3 >> 4);
      func_0x00083e80((int)*(short *)(param_1 + 0x56));
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar3 = func_0x00083f50((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x48) = (short)(iVar3 >> 4);
    iVar3 = func_0x00083e80((int)*(short *)(param_1 + 0x56));
    *(short *)(param_1 + 0x4c) = (short)(-iVar3 >> 4);
    *(undefined2 *)(param_1 + 0x4a) = 0xfe00;
    *(undefined2 *)(param_1 + 0x44) = 0x1000;
    *(undefined2 *)(param_1 + 0x40) = 0x5a;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
  }
  else if (*(char *)(param_1 + 6) == '\x01') {
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x200;
    func_0x00041a1c(param_1,0);
    func_0x00041ac0(param_1);
    sVar1 = *(short *)(param_1 + 0x4a) + 0x30;
    *(short *)(param_1 + 0x4a) = sVar1;
    if (0x1000 < sVar1) {
      *(undefined2 *)(param_1 + 0x4a) = 0x1000;
    }
    iVar3 = func_0x000495dc(param_1,0x80,0);
    if ((iVar3 != 0) ||
       (uVar2 = *(short *)(param_1 + 0x40) - 1, *(ushort *)(param_1 + 0x40) = uVar2,
       (int)((uint)uVar2 << 0x10) < 1)) {
      if (*(char *)(param_1 + 1) != '\0') {
        func_0x00074590(0x1b,0,0);
      }
      *(undefined1 *)(param_1 + 4) = 3;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

