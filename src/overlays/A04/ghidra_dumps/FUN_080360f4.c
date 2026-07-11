// FUN_080360f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080360f4(int param_1)

{
  int iVar1;
  ushort uVar2;
  
  iVar1 = func_0x00077768((int)*(short *)(param_1 + 0x6c),(int)_DAT_1f8001a0,1);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0xbe) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined1 *)(param_1 + 0xbe) = 1;
  *(ushort *)(param_1 + 0x6c) = *(ushort *)(param_1 + 0x6c) & 0xfff;
  uVar2 = *(ushort *)(param_1 + 0x56) & 0xfff;
  *(ushort *)(param_1 + 0x56) = uVar2;
  if (0 < *(short *)(param_1 + 0x50)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ushort *)(param_1 + 0x40) = uVar2 - *(short *)(param_1 + 0x6c);
  if (*(short *)(param_1 + 0x40) < 0) {
    *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 0x1000;
  }
  *(short *)(param_1 + 0x40) = (short)(char)((ushort)*(undefined2 *)(param_1 + 0x40) >> 8);
  *(ushort *)(param_1 + 0x58) = *(ushort *)(param_1 + 0x58) & 0xfff;
  return;
}

