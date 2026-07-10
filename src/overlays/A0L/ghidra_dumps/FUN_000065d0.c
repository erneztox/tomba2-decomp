// FUN_000065d0

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_000065d0(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    if (DAT_800bf841 == '\0') {
      func_0x0004190c(param_1);
      if (DAT_800bf871 == '\x01') {
        if (*(byte *)(param_1 + 5) < 6) {
                    /* WARNING: Could not emulate address calculation at 0x000067a4 */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6f20))();
          return;
        }
        _DAT_1f8000c0 = 0xfffb;
        _DAT_1f8000c2 = 0xff92;
        _DAT_1f8000c4 = 0;
        func_0x00084470(param_1 + 0x98,&DAT_1f8000c0,&DAT_1f8000a0);
        _DAT_1f800160 = *(short *)(param_1 + 0x2e) + _DAT_1f8000a0;
        _DAT_1f800162 = *(short *)(param_1 + 0x32) + _DAT_1f8000a4;
        _DAT_1f800164 = *(short *)(param_1 + 0x36) + _DAT_1f8000a8;
        _DAT_800e7ed6 = *(undefined2 *)(param_1 + 0x56);
        _DAT_800e7eae = _DAT_1f800160;
        _DAT_800e7eb2 = _DAT_1f800162;
        _DAT_800e7eb6 = _DAT_1f800164;
        *(undefined1 *)(param_1 + 1) = 1;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      if (DAT_800bf871 != '\x05') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077e7c(param_1);
      func_0x000518fc(param_1);
    }
    else {
      *(undefined1 *)(param_1 + 1) = 1;
      func_0x00077e7c(param_1);
    }
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
      iVar4 = func_0x000519e0(param_1,0x12,_DAT_800ecf6c,0x800a43e8);
      uVar2 = _DAT_800ecf70;
      if (iVar4 != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x80) = 0x8c;
      *(undefined2 *)(param_1 + 0x82) = 0x118;
      *(undefined2 *)(param_1 + 0x84) = 0x88;
      *(undefined2 *)(param_1 + 0x86) = 0x110;
      *(undefined4 *)(param_1 + 0x3c) = uVar2;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      if (DAT_800bf871 == '\x01') {
        *(undefined2 *)(param_1 + 0x42) = 0;
        func_0x00077c40(param_1,0x8001b354,3);
        func_0x00054d14(&DAT_800e7e80,0xe4,0);
        *(undefined2 *)(param_1 + 0x2e) = 0x50;
        *(undefined2 *)(param_1 + 0x36) = 0xffb0;
        *(undefined2 *)(param_1 + 0x32) = 0;
        _DAT_1f800248 = param_1;
      }
      else if (DAT_800bf871 == '\x05') {
        func_0x00077c40(param_1,0x8001b354,5);
        uVar3 = func_0x000782b0(param_1 + 0x2c,(int)_DAT_1f800160,(int)_DAT_1f800164);
        *(undefined2 *)(param_1 + 0x56) = uVar3;
        *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xc0 | 0x40;
      }
    }
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

