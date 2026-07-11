// FUN_0803e8d4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0803e8d4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined1 *)(param_1 + 0x5e) = 1;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined2 *)(param_1 + 0xb8) = 0;
    *(undefined2 *)(param_1 + 0xba) = 0;
    *(undefined2 *)(param_1 + 0xbc) = 0;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x38) = 0x800;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3a) = 0x800;
    *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x3c) = 0x800;
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + -0xc;
  *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(param_1 + 0x60);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 100);
  iVar1 = func_0x00083e80((int)*(short *)(param_1 + 0x4e));
  *(short *)(param_1 + 0x44) = (short)(iVar1 * 0x60 >> 4);
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
  *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x40;
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
  if ((*(short *)(param_1 + 0x32) < -0x2b75) &&
     (*(undefined2 *)(param_1 + 0x32) = 0xd48a, (*(ushort *)(param_1 + 0x4e) & 0xfff) == 0)) {
    *(undefined1 *)(param_1 + 3) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  if (*(ushort *)(param_1 + 0xb8) < 0x1c00) {
    *(ushort *)(param_1 + 0xb8) = *(ushort *)(param_1 + 0xb8) + 0x100;
    *(short *)(param_1 + 0xba) = *(short *)(param_1 + 0xba) + 0x100;
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + 0x100;
  }
  func_0x000778e4(param_1,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(param_1 + 0x32)) * 0x10000)
                          >> 0x10);
  func_0x00051844(param_1);
  return;
}

