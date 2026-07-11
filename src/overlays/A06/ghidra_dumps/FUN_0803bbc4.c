// FUN_0803bbc4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803bbc4(int param_1)

{
  undefined2 uVar1;
  int iVar3;
  int iVar2;
  
  func_0x00048894();
  iVar2 = (uint)_DAT_1f8001a4 - (uint)*(ushort *)(param_1 + 0x32);
  uVar1 = (undefined2)iVar2;
  iVar3 = iVar2 * 0x10000 >> 0x10;
  if (0x280 < iVar3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  iVar2 = iVar2 * 0x10000;
  if (iVar3 < 0x80) {
    uVar1 = 0x80;
    iVar2 = 0x800000;
  }
  if ((iVar2 >> 0x10 != 0x280) || (*(short *)(param_1 + 0x66) != 0x280)) {
    *(undefined2 *)(param_1 + 0x66) = uVar1;
    *(short *)(*(int *)(param_1 + 0x104) + 0x3a) = (short)((iVar2 >> 0x10) * 0x333 >> 7);
  }
  return;
}

