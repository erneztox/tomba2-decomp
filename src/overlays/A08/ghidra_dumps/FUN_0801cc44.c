// FUN_0801cc44

/* WARNING: Control flow encountered bad instruction data */

void FUN_0801cc44(undefined1 *param_1)

{
  short sVar1;
  short sVar2;
  int iVar3;
  
  iVar3 = func_0x0007778c();
  if (iVar3 != 0) {
    func_0x000517f8(param_1);
    func_0x0004b374(param_1,1);
  }
  if (param_1[5] == '\x01') {
    if (param_1[6] == '\0') {
      *(undefined2 *)(param_1 + 0x50) = 0xffe0;
      *(undefined2 *)(param_1 + 0x40) = 0x20;
      *(short *)(param_1 + 0x48) = (short)(0x30c6 - *(short *)(param_1 + 0x2e) >> 5);
      *(short *)(param_1 + 0x4a) = (short)(-0xea8 - *(short *)(param_1 + 0x32) >> 5);
      *(short *)(param_1 + 0x4c) = (short)(0x11dc - *(short *)(param_1 + 0x36) >> 5);
      param_1[6] = param_1[6] + '\x01';
    }
    else if (param_1[6] == '\x01') {
      *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + *(short *)(param_1 + 0x48);
      *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + *(short *)(param_1 + 0x4c);
      sVar1 = *(short *)(param_1 + 0x50);
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x4a);
      sVar2 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x50) = sVar1 + 2;
      *(short *)(param_1 + 0x40) = sVar2 + -1;
      *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + sVar1 + 2;
      if (sVar2 != 1) {
        return;
      }
      *param_1 = 1;
      param_1[5] = 0;
      return;
    }
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  return;
}

