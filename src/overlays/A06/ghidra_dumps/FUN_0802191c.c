// FUN_0802191c

/* WARNING: Control flow encountered bad instruction data */

void FUN_0802191c(int param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  
  uVar1 = func_0x0009a450();
  uVar2 = 0x800;
  if ((uVar1 & 1) == 0) {
    uVar2 = 0xf800;
  }
  *(undefined2 *)(param_1 + 0x44) = uVar2;
  if ((uVar1 & 2) != 0) {
    *(undefined2 *)(param_1 + 0x4e) = 0x180;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(undefined2 *)(param_1 + 0x54) = 0;
  *(undefined2 *)(param_1 + 0x4e) = 0;
  *(ushort *)(param_1 + 0x44) = *(short *)(param_1 + 0x44) + (uVar1 & 0x300);
  if (*(char *)(param_1 + 3) == '\0') {
    *(ushort *)(param_1 + 0x4a) = (uVar1 & 0x700) + 0x1000;
    *(ushort *)(param_1 + 0x50) = (uVar1 & 0x30) - 0x100;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(ushort *)(param_1 + 0x4a) = -0xa00 - (uVar1 & 0x700);
  *(ushort *)(param_1 + 0x50) = (uVar1 & 0x30) + 0xc0;
  *(undefined2 *)(param_1 + 0x60) = 0x1000;
  return;
}

