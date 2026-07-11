// FUN_080155b4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_080155b4(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((DAT_800e7fc4 == '\x01') &&
     (iVar1 = (int)(((uint)_DAT_800e7eae - (uint)*(ushort *)(param_1 + 0x2e)) * 0x10000) >> 0x10,
     iVar2 = (int)(((uint)_DAT_800e7eb6 - (uint)*(ushort *)(param_1 + 0x36)) * 0x10000) >> 0x10,
     uVar3 = func_0x00084080(iVar1 * iVar1 + iVar2 * iVar2),
     (int)(uVar3 & 0xffff) <= (int)_DAT_800e7f00 + (int)*(short *)(param_1 + 0x80) + 0x122)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return 0;
}

