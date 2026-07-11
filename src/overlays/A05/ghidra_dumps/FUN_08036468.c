// FUN_08036468

/* WARNING: Control flow encountered bad instruction data */

void FUN_08036468(int param_1)

{
  short sVar1;
  byte bVar2;
  short sVar3;
  
  if (((*(char *)(param_1 + 0x5e) == '\x01') && (-1 < *(short *)(param_1 + 0x44))) &&
     (*(short *)(param_1 + 0x36) < 0x3f35)) {
    *(short *)(param_1 + 0x44) = -*(short *)(param_1 + 0x44);
  }
  if (*(byte *)(param_1 + 5) < 3) {
    *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + -0xa8;
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x20;
    func_0x00041a1c(param_1,1);
    sVar1 = *(short *)(param_1 + 0x4a);
    sVar3 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    *(short *)(param_1 + 0x4a) = sVar3;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar1 * 0x100;
    if (0x27ff < sVar3) {
      *(undefined2 *)(param_1 + 0x4a) = 0x2800;
    }
    if (*(short *)(param_1 + 0x32) < -0x2f3a) {
      return;
    }
    *(undefined2 *)(param_1 + 0x32) = 0xd0c6;
    *(undefined2 *)(param_1 + 0x56) = 0;
    *(undefined2 *)(param_1 + 0x58) = 0;
    bVar2 = *(char *)(param_1 + 5) + 1;
    *(byte *)(param_1 + 5) = bVar2;
    *(short *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) >> 1;
    *(ushort *)(param_1 + 0x4a) = (ushort)bVar2 * 200 + -0x1c00;
  }
  else if (*(byte *)(param_1 + 5) == 3) {
    *(undefined1 *)(param_1 + 4) = 3;
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

