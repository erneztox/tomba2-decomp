// FUN_08026130

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_08026130(int param_1)

{
  byte bVar1;
  short sVar2;
  int iVar3;
  
  bVar1 = *(byte *)(param_1 + 6);
  if (bVar1 == 1) {
    _DAT_800e7eb2 = *(short *)(param_1 + 0x32) - (*(short *)(param_1 + 0x84) + _DAT_800e7ee2);
    *(undefined2 *)(param_1 + 0x52) = 0;
    *(undefined2 *)(param_1 + 0x40) = 0x3c;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    func_0x00074590(0x99,0,0);
    sVar2 = _DAT_800e7eb6;
  }
  else {
    sVar2 = _DAT_800e7eb6;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        if ((((*(char *)(param_1 + 0x29) != '\0') && (DAT_800e7ea9 != '\0')) &&
            (_DAT_800e7eb6 <= *(short *)(param_1 + 0x36))) &&
           (((DAT_800e7ffb == '\0' && (DAT_800bf80d == '\0')) && (DAT_800bf839 == '\0')))) {
          *(undefined1 *)(param_1 + 6) = 1;
          DAT_1f800137 = 2;
          DAT_800e7e84 = 4;
          DAT_800e7e85 = 0x21;
          DAT_800e7e86 = 0;
          _DAT_800e7eb2 = *(short *)(param_1 + 0x32) - (*(short *)(param_1 + 0x84) + _DAT_800e7ee2);
          func_0x00054d14(&DAT_800e7e80,2,6);
        }
        sVar2 = *(short *)(param_1 + 0x36);
        if (*(short *)(param_1 + 0x36) <= _DAT_800e7eb6) {
          return 0;
        }
      }
    }
    else if (bVar1 == 2) {
      _DAT_800e7ed6 = func_0x000776f8(0x400,(int)_DAT_800e7ed6,0x80);
      sVar2 = *(short *)(param_1 + 0x40) + -1;
      *(short *)(param_1 + 0x40) = sVar2;
      if (sVar2 == -1) {
        DAT_800bf839 = '\x01';
        _DAT_800bf83a = 0x208;
        DAT_1f800137 = bVar1;
        DAT_1f800236 = bVar1;
        DAT_800bf80f = bVar1;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
        func_0x0005082c(0,0,0);
        sVar2 = _DAT_800e7eb6;
      }
      else {
        sVar2 = *(short *)(param_1 + 0x52) + 2;
        *(short *)(param_1 + 0x52) = sVar2;
        if (0x20 < sVar2) {
          *(undefined2 *)(param_1 + 0x52) = 0x20;
        }
        _DAT_800e7eb6 = *(short *)(param_1 + 0x36) - *(short *)(param_1 + 0x52);
        *(short *)(param_1 + 0x36) = _DAT_800e7eb6;
        *(short *)(*(int *)(param_1 + 0xc4) + 0xc) =
             *(short *)(*(int *)(param_1 + 0xc4) + 0xc) + *(short *)(param_1 + 0x52) * 8;
        *(short *)(*(int *)(param_1 + 200) + 0xc) =
             *(short *)(*(int *)(param_1 + 200) + 0xc) + *(short *)(param_1 + 0x52) * 8;
        *(short *)(*(int *)(param_1 + 0xcc) + 0xc) =
             *(short *)(*(int *)(param_1 + 0xcc) + 0xc) + *(short *)(param_1 + 0x52) * 8;
        *(short *)(*(int *)(param_1 + 0xd0) + 0xc) =
             *(short *)(*(int *)(param_1 + 0xd0) + 0xc) + *(short *)(param_1 + 0x52) * 8;
        iVar3 = *(int *)(param_1 + 0xc4);
        if (*(short *)(iVar3 + 0xc) < 0x1000) {
          return 0;
        }
        *(ushort *)(iVar3 + 0xc) = *(ushort *)(iVar3 + 0xc) & 0xfff;
        func_0x00074590(0x99,0,0);
        sVar2 = _DAT_800e7eb6;
      }
    }
    else if (bVar1 == 3) {
      _DAT_800e7eb6 = *(undefined2 *)(param_1 + 0x36);
      return 0;
    }
  }
  _DAT_800e7eb6 = sVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

