// FUN_8012b4b8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8012b4b8(int param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
  if (*(short *)(param_1 + 0x74) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar1 = *(byte *)(param_1 + 0x78);
  if (bVar1 == 1) {
    if (*(short *)(param_1 + 0x72) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = func_0x80041438(&DAT_800e7e80,_DAT_800e7fc0 - 0x800U & 0xfff,0x100);
    if (iVar4 == 0) {
      return 0;
    }
    DAT_800e7fc7 = *(undefined1 *)(param_1 + 0x72);
    *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (*(short *)(param_1 + 0x72) == 2) {
        if (*(short *)(param_1 + 0x74) == 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        sVar2 = func_0x80085690(-((int)(((uint)*(ushort *)(param_1 + 0x76) - (_DAT_800e7eb4 >> 0x10)
                                        ) * 0x10000) >> 0x10),0);
        uVar3 = func_0x80077768((int)sVar2,(int)_DAT_800e7fc0,0);
        *(undefined2 *)(param_1 + 0x72) = uVar3;
      }
      sVar2 = *(short *)(param_1 + 0x76) - _DAT_800e7eb6;
      *(short *)(param_1 + 100) = sVar2;
      if (sVar2 != 0) {
        DAT_800e7e85 = 0x21;
        DAT_800e7e86 = 0;
        if (*(ushort *)(param_1 + 0x72) != (ushort)DAT_800e7fc7) {
          *(undefined1 *)(param_1 + 0x78) = 1;
          halt_baddata();
        }
        *(undefined1 *)(param_1 + 0x78) = 2;
        halt_baddata();
      }
    }
  }
  else {
    if (bVar1 == 2) {
      _DAT_800e7ec4 = -0xc00;
      if (*(short *)(param_1 + 0x72) == 0) {
        _DAT_800e7ec4 = 0xc00;
      }
      func_0x80054d14(&DAT_800e7e80,0xce,4);
      *(char *)(param_1 + 0x78) = *(char *)(param_1 + 0x78) + '\x01';
    }
    else if (bVar1 != 3) {
      halt_baddata();
    }
    if (0 < *(short *)(param_1 + 100)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    iVar4 = (int)_DAT_800e7eb6;
    if (iVar4 <= *(short *)(param_1 + 0x76)) {
      _DAT_800e7ec4 = 0;
      _DAT_800e7eb4 = (int)*(short *)(param_1 + 0x76) << 0x10;
    }
    func_0x80056b48(&DAT_800e7e80,0);
    func_0x80055d5c(&DAT_800e7e80);
    if (_DAT_800e7ec4 != 0) {
      return 0;
    }
    func_0x80054198(&DAT_800e7e80);
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

