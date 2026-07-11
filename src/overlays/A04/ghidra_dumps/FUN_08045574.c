// FUN_08045574

/* WARNING: Control flow encountered bad instruction data */

void FUN_08045574(int param_1)

{
  undefined2 uVar1;
  
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    *(undefined1 *)(param_1 + 0x2a) = 4;
    *(ushort *)(param_1 + 0x4e) = (ushort)*(byte *)(param_1 + 3) << 9;
    *(ushort *)(param_1 + 0x4a) = (ushort)*(byte *)(param_1 + 3) * -2 + -4;
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0004766c(param_1);
  func_0x00049760(param_1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x4a);
  uVar1 = func_0x00083e80((int)*(short *)(param_1 + 0x4e));
  *(undefined2 *)(param_1 + 0x44) = uVar1;
  *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x40;
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * -0x200;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * -0x200;
  func_0x0004954c(param_1,(int)*(short *)(param_1 + 0x80),0);
  if ((DAT_800bfa0c & 0x80) != 0) {
    *(undefined1 *)(param_1 + 0x5e) = 1;
    *(undefined1 *)(param_1 + 5) = 0;
  }
  return;
}

