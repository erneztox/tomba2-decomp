// FUN_08031bec

/* WARNING: Control flow encountered bad instruction data */

void FUN_08031bec(undefined1 *param_1,undefined4 param_2)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    sVar2 = *(short *)(param_1 + 0x4a);
    sVar3 = *(short *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x4a) = sVar3 + *(short *)(param_1 + 0x50);
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
    if (0 < (int)((uint)(ushort)(sVar3 + *(short *)(param_1 + 0x50)) << 0x10)) {
      *param_1 = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
LAB_08031d08:
    func_0x0004b374(param_1,param_2);
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x4a) = 0xd800;
      param_1[5] = 1;
      *(undefined2 *)(param_1 + 0x50) = 0x200;
      func_0x0004b354(param_1,param_2);
      param_1[0xb] = 0x10;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    if (*(short *)(param_1 + 0x4a) < 0x3000) {
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    }
    if ((param_1[0x29] != '\0') || (iVar4 = func_0x00130f50(param_1), iVar4 != 0)) {
      *(undefined2 *)(param_1 + 0x4a) = 0;
      param_1[5] = param_1[5] + '\x01';
    }
    goto LAB_08031d08;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

