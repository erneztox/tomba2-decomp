// FUN_080246e0

/* WARNING: Control flow encountered bad instruction data */

void FUN_080246e0(int param_1)

{
  byte bVar1;
  uint uVar2;
  
  bVar1 = *(byte *)(param_1 + 7);
  if (bVar1 == 1) {
LAB_08024734:
    uVar2 = func_0x00083f50((int)*(short *)(param_1 + 0x4c));
    *(short *)(*(int *)(param_1 + 0xc0) + 0xc) = (short)(uVar2 >> 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 7) = 1;
      *(undefined2 *)(param_1 + 0x52) = 0x40;
      *(undefined2 *)(param_1 + 0x4c) = 0;
      goto LAB_08024734;
    }
  }
  else if (bVar1 == 2) {
    *(ushort *)(param_1 + 0x4c) =
         *(short *)(param_1 + 0x4c) + *(short *)(param_1 + 0x52) * 8 & 0xfff;
    if (*(short *)(param_1 + 0x4c) == 0) {
      bVar1 = func_0x0009a450();
      *(byte *)(param_1 + 7) = (bVar1 & 1) + 1;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

