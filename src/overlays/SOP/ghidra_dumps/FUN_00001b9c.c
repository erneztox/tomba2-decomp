// FUN_00001b9c

/* WARNING: Control flow encountered bad instruction data */

void FUN_00001b9c(int param_1)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar4 = *(int *)(param_1 + 0x10);
  if (bVar1 == 1) {
    if (DAT_800bf9b4 < 5) {
      cVar2 = *(char *)(iVar4 + 1);
      *(char *)(param_1 + 1) = cVar2;
      if (cVar2 == '\0') {
        return;
      }
      *(undefined2 *)(param_1 + 0x40) = 0x50;
      *(undefined2 *)(param_1 + 0x42) = 0x6e;
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar4 + 0x2c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar4 + 0x30);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar4 + 0x34);
      *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(iVar4 + 0x2e);
      *(short *)(param_1 + 0x4a) = *(short *)(iVar4 + 0x32) + *(short *)(iVar4 + 0x84);
      *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(iVar4 + 0x36);
      iVar3 = 0x80 - (((int)*(short *)(param_1 + 0x4a) - (int)*(short *)(iVar4 + 0x32)) + -0x78 >> 2
                     );
      *(short *)(param_1 + 0x4e) = (short)iVar3;
      iVar3 = iVar3 * 0x10000 >> 0x10;
      if (iVar3 < 0) {
        *(undefined2 *)(param_1 + 0x4e) = 0;
        *(undefined1 *)(param_1 + 1) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (0x80 < iVar3) {
        *(undefined2 *)(param_1 + 0x4e) = 0x80;
      }
      iVar4 = 0x100 - (((int)*(short *)(param_1 + 0x4a) - (int)*(short *)(iVar4 + 0x32)) + -0x78 >>
                      2);
      *(short *)(param_1 + 0x50) = (short)iVar4;
      iVar4 = iVar4 * 0x10000 >> 0x10;
      if (iVar4 < 0) {
        *(undefined2 *)(param_1 + 0x50) = 0;
        *(undefined1 *)(param_1 + 1) = 0;
      }
      else {
        if (iVar4 < 0x101) {
          return;
        }
        *(undefined2 *)(param_1 + 0x50) = 0x100;
      }
    }
    else {
      *(undefined1 *)(param_1 + 4) = 2;
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x40) = 0x50;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x42) = 0x6e;
      *(undefined2 *)(param_1 + 0xe) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
    }
  }
  else if (bVar1 == 2) {
    *(undefined1 *)(param_1 + 4) = 3;
  }
  else if (bVar1 == 3) {
    func_0x0007a624();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

