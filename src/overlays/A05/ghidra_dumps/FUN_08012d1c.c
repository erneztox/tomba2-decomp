// FUN_08012d1c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08012d1c(int param_1,int param_2,int param_3)

{
  short sVar1;
  short sVar2;
  short sVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_3 + 0x2c)) * 0x10000)
          >> 0x10;
  iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_3 + 0x34)) * 0x10000)
          >> 0x10;
  uVar4 = func_0x00084080(iVar6 * iVar6 + iVar5 * iVar5);
  if (((int)(uVar4 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80))
     && ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_3 + 0x30)) +
               (uint)*(ushort *)(param_2 + 0x84) +
               ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84)) & 0xffff) <=
         (int)(short)*(ushort *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86))) {
    _DAT_1f80009c = func_0x00085690(-iVar5,iVar6);
    if (*(char *)(param_2 + 0x5e) == '\0') {
      iVar5 = func_0x00083f50();
      sVar1 = *(short *)(param_1 + 0x80);
      sVar2 = *(short *)(param_2 + 0x80);
      iVar6 = func_0x00083e80(_DAT_1f80009c);
      sVar3 = *(short *)(param_2 + 0x80);
      *(short *)(param_1 + 0x2e) =
           *(short *)(param_3 + 0x2c) + (short)(iVar5 * ((int)sVar1 + (int)sVar2) >> 0xc);
      sVar1 = *(short *)(param_3 + 0x34);
      *(undefined1 *)(param_1 + 0x2b) = 1;
      *(short *)(param_1 + 0x36) =
           sVar1 - (short)(iVar6 * ((int)*(short *)(param_1 + 0x80) + (int)sVar3) >> 0xc);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 0x2b) = 0x80;
    *(undefined1 *)(param_2 + 0x2b) = 1;
    *(int *)(param_2 + 0x10) = param_1;
    DAT_1f800182 = 0;
  }
  return;
}

