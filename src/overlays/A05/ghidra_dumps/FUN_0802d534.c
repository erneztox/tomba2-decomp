// FUN_0802d534

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_0802d534(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  byte bVar4;
  
  func_0x0004766c();
  bVar4 = func_0x00049250(param_1,0,
                          (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
  bVar1 = *(byte *)(param_1 + 0x29);
  *(byte *)(param_1 + 0x29) = bVar1 | bVar4;
  if (bVar1 == 0 && bVar4 == 0) {
    func_0x00049760(param_1);
    return *(undefined1 *)(param_1 + 0x29);
  }
  func_0x00049674(param_1);
  if ((*(byte *)(param_1 + 0x46) & 1) != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x56) = _DAT_1f8001a0;
  uVar3 = _DAT_1f8001a2;
  uVar2 = _DAT_1f8001a0;
  *(undefined2 *)(param_1 + 0x58) = _DAT_1f8001a2;
  *(undefined2 *)(param_1 + 0x60) = uVar2;
  *(undefined2 *)(param_1 + 0x62) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

