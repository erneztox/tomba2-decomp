// FUN_080106ac

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_080106ac(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
          >> 0x10;
  iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
          >> 0x10;
  uVar3 = func_0x00084080(iVar1 * iVar1 + iVar2 * iVar2);
  if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) < (int)(uVar3 & 0xffff)) {
    return 0xffffffff;
  }
  iVar1 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
  if ((int)(iVar1 + (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x84) & 0xffff)
      <= (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
    if (iVar1 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar1 = (int)((((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84)) +
                  ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84))) * 0x10000
                 ) >> 0x10;
    if (0 < iVar1) {
      DAT_1f800253 = 4;
      *(int *)(param_1 + 0x30) = (*(short *)(param_2 + 0x32) + iVar1) * 0x10000;
      if (*(char *)(param_1 + 0x145) != '\x01') {
        return 3;
      }
      if (-1 < *(short *)(param_1 + 0x4a)) {
        return 3;
      }
      *(undefined2 *)(param_1 + 0x4a) = 0;
      return 3;
    }
    if ((*(byte *)(param_1 + 0x145) & 1) == 0) {
      *(undefined1 *)(param_2 + 0x29) = 1;
      *(int *)(param_1 + 0x30) = (*(short *)(param_2 + 0x32) + iVar1) * 0x10000;
      func_0x00022c78();
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

