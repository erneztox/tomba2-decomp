// FUN_08018600

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08018600(int param_1,int param_2,short param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0;
  if ((param_4 & 0x8000) == 0) {
    iVar2 = 200;
  }
  iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2c)) * 0x10000)
          >> 0x10;
  iVar2 = (int)(((uint)*(ushort *)(param_1 + 0x36) - ((uint)*(ushort *)(param_2 + 0x34) + iVar2)) *
               0x10000) >> 0x10;
  uVar1 = func_0x00084080(iVar3 * iVar3 + iVar2 * iVar2);
  if (((int)(uVar1 & 0xffff) <= (int)*(short *)(param_1 + 0x80) + (int)param_3) &&
     ((int)(((uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x30)) +
            (uint)*(ushort *)(param_1 + 0x84) + (param_4 & 0x7fff) & 0xffff) <=
      (int)((int)*(short *)(param_1 + 0x86) + (param_4 & 0x7fff) * 2))) {
    _DAT_1f80009c = func_0x00085690(-iVar2,iVar3);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

