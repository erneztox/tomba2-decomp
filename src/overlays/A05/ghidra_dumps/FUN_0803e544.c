// FUN_0803e544

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803e544(int param_1)

{
  char cVar1;
  short sVar2;
  short sVar3;
  undefined2 uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  
  bVar5 = *(byte *)(param_1 + 4);
  if (bVar5 != 1) {
    if (1 < bVar5) {
      if (bVar5 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar5 != 0) {
      halt_baddata();
    }
    bVar5 = func_0x0009a450();
    *(byte *)(param_1 + 3) = bVar5 & 3;
    *(undefined4 *)(param_1 + 0x3c) = 0x8013fd34;
    iVar6 = (uint)*(byte *)(param_1 + 3) * 0x10;
    uVar4 = *(undefined2 *)(iVar6 + -0x7febffde);
    *(undefined2 *)(param_1 + 0x4a) = 0x177;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x4e) = 0;
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    *(undefined2 *)(param_1 + 0x48) = uVar4;
    *(undefined2 *)(param_1 + 0x2c) = *(undefined2 *)(iVar6 + -0x7febffdc);
    *(undefined2 *)(param_1 + 0x2e) = *(undefined2 *)(iVar6 + -0x7febffda);
    uVar4 = *(undefined2 *)(iVar6 + -0x7febffd8);
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0x10;
    *(undefined2 *)(param_1 + 0x30) = uVar4;
  }
  cVar1 = *(char *)(param_1 + 5);
  iVar6 = (uint)*(byte *)(param_1 + 3) * 0x10;
  *(char *)(param_1 + 5) = cVar1 + -1;
  if ((cVar1 == '\0') || (0x11 < DAT_800bf9c6)) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    *(short *)(param_1 + 0x2c) =
         *(short *)(param_1 + 0x2c) +
         (short)((int)*(short *)(iVar6 + -0x7febffe4) - (int)*(short *)(iVar6 + -0x7febffdc) >> 4);
    *(short *)(param_1 + 0x2e) =
         *(short *)(param_1 + 0x2e) +
         (short)((int)*(short *)(iVar6 + -0x7febffe2) - (int)*(short *)(iVar6 + -0x7febffda) >> 4);
    sVar2 = *(short *)(iVar6 + -0x7febffe0);
    sVar3 = *(short *)(iVar6 + -0x7febffd8);
    uVar7 = *(int *)(param_1 + 0x54) + 1;
    *(uint *)(param_1 + 0x54) = uVar7;
    *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + (short)((int)sVar2 - (int)sVar3 >> 4);
    if (0x11 < uVar7) {
      *(undefined4 *)(param_1 + 0x54) = 0;
    }
    *(undefined1 *)(param_1 + 0x29) = *(undefined1 *)(*(int *)(param_1 + 0x54) + -0x7febffa4);
    iVar6 = func_0x00083f50(*(undefined4 *)(param_1 + 0x58));
    uVar7 = (iVar6 >> 10) + 0x10;
    iVar6 = func_0x0009a450();
    *(uint *)(param_1 + 0x50) = (uVar7 | uVar7 * 0x10000 | 0x1000) - 0x10101;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0x100 + (iVar6 >> 7);
    func_0x0002b278();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

