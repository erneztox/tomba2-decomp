// FUN_0803e758

/* WARNING: Control flow encountered bad instruction data */

void FUN_0803e758(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  ushort uVar4;
  int iVar5;
  short sVar6;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      return;
    }
    if (bVar1 != 0) {
      halt_baddata();
    }
    *(undefined4 *)(param_1 + 0x3c) = 0x8013fdc4;
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0x400;
    uVar3 = func_0x0009a450();
    *(undefined2 *)(param_1 + 0x4e) = uVar3;
    *(undefined2 *)(param_1 + 0x44) = 0;
    *(undefined4 *)(param_1 + 0x50) = 0x101010;
    *(undefined4 *)(param_1 + 0x54) = 0;
    *(undefined1 *)(param_1 + 0x29) = 0;
    *(undefined2 *)(param_1 + 0x32) = 0xffc4;
    uVar4 = func_0x0009a450();
    sVar6 = (uVar4 & 0x3ff) + 0xa00;
    *(undefined4 *)(param_1 + 0x5c) = 0;
    iVar5 = func_0x00083f50(sVar6);
    *(int *)(param_1 + 0x60) = iVar5 >> 6;
    iVar5 = func_0x00083e80(sVar6);
    *(int *)(param_1 + 100) = iVar5 >> 6;
    *(short *)(param_1 + 0x4c) = 0x400 - sVar6;
    *(undefined1 *)(param_1 + 4) = 1;
    *(undefined1 *)(param_1 + 5) = 0x10;
  }
  cVar2 = *(char *)(param_1 + 5);
  *(char *)(param_1 + 5) = cVar2 + -1;
  if ((cVar2 == '\0') || (0x11 < DAT_800bf9c6)) {
    *(undefined1 *)(param_1 + 4) = 2;
  }
  else {
    *(short *)(param_1 + 0x4e) = *(short *)(param_1 + 0x4e) + 0x100;
    *(short *)(param_1 + 0x30) = *(short *)(param_1 + 0x30) + *(short *)(param_1 + 0x60);
    *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + *(short *)(param_1 + 100);
    *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) - (*(int *)(param_1 + 0x60) >> 3);
    *(int *)(param_1 + 100) = *(int *)(param_1 + 100) - (*(int *)(param_1 + 100) >> 3);
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 0x5c) + 0x100;
    func_0x0002b278();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

