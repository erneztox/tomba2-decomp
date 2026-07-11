// FUN_80128330

void FUN_80128330(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar3 = 2;
  uVar4 = *(byte *)(param_1 + 99) & 0x7f;
  do {
    iVar2 = (int)(uVar4 << 0x10) >> 0xe;
    if ((*(byte *)(iVar2 + -0x7feb7a40) & 0x80) != 0) {
      func_0x8004d868((int)*(short *)(iVar2 + -0x7feb7a3e),1);
      do {
        *(int *)(iVar3 + 0x30) = *(int *)(iVar3 + 0x30) + *(short *)(iVar3 + 0x50) * 0x100;
        func_0x800517f8(iVar3);
        FUN_80139c2c(iVar3);
      } while ((int)*(short *)(iVar3 + 0x32) < (int)uVar4);
      *(int *)(iVar3 + 0x30) = param_1;
      return;
    }
    cVar1 = func_0x8004d7ec((int)*(short *)(iVar2 + -0x7feb7a3e),1);
    if (cVar1 != '\0') {
      iVar2 = *(int *)(param_1 + ((iVar3 << 0x10) >> 0xe) + 0xc0);
      *(byte *)(iVar2 + 0x3e) = *(byte *)(iVar2 + 0x3e) | 0x10;
    }
  } while ((((short)iVar3 == 2) && (iVar3 = iVar3 + 1, (*(ushort *)(param_1 + 0x60) & 2) != 0)) &&
          (uVar4 = uVar4 + 1, iVar3 * 0x10000 >> 0x10 < 4));
  return;
}

