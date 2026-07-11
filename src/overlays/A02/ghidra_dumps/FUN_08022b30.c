// FUN_08022b30

/* WARNING: Control flow encountered bad instruction data */

void FUN_08022b30(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 5) == '\0') {
    if ((DAT_800bfa02 & 1) != 0) {
      return;
    }
    uVar3 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar3;
    if (0 < (int)((uint)uVar3 << 0x10)) {
      return;
    }
    *(undefined2 *)(param_1 + 0x4a) = 0xee00;
    uVar3 = func_0x0009a450();
    *(ushort *)(param_1 + 0x52) = 0x100 - (uVar3 & 0x1ff);
    uVar3 = func_0x0009a450();
    *(ushort *)(param_1 + 0x58) = uVar3 & 0xff;
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x380;
    iVar5 = (uint)*(byte *)(param_1 + 3) * 6;
    *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + *(short *)(param_1 + 0x52);
    sVar1 = *(short *)(iVar5 + -0x7fed5df6);
    iVar4 = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    *(int *)(param_1 + 0x30) = iVar4;
    if ((int)sVar1 << 0x10 <= iVar4) {
      uVar2 = *(undefined2 *)(iVar5 + -0x7fed5df6);
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x32) = uVar2;
      uVar3 = func_0x0009a450();
      *(ushort *)(param_1 + 0x40) = uVar3 & 0x7f;
      func_0x00074590(0xe,0xfffffffb,0xffffffe7);
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + -1;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

