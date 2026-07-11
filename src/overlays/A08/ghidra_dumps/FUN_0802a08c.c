// FUN_0802a08c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0802a08c(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  
  func_0x0007778c();
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    if ((DAT_800bfa44 & 2) == 0) {
      return;
    }
    *param_1 = 2;
    *(undefined2 *)(param_1 + 0x40) = 200;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      if (DAT_800bf8e4 == '\0') {
        param_1[5] = 1;
      }
      else {
        *param_1 = 2;
        *(undefined2 *)(param_1 + 0xba) = 0;
        param_1[5] = 10;
      }
    }
  }
  else if (bVar1 == 2) {
    _DAT_800e7eae = 0x3f01;
    _DAT_800e7eb6 = 0x1e3f;
    if ((DAT_800e7e84 != '\x04') &&
       (sVar2 = *(short *)(param_1 + 0x40), *(ushort *)(param_1 + 0x40) = sVar2 - 1U,
       -1 < (int)((uint)(ushort)(sVar2 - 1U) << 0x10))) {
      return;
    }
    func_0x00040cdc(param_1,0,0x801455c0);
    param_1[0x70] = 2;
    param_1[0x47] = 0;
    param_1[5] = param_1[5] + '\x01';
  }
  else if (bVar1 == 3) {
    func_0x00041098(param_1);
    if (param_1[0x70] == -1) {
      param_1[5] = 10;
    }
    if (param_1[0x47] != '\0') {
      if ((uint)_DAT_1f80017c % 0x2d == 0) {
        func_0x00074590(0x33,0xffffffd8,0);
      }
      func_0x000521f4(0,0,0xc1,2);
      _DAT_800e8042 = *(short *)(param_1 + 0x4e);
      _DAT_800e8046 = *(short *)(param_1 + 0x50);
      _DAT_800e804a = *(short *)(param_1 + 0x52);
      if (param_1[0x47] != 'Z') {
        uVar3 = func_0x0009a450();
        _DAT_800e8042 = (_DAT_800e8042 + 7) - (uVar3 & 0xf);
        uVar3 = func_0x0009a450();
        _DAT_800e8046 = (_DAT_800e8046 + 7) - (uVar3 & 0xf);
        uVar3 = func_0x0009a450();
        _DAT_800e804a = (_DAT_800e804a + 7) - (uVar3 & 0xf);
        halt_baddata();
      }
      param_1[0x47] = 0;
    }
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

