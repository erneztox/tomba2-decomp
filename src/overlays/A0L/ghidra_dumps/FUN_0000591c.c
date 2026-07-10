// FUN_0000591c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0000591c(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_800bf871 == 3) {
      func_0x0010e71c(param_1);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    if ((2 < DAT_800bf871) && (DAT_800bf871 < 6)) {
      if (DAT_800bf841 != '\0') {
        *(undefined1 *)(param_1 + 1) = 1;
        func_0x00077e7c(param_1);
        halt_baddata();
      }
      sVar4 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
      uVar3 = func_0x000776f8((int)sVar4,(int)*(short *)(param_1 + 0x56),0x80);
      *(undefined2 *)(param_1 + 0x56) = uVar3;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x0004190c(param_1);
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
      iVar5 = func_0x000519e0(param_1,0xd,_DAT_800ecfb8,0x80117438);
      uVar2 = _DAT_800ecfe0;
      if (iVar5 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 0xa0;
      *(undefined2 *)(param_1 + 0x86) = 0x120;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x80;
      if (DAT_800bf871 == 4) {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (DAT_800bf871 < 5) {
        if (DAT_800bf871 == 3) {
          if (DAT_800bf939 == -1) {
            _DAT_800bf85c = _DAT_800bf85c + 1;
          }
          if (DAT_800bf93a == -1) {
            _DAT_800bf85c = _DAT_800bf85c + 1;
          }
          if (DAT_800bf93c == -1) {
            _DAT_800bf85c = _DAT_800bf85c + 1;
          }
          if (DAT_800bf93d == -1) {
            _DAT_800bf85c = _DAT_800bf85c + 1;
          }
          _DAT_800bf858 = _DAT_800bf8aa - _DAT_800bf85c;
          func_0x00077c40(param_1,0x8011ad3c,0);
        }
      }
      else if (DAT_800bf871 == 5) {
        func_0x00077c40(param_1,0x8011ad3c,1);
        uVar3 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
        *(undefined2 *)(param_1 + 0x56) = uVar3;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

