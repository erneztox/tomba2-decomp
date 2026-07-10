// FUN_0000c1f8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_0000c1f8(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    func_0x00041098(param_1);
    if (*(char *)(param_1 + 0x70) != -1) {
      return 0;
    }
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    func_0x00040cdc(param_1,0,*(undefined4 *)((DAT_800bf870 - 10) * 4 + -0x7fedbd14));
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        func_0x00041098(param_1);
        if (*(char *)(param_1 + 0x70) == -1) {
          *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
          if ((DAT_800bfa18 & 0x1f) != 0) {
            func_0x00040cdc(param_1,0,*(undefined4 *)((DAT_800bf870 - 10) * 4 + -0x7fedbbe0));
            *(undefined1 *)(param_1 + 0x70) = 1;
            uVar2 = _DAT_800e7ed6;
            *(undefined2 *)(param_1 + 0xb8) = 0x1000;
            *(undefined2 *)(param_1 + 0xba) = 0x1000;
            *(undefined2 *)(param_1 + 0xbc) = 0x1000;
            *(undefined2 *)(param_1 + 0x56) = uVar2;
            halt_baddata();
          }
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x00041098(param_1);
        if (*(char *)(param_1 + 0x70) == -1) {
          halt_baddata();
        }
        func_0x0004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
        _DAT_1f8000c0 = 0xffd8;
        _DAT_1f8000c2 = 0xffd0;
        _DAT_1f8000c4 = 0;
        func_0x00084470(0x1f800118,&DAT_1f8000c0,&DAT_1f8000a0);
        *(short *)(param_1 + 0x2e) = *(short *)(param_1 + 0x2e) + _DAT_1f8000a0;
        *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + _DAT_1f8000a4;
        *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + _DAT_1f8000a8;
        func_0x0007778c(param_1);
        func_0x000518fc(param_1);
      }
      return 0;
    }
    if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined1 *)(param_1 + 6) = 1;
    func_0x00040cdc(param_1,0,0x80124264);
    *(undefined1 *)(param_1 + 0x70) = 1;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

