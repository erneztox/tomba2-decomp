// FUN_00009de4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00009de4(int param_1)

{
  byte bVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  iVar5 = *(int *)(param_1 + 0x10);
  if (bVar1 == 1) {
    cVar2 = *(char *)(iVar5 + 1);
    *(char *)(param_1 + 1) = cVar2;
    if (cVar2 != '\0') {
      *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(iVar5 + 0x2c);
      *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(iVar5 + 0x30);
      *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(iVar5 + 0x34);
      *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(iVar5 + 0x2e);
      *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(iVar5 + 0x36);
      if (*(char *)(iVar5 + 0xbf) == '\0') {
        *(short *)(param_1 + 0x4a) = *(short *)(iVar5 + 0x32) + *(short *)(iVar5 + 0x84);
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(short *)(param_1 + 0x4a) = (*(short *)(iVar5 + 0x84) + -0x620) - _DAT_1f800240;
      uVar3 = *(undefined2 *)(iVar5 + 0x56);
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x56) = uVar3;
      iVar4 = 0x80 - (((int)*(short *)(param_1 + 0x4a) - (int)*(short *)(iVar5 + 0x32)) + 0x50 >> 2)
      ;
      *(short *)(param_1 + 0x4e) = (short)iVar4;
      iVar4 = iVar4 * 0x10000 >> 0x10;
      if (-1 < iVar4) {
        if (0x80 < iVar4) {
          *(undefined2 *)(param_1 + 0x4e) = 0x80;
        }
        iVar5 = 0x100 - (((int)*(short *)(param_1 + 0x4a) - (int)*(short *)(iVar5 + 0x32)) + -0x50
                        >> 2);
        *(short *)(param_1 + 0x50) = (short)iVar5;
        iVar5 = iVar5 * 0x10000 >> 0x10;
        if (iVar5 < 0) {
          *(undefined2 *)(param_1 + 0x50) = 0;
          *(undefined1 *)(param_1 + 1) = 0;
        }
        else {
          if (iVar5 < 0x101) {
            return;
          }
          *(undefined2 *)(param_1 + 0x50) = 0x100;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x4e) = 0;
      *(undefined1 *)(param_1 + 1) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x40) = 200;
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x42) = 0x8c;
      *(undefined2 *)(param_1 + 0xe) = 0;
      halt_baddata();
    }
    if (bVar1 < 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  return;
}

