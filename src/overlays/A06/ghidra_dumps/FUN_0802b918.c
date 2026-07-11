// FUN_0802b918

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802b918(int param_1)

{
  short sVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0x2b) != '\0') {
    *(undefined2 *)(param_1 + 0x6a) = 1;
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
    if (*(char *)(param_1 + 3) == '\x01') {
      *(undefined2 *)(param_1 + 0x58) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 0xc) = 0;
  }
  if (*(short *)(param_1 + 0x6a) == 1) {
    if (*(char *)(param_1 + 3) == '\0') {
      *(undefined2 *)(param_1 + 0x4a) = 4;
      *(undefined2 *)(param_1 + 0x6c) = 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x4a) = 8;
    *(undefined2 *)(param_1 + 0x6c) = 8;
    *(undefined2 *)(param_1 + 0x6e) = 0x1e;
    uVar3 = func_0x0009a450();
    if ((uVar3 & 1) != 0) {
      *(short *)(param_1 + 0x4a) = -*(short *)(param_1 + 0x4a);
    }
    *(short *)(param_1 + 0x6a) = *(short *)(param_1 + 0x6a) + 1;
  }
  else if (*(short *)(param_1 + 0x6a) == 2) {
    *(short *)(*(int *)(param_1 + 0xc0) + 10) =
         *(short *)(*(int *)(param_1 + 0xc0) + 10) + *(short *)(param_1 + 0x4a);
    uVar2 = *(ushort *)(param_1 + 0x6c);
    iVar4 = *(int *)(param_1 + 0xc0);
    if ((int)((uint)uVar2 << 0x10) >> 0xf <
        (int)((uint)*(ushort *)(iVar4 + 10) + (uint)uVar2 & 0xffff)) {
      if (0 < *(short *)(param_1 + 0x4a)) {
        *(ushort *)(iVar4 + 10) = uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(ushort *)(iVar4 + 10) = -uVar2;
      sVar1 = *(short *)(param_1 + 0x6c) + -1;
      *(short *)(param_1 + 0x6c) = sVar1;
      if (sVar1 < 3) {
        *(undefined2 *)(param_1 + 0x6c) = 2;
      }
      *(short *)(param_1 + 0x4a) = -*(short *)(param_1 + 0x4a);
    }
    uVar2 = *(short *)(param_1 + 0x6e) - 1;
    *(ushort *)(param_1 + 0x6e) = uVar2;
    if ((int)((uint)uVar2 << 0x10) < 1) {
      *(undefined2 *)(*(int *)(param_1 + 0xc0) + 10) = 0;
      *(undefined2 *)(param_1 + 0x6a) = 0;
    }
    if (*(char *)(param_1 + 3) != '\x01') {
      *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = *(short *)(*(int *)(param_1 + 0xc0) + 10) << 2;
      return;
    }
    *(short *)(param_1 + 0x58) = *(short *)(*(int *)(param_1 + 0xc0) + 10) << 2;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

