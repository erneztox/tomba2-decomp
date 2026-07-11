// FUN_08018318

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08018318(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  
  iVar2 = (int)(((uint)_DAT_800e7eae - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10;
  iVar3 = (int)(((uint)_DAT_800e7eb6 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10;
  sVar1 = *(short *)((uint)*(byte *)(param_1 + 3) * 2 + -0x7fee0e7c);
  uVar4 = func_0x00084080(iVar2 * iVar2 + iVar3 * iVar3);
  if ((int)(uVar4 & 0xffff) <= (int)_DAT_800e7f00 + (int)sVar1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

