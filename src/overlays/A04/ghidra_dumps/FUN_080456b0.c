// FUN_080456b0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080456b0(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  if (*(char *)(param_1 + 5) == '\0') {
    uVar4 = (uint)*(byte *)(param_1 + 3);
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(uVar4 * 6 + -0x7febbd58);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(uVar4 * 6 + -0x7febbd56);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(uVar4 * 6 + -0x7febbd54);
    uVar1 = func_0x0009a450();
    *(ushort *)(param_1 + 0x4e) = (uVar1 & 3) << 10;
    *(ushort *)(param_1 + 0x50) = (ushort)*(byte *)(param_1 + 3) << 9;
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  sVar2 = *(short *)(param_1 + 0x50) + 0x20;
  *(short *)(param_1 + 0x50) = sVar2;
  iVar3 = func_0x00083e80((int)sVar2);
  *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar3 * 0x40;
  uVar4 = func_0x00083e80((int)*(short *)(param_1 + 0x4e));
  *(short *)(param_1 + 0x44) = (short)(uVar4 >> 1);
  *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x80;
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
  return;
}

