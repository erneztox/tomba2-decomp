// FUN_0801f008

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801f008(undefined1 *param_1)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  int iVar4;
  
  bVar1 = param_1[4];
  if (bVar1 == 1) {
    cVar2 = param_1[5];
    if (cVar2 == '\0') {
      param_1[1] = 1;
      func_0x00041098(param_1);
      if (param_1[0x70] == -1) {
        param_1[5] = param_1[5] + '\x01';
      }
      if (param_1[0x47] != '\0') {
        _DAT_800e8042 = *(short *)(param_1 + 0x4e);
        _DAT_800e8046 = *(short *)(param_1 + 0x50);
        _DAT_800e804a = *(short *)(param_1 + 0x52);
        if (param_1[0x47] != '\x01') {
          if (param_1[0x47] == '\x02') {
            uVar3 = func_0x0009a450();
            _DAT_800e8042 = _DAT_800e8042 + (0xf - (uVar3 & 0x1f));
            uVar3 = func_0x0009a450();
            _DAT_800e8046 = _DAT_800e8046 + (0xf - (uVar3 & 0x1f));
            uVar3 = func_0x0009a450();
            _DAT_800e804a = _DAT_800e804a + (0xf - (uVar3 & 0x1f));
            halt_baddata();
          }
          param_1[0x47] = 0;
        }
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (cVar2 != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      DAT_1f800236 = 7;
      _DAT_800bf83a = 0x1500;
      _DAT_800bf89e = 0;
      DAT_800bf88f = 0;
      DAT_800bf839 = cVar2;
      param_1[4] = 3;
    }
    func_0x0004190c(param_1);
    if (param_1[1] == '\0') {
      return;
    }
    func_0x000518fc(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        if (bVar1 != 3) {
          halt_baddata();
        }
        func_0x0007a624(param_1);
      }
      return;
    }
    if (bVar1 == 0) {
      iVar4 = func_0x000519e0(param_1,0xf,_DAT_800ecfac,0x8011f230);
      if (iVar4 != 0) {
        return;
      }
      *(undefined4 *)(param_1 + 0x3c) = _DAT_800ecfb0;
      func_0x00040cdc(param_1,0x80129ec8,0x801209e0);
      param_1[0x70] = 2;
      param_1[0x7b] = 3;
      func_0x00041718(param_1,10,0);
      *(undefined2 *)(param_1 + 0x80) = 0x32;
      *(undefined2 *)(param_1 + 0x82) = 100;
      *(undefined2 *)(param_1 + 0x84) = 0xa0;
      *(undefined2 *)(param_1 + 0x86) = 0x140;
      *(undefined2 *)(param_1 + 0x2e) = 0x1dc0;
      *(undefined2 *)(param_1 + 0x32) = 0xcab3;
      *(undefined2 *)(param_1 + 0x36) = 0x15e0;
      *param_1 = 3;
      param_1[0x47] = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0x400;
      *(undefined2 *)(param_1 + 0x40) = 0;
      param_1[4] = param_1[4] + '\x01';
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

