// FUN_080362e4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x08036318) */

void FUN_080362e4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  short sVar3;
  short sVar4;
  
  bVar1 = *(byte *)(param_1 + 5);
  if (bVar1 < 3) {
    if (bVar1 == 0) {
      sVar3 = *(short *)(param_1 + 0x32) + 0x28;
      *(short *)(param_1 + 0x32) = sVar3;
      *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + 0x38;
      if (-0x3046 < sVar3) {
        *(undefined2 *)(param_1 + 0x4a) = 0xe000;
        *(undefined2 *)(param_1 + 0x50) = 0x380;
        uVar2 = func_0x00083f50(0x834);
        *(undefined2 *)(param_1 + 0x48) = uVar2;
        sVar3 = func_0x00083e80(0x834);
        *(short *)(param_1 + 0x4c) = -sVar3;
        *(undefined2 *)(param_1 + 0x44) = 0x28;
        func_0x000521f4(0,0,0xc0,4);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      *(short *)(param_1 + 0x58) = *(short *)(param_1 + 0x58) + -0xa8;
      *(short *)(param_1 + 0x56) = *(short *)(param_1 + 0x56) + 0x20;
      func_0x00041a1c(param_1,1);
      sVar3 = *(short *)(param_1 + 0x4a);
      sVar4 = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
      *(short *)(param_1 + 0x4a) = sVar4;
      *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar3 * 0x100;
      if (0x27ff < sVar4) {
        *(undefined2 *)(param_1 + 0x4a) = 0x2800;
      }
      if (-0x2f3b < *(short *)(param_1 + 0x32)) {
        *(undefined2 *)(param_1 + 0x32) = 0xd0c6;
        *(undefined2 *)(param_1 + 0x56) = 0;
        *(undefined2 *)(param_1 + 0x58) = 0;
        *(undefined2 *)(param_1 + 0x4a) = 0xe400;
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        halt_baddata();
      }
    }
  }
  else {
    if (bVar1 != 3) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (DAT_800bf816 == '\0') {
      *(undefined1 *)(param_1 + 4) = 3;
    }
  }
  return;
}

