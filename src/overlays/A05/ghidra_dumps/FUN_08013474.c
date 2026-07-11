// FUN_08013474

/* WARNING: Control flow encountered bad instruction data */

int FUN_08013474(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
          >> 0x10;
  iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
          >> 0x10;
  uVar3 = func_0x00084080(iVar1 * iVar1 + iVar2 * iVar2);
  iVar1 = -1;
  if ((int)(uVar3 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80)) {
    iVar2 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
    iVar1 = -1;
    if ((int)(iVar2 + (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x84) & 0xffff
             ) <= (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
      if (iVar2 * 0x10000 < 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar1 = (((uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84)) +
              ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84))) * 0x10000;
      if (-1 < iVar1 >> 0x10) {
        DAT_1f800253 = 4;
        *(int *)(param_1 + 0x30) = ((int)*(short *)(param_2 + 0x32) + (iVar1 >> 0x10)) * 0x10000;
        iVar1 = 3;
        if ((*(char *)(param_1 + 0x145) == '\x01') && (iVar1 = 3, *(short *)(param_1 + 0x4a) < 0)) {
          *(undefined2 *)(param_1 + 0x4a) = 0;
        }
      }
    }
  }
  return iVar1;
}

