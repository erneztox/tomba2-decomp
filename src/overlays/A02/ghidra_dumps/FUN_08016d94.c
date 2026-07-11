// FUN_08016d94

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08016d94(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  DAT_1f800182 = DAT_1f800152;
  if (DAT_1f800152 != '\0') {
    puVar4 = _DAT_1f80014c;
    do {
      pcVar5 = (char *)*puVar4;
      DAT_1f800182 = DAT_1f800182 + -1;
      puVar4 = puVar4 + 1;
      if ((*pcVar5 == '\x01') && (pcVar5[2] == '\"')) {
        iVar1 = (int)(((uint)*(ushort *)(param_1 + 0x2c) - (uint)*(ushort *)(pcVar5 + 0x2e)) *
                     0x10000) >> 0x10;
        iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x34) - (uint)*(ushort *)(pcVar5 + 0x36)) *
                     0x10000) >> 0x10;
        uVar3 = func_0x00084080(iVar1 * iVar1 + iVar2 * iVar2);
        if (param_2 + *(short *)(pcVar5 + 0x80) < (int)(uVar3 & 0xffff)) {
          return 0;
        }
        if (param_3 * 2 + (int)*(short *)(pcVar5 + 0x86) <
            (int)(((uint)*(ushort *)(param_1 + 0x30) - (uint)*(ushort *)(pcVar5 + 0x32)) +
                  (uint)*(ushort *)(pcVar5 + 0x84) + param_3 & 0xffff)) {
          return 0;
        }
        pcVar5[0x2b] = '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    } while (DAT_1f800182 != '\0');
  }
  return 0;
}

