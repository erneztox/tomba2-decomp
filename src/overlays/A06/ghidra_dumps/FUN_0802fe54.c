// FUN_0802fe54

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_0802fe54(int param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    if (*(short *)(param_1 + 0x32) < *(short *)(param_1 + 0x66)) {
      return 0;
    }
    *(undefined2 *)(param_1 + 0x32) = *(undefined2 *)(param_1 + 0x66);
    *(undefined1 *)(param_1 + 6) = 0;
  }
  else if (bVar1 < 2) {
    if (bVar1 == 0) {
      iVar4 = 3;
      if (*(char *)(param_1 + 0x5e) != '\0') {
        iVar4 = func_0x0009a450();
        iVar4 = iVar4 % 3;
      }
      if (iVar4 == 0) {
        *(undefined2 *)(param_1 + 0x4a) = 0xf800;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (iVar4 == 1) {
        *(undefined2 *)(param_1 + 0x4a) = 0xf000;
        *(undefined2 *)(param_1 + 0x50) = 0x200;
        *(undefined1 *)(param_1 + 6) = 1;
      }
      else if (iVar4 == 2) {
        uVar3 = func_0x0009a450();
        if (((uVar3 & 1) != 0) && (DAT_1f800137 != '\x01')) {
          func_0x00074590(0x80,0,0xffffffd8);
        }
        *(undefined2 *)(param_1 + 0x4a) = 0xe000;
        *(undefined2 *)(param_1 + 0x50) = 0x400;
        *(undefined1 *)(param_1 + 6) = 1;
      }
      else {
        *(undefined2 *)(param_1 + 0x42) = 0x20;
        *(undefined1 *)(param_1 + 6) = 2;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 == 2) {
    sVar2 = *(short *)(param_1 + 0x42);
    *(short *)(param_1 + 0x42) = sVar2 + -1;
    if (sVar2 != 1) {
      return 0;
    }
    *(undefined1 *)(param_1 + 6) = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

