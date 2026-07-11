// FUN_080457f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080457f4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  
  if (*(char *)(param_1 + 5) == '\0') {
    *(undefined1 *)(param_1 + 5) = 1;
    bVar1 = DAT_1f80017c;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0xfffc;
    *(undefined2 *)(param_1 + 0x40) = 0;
    *(byte *)(param_1 + 0x46) = bVar1 & 1;
  }
  else if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  func_0x0004766c(param_1);
  func_0x00049760(param_1);
  *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x4a);
  uVar2 = func_0x00083e80((int)*(short *)(param_1 + 0x4e));
  *(undefined2 *)(param_1 + 0x44) = uVar2;
  *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x40;
  *(int *)(param_1 + 0x2c) =
       *(int *)(param_1 + 0x2c) + (int)*(short *)(param_1 + 0x48) * (int)*(short *)(param_1 + 0x44);
  *(int *)(param_1 + 0x34) =
       *(int *)(param_1 + 0x34) + (int)*(short *)(param_1 + 0x4c) * (int)*(short *)(param_1 + 0x44);
  if (*(char *)(param_1 + 0x46) == '\0') {
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * 0x400;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + *(short *)(param_1 + 0x48) * -0x400;
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + *(short *)(param_1 + 0x4c) * -0x400;
  func_0x0004954c(param_1,(int)*(short *)(param_1 + 0x80),0);
  *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + 1;
  if ((*(char *)(param_1 + 1) == '\0') && (0x96 < *(short *)(param_1 + 0x40))) {
    *(undefined1 *)(param_1 + 4) = 3;
    _DAT_800bf858 = 0;
  }
  return;
}

