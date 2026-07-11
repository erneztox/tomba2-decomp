// FUN_0802cd04

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802cd04(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_800bf864;
  func_0x00041a1c(param_1,1);
  if (*(ushort *)(param_1 + 0x36) - 0x24a0 < 0x9ff) {
    iVar2 = func_0x00083e80((((short)*(ushort *)(param_1 + 0x36) + -0x24a0) * 0x800) / 0x9fe);
    *(short *)(param_1 + 0x32) = (short)((iVar2 << 7) >> 0xc) + -0xd0c;
    *(undefined2 *)(iVar1 + 0x60) = 1;
    *(undefined2 *)(iVar1 + 0x62) = *(undefined2 *)(param_1 + 0x36);
    *(short *)(iVar1 + 100) = *(short *)(param_1 + 0x32) + 0x8c;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(iVar1 + 0x60) = 0;
  return;
}

