// FUN_0803aaa0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0803acc8) */

void FUN_0803aaa0(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  
  iVar3 = *(short *)(param_1 + 0x80) * 6;
  iVar4 = *(short *)(param_1 + 0x82) * 6;
  iVar7 = *(int *)(param_1 + 0x10);
  if (*(char *)(param_1 + 5) == '\0') {
    if (*(char *)(iVar7 + 0xbf) == '\0') {
      return;
    }
    *(ushort *)(param_1 + 0x2e) = *(ushort *)(iVar3 + -0x7fec0b2c);
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(iVar3 + -0x7fec0b2a);
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(iVar3 + -0x7fec0b28);
    iVar6 = (int)(((uint)*(ushort *)(iVar4 + -0x7fec0b28) - (uint)*(ushort *)(iVar3 + -0x7fec0b28))
                 * 0x10000) >> 0x10;
    iVar4 = (int)(((uint)*(ushort *)(iVar4 + -0x7fec0b2c) - (uint)*(ushort *)(iVar3 + -0x7fec0b2c))
                 * 0x10000) >> 0x10;
    uVar5 = func_0x00085690(iVar6,iVar4);
    iVar3 = func_0x00083f50(uVar5 & 0xfff);
    *(short *)(param_1 + 0x48) = (short)(iVar3 >> 4);
    iVar3 = func_0x00083e80(uVar5 & 0xfff);
    *(short *)(param_1 + 0x4c) = (short)(iVar3 >> 4);
    uVar1 = func_0x00084080(iVar4 * iVar4 + iVar6 * iVar6);
    *(ushort *)(param_1 + 0x4a) = uVar1;
    uVar5 = (uint)*(byte *)(iVar7 + 0xbf);
    iVar3 = (int)((uint)uVar1 << 0x10) >> 8;
    if (uVar5 == 0) {
      trap(0x1c00);
    }
    if ((uVar5 == 0xffffffff) && (iVar3 == -0x80000000)) {
      trap(0x1800);
    }
    *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
    *(short *)(param_1 + 0x44) = (short)(iVar3 / (int)uVar5);
  }
  else if (*(char *)(param_1 + 5) == '\x01') {
    func_0x0007778c(param_1);
    *(int *)(param_1 + 0x2c) =
         *(int *)(param_1 + 0x2c) +
         (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
    *(int *)(param_1 + 0x34) =
         *(int *)(param_1 + 0x34) +
         (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
    iVar3 = (int)(((uint)*(ushort *)(iVar4 + -0x7fec0b2c) - (uint)*(ushort *)(param_1 + 0x2e)) *
                 0x10000) >> 0x10;
    iVar6 = (int)(((uint)*(ushort *)(iVar4 + -0x7fec0b28) - (uint)*(ushort *)(param_1 + 0x36)) *
                 0x10000) >> 0x10;
    sVar2 = func_0x00084080(iVar3 * iVar3 + iVar6 * iVar6);
    iVar3 = (int)*(short *)(param_1 + 0x4a);
    if (iVar3 == 0) {
      trap(0x1c00);
    }
    iVar3 = func_0x00083e80((0x800 / iVar3) * (iVar3 - sVar2));
    *(short *)(param_1 + 0x32) = *(short *)(iVar4 + -0x7fec0b2a) - (short)(iVar3 >> 4);
    if (*(char *)(iVar7 + 0xbf) == '\0') {
      *(undefined1 *)(param_1 + 4) = 3;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

