// FUN_0801224c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801224c(int param_1)

{
  uint uVar1;
  ushort *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 0;
  if (*(byte *)(param_1 + 0x2a) < 3) {
    puVar2 = (ushort *)&DAT_801418bc;
    do {
      iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*puVar2) * 0x10000) >> 0x10;
      iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)puVar2[2]) * 0x10000) >> 0x10;
      uVar1 = func_0x00084080(iVar4 * iVar4 + iVar3 * iVar3);
      if (((int)(uVar1 & 0xffff) <= *(short *)(param_1 + 0x80) + 0x28) &&
         ((int)((uint)*(ushort *)(param_1 + 0x84) +
                ((uint)*(ushort *)(param_1 + 0x32) - (uint)puVar2[1]) + 0x50 & 0xffff) <=
          *(short *)(param_1 + 0x86) + 0x50)) {
        if (-1 < *(short *)(param_1 + 0x4a)) {
          return;
        }
        iVar5 = func_0x00023290(param_1);
        if (iVar5 == 0) {
          return;
        }
        iVar5 = func_0x00085690(-iVar3,iVar4);
        *(char *)(param_1 + 0x2b) = (char)(iVar5 >> 4);
        func_0x00022c0c(param_1,1);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      iVar5 = iVar5 + 1;
      puVar2 = puVar2 + 3;
    } while (iVar5 < 3);
  }
  return;
}

