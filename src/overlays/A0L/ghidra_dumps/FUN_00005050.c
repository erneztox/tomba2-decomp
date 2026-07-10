// FUN_00005050

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00005050(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_800bf871 == 2) {
      if ((*(char *)(param_1 + 5) == '\0') &&
         (func_0x00041098(param_1), *(char *)(param_1 + 0x70) == -1)) {
        *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    else {
      if (DAT_800bf871 < 3) {
        if (DAT_800bf871 != 1) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        _DAT_1f8000c0 = 0xffab;
        _DAT_1f8000c2 = 0xff82;
        _DAT_1f8000c4 = 0x1f;
        func_0x00084470(_DAT_1f800248 + 0x98,&DAT_1f8000c0,&DAT_1f8000a0);
        iVar5 = _DAT_1f800248;
        *(short *)(param_1 + 0x2e) = *(short *)(_DAT_1f800248 + 0x2e) + _DAT_1f8000a0;
        *(short *)(param_1 + 0x32) = *(short *)(iVar5 + 0x32) + _DAT_1f8000a4;
        *(short *)(param_1 + 0x36) = *(short *)(iVar5 + 0x36) + _DAT_1f8000a8;
        *(undefined2 *)(param_1 + 0x56) = *(undefined2 *)(iVar5 + 0x56);
        halt_baddata();
      }
      if (DAT_800bf871 != 5) {
        halt_baddata();
      }
      if (*(char *)(param_1 + 5) == '\0') {
        if (1 < DAT_800bfa56) {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        if (*(char *)(param_1 + 5) != '\x01') {
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
        if (2 < DAT_800bfa57) {
          func_0x00041718(param_1,10,4);
          *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
        }
      }
      sVar4 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
      uVar3 = func_0x000776f8((int)sVar4,(int)*(short *)(param_1 + 0x56),0x80);
      *(undefined2 *)(param_1 + 0x56) = uVar3;
    }
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x00077e7c(param_1);
    func_0x000518fc(param_1);
    if (DAT_800bf841 != '\0') {
      return;
    }
    func_0x0004190c(param_1);
  }
  else {
    if (1 < bVar1) {
      if (bVar1 == 2) {
        return;
      }
      if (bVar1 == 3) {
        func_0x0007a624(param_1);
        return;
      }
      halt_baddata();
    }
    if (bVar1 == 0) {
      iVar5 = func_0x000519e0(param_1,0xf,_DAT_800ecfb0,0x80117338);
      if (iVar5 != 0) {
        return;
      }
      if (DAT_800bf871 != 1) {
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc0),0x16,0x10);
        func_0x00051b04(*(undefined4 *)(param_1 + 0xc4),0x16,0xf);
      }
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      func_0x00040cdc(param_1,0x8011af2c,0x800a3d18);
      uVar2 = _DAT_800ecfd8;
      *(undefined1 *)(param_1 + 0x7b) = 3;
      *(undefined2 *)(param_1 + 0x80) = 0x50;
      *(undefined2 *)(param_1 + 0x82) = 0xa0;
      *(undefined2 *)(param_1 + 0x84) = 0xa0;
      *(undefined2 *)(param_1 + 0x86) = 0x140;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      if (DAT_800bf871 == 2) {
        *(undefined2 *)(param_1 + 0x56) = 0x1bc;
        _DAT_800e7ed6 = 0x309;
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x80;
        func_0x00041718(param_1,3,0);
        func_0x00040d68(param_1,0x8011605c);
        *(undefined1 *)(param_1 + 0x70) = 2;
      }
      else if (DAT_800bf871 < 3) {
        if (DAT_800bf871 == 1) {
          func_0x00041718(param_1,1,0);
        }
      }
      else if (DAT_800bf871 == 5) {
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x80;
        func_0x00041718(param_1,3,0);
        uVar3 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
        *(undefined2 *)(param_1 + 0x56) = uVar3;
        _DAT_1f80024c = param_1;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

