// FUN_8012ec4c

void FUN_8012ec4c(int param_1)

{
  int iVar1;
  undefined1 auStack_18 [2];
  short local_16;
  short local_12;
  short local_e;
  
  if (*(char *)(param_1 + 1) != '\0') {
    func_0x80074590(0x8c,0,0);
    return;
  }
  if (*(char *)(param_1 + 3) == '\0') {
    if (*(char *)(param_1 + 1) != '\0') {
      local_16 = *(short *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x2c) +
                 0x28;
      local_12 = *(short *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x30) +
                 -0x32;
      local_e = *(short *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x34) +
                -0x32;
      func_0x8003116c(0x103,auStack_18,0xfffffff6);
      FUN_80140e1c();
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 3) != '\x03') {
      if (((*(short *)(param_1 + 0x42) == 3) && (*(char *)(param_1 + 1) != '\0')) &&
         (*(short *)(*(int *)(param_1 + 0x10) + 0x78) == 0)) {
        func_0x8004ed94(0x23,0x41);
      }
      if (*(char *)(param_1 + 3) != '\x03') {
        func_0x8009a450();
        return;
      }
    }
    *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x14) = 0xffe8;
    *(undefined1 *)(param_1 + 0x46) = 0xff;
    if ((*(char *)(param_1 + 1) != '\0') && (iVar1 = func_0x80072ddc(param_1,2,2,0xe), iVar1 != 0))
    {
      *(undefined4 *)(iVar1 + 0x1c) = 0x801234a4;
      *(undefined2 *)(iVar1 + 0x48) =
           *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x2c);
      *(short *)(iVar1 + 0x4a) =
           *(short *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x30) + -0x8c;
      *(undefined2 *)(iVar1 + 0x4c) =
           *(undefined2 *)(*(int *)(param_1 + (*(byte *)(param_1 + 9) - 1) * 4 + 0xc0) + 0x34);
    }
  }
  return;
}

