// FUN_080198e4

/* WARNING: Control flow encountered bad instruction data */

void FUN_080198e4(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined4 *)(param_1 + 0x50) = 0xfedcba7;
    *(undefined4 *)(param_1 + 0x54) = 1;
  }
  iVar3 = *(int *)(param_1 + 0x54);
  *(undefined1 *)(param_1 + 1) = 1;
  *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + 8;
  *(int *)(param_1 + 0x54) = iVar3 + -1;
  if (iVar3 != 0) {
    return;
  }
  iVar3 = func_0x0009a450();
  uVar4 = iVar3 >> 10 & 0xf;
  uVar2 = 0x3c;
  if ((3 < uVar4) && (uVar2 = 0x78, 9 < uVar4)) {
    uVar2 = 0xb4;
  }
  *(undefined4 *)(param_1 + 0x54) = uVar2;
  uVar4 = func_0x0009a450();
  func_0x00074590(0x8b,(int)(((uVar4 & 0xf) - 7) * 0x1000000) >> 0x18,0xfffffff6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

