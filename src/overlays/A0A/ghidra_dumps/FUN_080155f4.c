// FUN_080155f4

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080155f4(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  int iVar4;
  uint *puVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  puVar5 = *(uint **)(param_1 + 0x10);
  if (bVar1 == 1) {
    if ((_DAT_1f80024c == puVar5) || (_DAT_1f800260 != 0)) {
      if ((*puVar5 & 0xff0c) == 0x100) {
        *(uint *)(param_1 + 0x2c) = puVar5[0xb];
        *(uint *)(param_1 + 0x30) = puVar5[0xc];
        *(uint *)(param_1 + 0x34) = puVar5[0xd];
        *(undefined1 *)(param_1 + 0x2a) = *(undefined1 *)((int)puVar5 + 0x2a);
        iVar4 = func_0x000489e4(param_1,(int)*(short *)(param_1 + 0x32));
        uVar3 = _DAT_1f8001a2;
        uVar2 = _DAT_1f8001a0;
        if ((iVar4 == 1) && (*(short *)(param_1 + 0x32) <= _DAT_1f8001a4)) {
          *(short *)(param_1 + 0x4a) = _DAT_1f8001a4;
          *(undefined1 *)(param_1 + 1) = 1;
          *(undefined2 *)(param_1 + 0x48) = *(undefined2 *)(param_1 + 0x2e);
          *(undefined2 *)(param_1 + 0x4c) = *(undefined2 *)(param_1 + 0x36);
          *(undefined2 *)(param_1 + 0x56) = uVar2;
          *(undefined2 *)(param_1 + 0x58) = uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 1) = 0;
        if (*(char *)(param_1 + 1) != '\0') {
          iVar4 = 0x80 - ((int)*(short *)(param_1 + 0x4a) - (int)*(short *)((int)puVar5 + 0x32) >> 4
                         );
          *(short *)(param_1 + 0x4e) = (short)iVar4;
          if (iVar4 < 0) {
            *(undefined2 *)(param_1 + 0x4e) = 0;
            *(undefined1 *)(param_1 + 1) = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
          if (0x80 < iVar4) {
            *(undefined2 *)(param_1 + 0x4e) = 0x80;
          }
          iVar4 = 0x100 - ((int)*(short *)(param_1 + 0x4a) - (int)*(short *)((int)puVar5 + 0x32) >>
                          4);
          *(short *)(param_1 + 0x50) = (short)iVar4;
          if (iVar4 < 0) {
            *(undefined2 *)(param_1 + 0x50) = 0;
            *(undefined1 *)(param_1 + 1) = 0;
            halt_baddata();
          }
          if (0x100 < iVar4) {
            *(undefined2 *)(param_1 + 0x50) = 0x100;
            halt_baddata();
          }
          return;
        }
      }
      return;
    }
    *(undefined1 *)(param_1 + 4) = 3;
  }
  else {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if (bVar1 == 0) {
      *(undefined1 *)(param_1 + 4) = 1;
      *(undefined2 *)(param_1 + 0x54) = 0;
      if ((short)puVar5[0x2e] == 0x800) {
        *(undefined2 *)(param_1 + 0x40) = 0x50;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined2 *)(param_1 + 0x40) = 0xa0;
      *(undefined2 *)(param_1 + 0x42) = 0xdc;
      *(undefined2 *)(param_1 + 0xe) = 0;
      *(undefined1 *)(param_1 + 0x2b) = 0;
      *(undefined1 *)(param_1 + 0x46) = 0;
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

