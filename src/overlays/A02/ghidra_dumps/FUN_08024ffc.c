// FUN_08024ffc

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08024ffc(int param_1)

{
  byte bVar1;
  ushort uVar2;
  undefined1 *puVar3;
  
  puVar3 = _DAT_800bf844;
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    uVar2 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar2;
    if ((int)((uint)uVar2 << 0x10) < 0) {
      DAT_800e806c = 8;
      if (puVar3 != (undefined1 *)0x0) {
        func_0x0006cba8(puVar3 + 0x2c);
      }
      *(undefined2 *)(param_1 + 0x40) = 100;
      _DAT_1f8000d2 = *(undefined2 *)(*(short *)(param_1 + 0x42) * 6 + -0x7fed52c0);
      _DAT_1f8000d6 = *(undefined2 *)(*(short *)(param_1 + 0x42) * 6 + -0x7fed52be);
      _DAT_1f8000da = *(undefined2 *)(*(short *)(param_1 + 0x42) * 6 + -0x7fed52bc);
      *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (*(short *)(*(int *)(param_1 + 0x38) + 4) != 0) {
        puVar3 = (undefined1 *)func_0x00072ddc(param_1,0,2,0x20);
        if (puVar3 != (undefined1 *)0x0) {
          *puVar3 = 1;
          puVar3[3] = 1;
          *(undefined4 *)(puVar3 + 0x1c) = 0x80123470;
          _DAT_800bf844 = puVar3;
        }
        func_0x000440e4(&DAT_800e7e80,0xc4,0);
        _DAT_800e7ed6 =
             func_0x00085690((int)_DAT_1f800164 - (int)*(short *)(puVar3 + 0x36),
                             (int)*(short *)(puVar3 + 0x2e) - (int)_DAT_1f800160);
        _DAT_800e7ed6 = _DAT_800e7ed6 & 0xfff;
        func_0x00041768(param_1,1,8);
        *(undefined2 *)(param_1 + 0x40) = 0x28;
        *(undefined2 *)(param_1 + 0x42) = 0;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        halt_baddata();
      }
      return 0;
    }
    if (bVar1 != 2) {
      if (bVar1 != 3) {
        halt_baddata();
      }
      if (_DAT_800bf844 == (undefined1 *)0x0) {
        *(undefined1 *)(param_1 + 6) = 0;
        halt_baddata();
      }
      if (_DAT_800bf844[0x5e] != '\0') {
        return 0;
      }
      func_0x0006cba8(_DAT_800bf844 + 0x2c);
      return 0;
    }
    if (_DAT_800bf844 != (undefined1 *)0x0) {
      func_0x0006cba8(_DAT_800bf844 + 0x2c);
    }
    uVar2 = *(short *)(param_1 + 0x40) - 1;
    *(ushort *)(param_1 + 0x40) = uVar2;
    if ((int)((uint)uVar2 << 0x10) < 0) {
      *(undefined2 *)(param_1 + 0x40) = 0x8c;
      _DAT_1f8000d2 = *(undefined2 *)(*(short *)(param_1 + 0x42) * 6 + -0x7fed52c0);
      _DAT_1f8000d6 = *(undefined2 *)(*(short *)(param_1 + 0x42) * 6 + -0x7fed52be);
      _DAT_1f8000da = *(undefined2 *)(*(short *)(param_1 + 0x42) * 6 + -0x7fed52bc);
      if (*(short *)(param_1 + 0x42) < 2) {
        *(short *)(param_1 + 0x42) = *(short *)(param_1 + 0x42) + 1;
        halt_baddata();
      }
      *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    }
  }
  uVar2 = func_0x00085690((int)_DAT_1f800164 - (int)*(short *)(puVar3 + 0x36),
                          (int)*(short *)(puVar3 + 0x2e) - (int)_DAT_1f800160);
  _DAT_800e7ed6 = uVar2 & 0xfff;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

