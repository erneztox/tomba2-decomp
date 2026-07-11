// FUN_08042500

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_08042500(int param_1)

{
  byte bVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined1 *puVar5;
  
  bVar1 = *(byte *)(param_1 + 0x78);
  puVar5 = *(undefined1 **)(param_1 + 0x14);
  if (bVar1 == 1) {
    sVar4 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar4 + -1;
    if (sVar4 == 1) {
      func_0x0004ed0c(0x9d,1);
      func_0x0004d650(0x9d,1);
      puVar5[5] = 2;
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    return 0;
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      puVar5[5] = 0;
      func_0x000440e4(&DAT_800e7e80,0x8098,4);
      *(undefined2 *)(param_1 + 0x40) = 0xf;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 == 2) {
      sVar4 = *(short *)(puVar5 + 0x2e);
      sVar2 = *(short *)(puVar5 + 0x32);
      sVar3 = *(short *)(puVar5 + 0x36);
      *(undefined2 *)(param_1 + 0x40) = 0x1e;
      *(undefined2 *)(param_1 + 0x50) = 0xd000;
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
      *(short *)(param_1 + 0x48) = (short)(((0x37a9 - sVar4) * 0x100) / 0x1e);
      *(short *)(param_1 + 0x4a) = (short)(((-0x22f1 - sVar2) * 0x100) / 0x1e);
      *(short *)(param_1 + 0x4c) = (short)(((0x1e92 - sVar3) * 0x100) / 0x1e);
      halt_baddata();
    }
    if (bVar1 == 3) {
      *(int *)(puVar5 + 0x2c) = *(int *)(puVar5 + 0x2c) + *(short *)(param_1 + 0x48) * 0x100;
      *(int *)(puVar5 + 0x30) = *(int *)(puVar5 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
      *(int *)(puVar5 + 0x34) = *(int *)(puVar5 + 0x34) + *(short *)(param_1 + 0x4c) * 0x100;
      *(int *)(puVar5 + 0x30) = *(int *)(puVar5 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
      sVar4 = *(short *)(param_1 + 0x40);
      *(short *)(param_1 + 0x40) = sVar4 + -1;
      *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) + 0x340;
      if (sVar4 != 1) {
        return 0;
      }
      func_0x00074590(0x38,0x16,0);
      func_0x00074590(0x2a,0x14,0);
      *(undefined2 *)(puVar5 + 0x2e) = 0x37a9;
      *(undefined2 *)(puVar5 + 0x32) = 0xdd0f;
      *(undefined2 *)(puVar5 + 0x36) = 0x1e92;
      puVar5[5] = 0;
      puVar5[3] = 2;
      *puVar5 = 1;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

