// FUN_80119620

/* WARNING: Removing unreachable block (ram,0x8011999c) */
/* WARNING: Removing unreachable block (ram,0x801198e4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80119620(undefined1 *param_1)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  
  if (1 < DAT_800bf9dd) {
    param_1[3] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    FUN_8012295c();
    return;
  }
  bVar1 = param_1[5];
  if (bVar1 == 1) {
    if (DAT_800bf9dd == 0) {
      if (((DAT_800e7eaa - 0x10 < 2) && (0x1108 < _DAT_800e7eb6)) &&
         (_DAT_800e7eb6 = 0x1108, DAT_800e7ea9 != '\0')) {
        func_0x80054198();
        param_1[5] = 2;
        FUN_80122794();
        return;
      }
      goto LAB_801199a0;
    }
    if ((DAT_800e7eaa - 0x10 < 2) && (iVar3 = 0x111c, 0x111c < _DAT_800e7eb6)) {
      _DAT_800e7eb6 = 0x111c;
    }
    else {
      if ((param_1[0x2b] != '\x03') || (DAT_800e7ea9 == '\0')) goto LAB_801199a0;
      func_0x80054198();
      param_1[5] = 3;
      iVar3 = func_0x80042354(1,1);
    }
  }
  else {
    if (1 < bVar1) {
      iVar3 = 3;
      if (bVar1 == 2) {
        bVar1 = param_1[6];
        if (bVar1 != 1) {
          if (bVar1 < 2) {
            if (bVar1 == 0) {
              param_1[6] = 1;
              func_0x80040cdc(param_1,&DAT_8014e4ec,0x80149794);
              param_1[0x70] = 1;
              DAT_800bf9eb = 0;
              FUN_80122874();
              return;
            }
          }
          else if (bVar1 == 2) {
            if (_DAT_800bf830 != -1) goto LAB_801199a0;
            param_1[6] = 3;
            DAT_800bf9dd = 1;
            func_0x80042310();
          }
          else if (bVar1 == 3) {
            param_1[6] = 0;
          }
          DAT_800bf8cf = *(undefined1 *)((*(ushort *)(_DAT_800bf930 + 0x16) >> 6 & 7) + 0x8014a258);
          return;
        }
        func_0x80041098(param_1);
        if (param_1[0x70] == -1) {
          param_1[6] = param_1[6] + '\x01';
          FUN_80122874();
          return;
        }
      }
      else {
        if (bVar1 != 3) goto LAB_8012293c;
        bVar1 = param_1[6];
        if (bVar1 != 1) {
          if (1 < bVar1) {
            if (bVar1 != 2) {
              FUN_80122930();
              return;
            }
            param_1[6] = 0;
            FUN_80122930();
            return;
          }
          if (bVar1 != 0) {
            FUN_80122930();
            return;
          }
          param_1[6] = 1;
          func_0x80040cdc(param_1,&DAT_8014e4ec,0x80149854);
          param_1[0x70] = 1;
          FUN_8012292c();
          return;
        }
        func_0x80041098(param_1);
        if (param_1[0x70] == -1) {
          param_1[6] = param_1[6] + '\x01';
          func_0x80042310();
          FUN_80122930();
          return;
        }
      }
LAB_801199a0:
      iVar3 = func_0x8007778c(param_1);
      if (iVar3 != 0) {
        func_0x8004190c(param_1);
        func_0x800518fc(param_1);
      }
      return;
    }
    iVar3 = 0x3c;
    if (bVar1 == 0) {
      *(undefined2 *)(param_1 + 0x80) = 0x3c;
      *(undefined2 *)(param_1 + 0x82) = 0x78;
      *(undefined2 *)(param_1 + 0x84) = 0x80;
      param_1[5] = 1;
      *(undefined2 *)(param_1 + 0x86) = 0xe0;
      uVar2 = 9;
      if (DAT_800bf9dd == 0) {
        uVar2 = 2;
      }
      *param_1 = uVar2;
      *(undefined2 *)(param_1 + 0x2e) = 0x3958;
      *(undefined2 *)(param_1 + 0x32) = 0xf7de;
      *(undefined2 *)(param_1 + 0x36) = 0x10cc;
      *(undefined2 *)(param_1 + 0x56) = 0xc00;
      param_1[0x2a] = 0x10;
      param_1[0x2b] = 0;
      func_0x80077cfc(param_1,&DAT_8014e4ec,4,4);
      iVar3 = 1;
      param_1[0xb] = 1;
      param_1[0x47] = 0;
    }
  }
LAB_8012293c:
  if (iVar3 == 0) {
    func_0x80074590(6,4,0x1e);
    return;
  }
  DAT_800bf8cf = (char)iVar3 + -1;
  *(short *)(_DAT_800bf930 + 10) = *(short *)(_DAT_800bf930 + 10) + *(short *)(_DAT_800bf930 + 0x16)
  ;
  *(short *)(_DAT_800bf930 + 0x16) =
       *(short *)(_DAT_800bf930 + 0x16) + *(short *)(_DAT_800bf930 + 0x12);
  if (0x180 < *(short *)(_DAT_800bf930 + 0x16)) {
    DAT_800bf9de = 0xf;
    *(undefined2 *)(_DAT_800bf930 + 0x16) = 0x180;
    _DAT_800bf8b0 = 0x8c;
    DAT_800bf875 = DAT_800bf875 + '\x01';
  }
  FUN_8012babc(&DAT_800e7eac,1,2);
  return;
}

