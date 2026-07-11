// FUN_080198e8

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_080198e8(int param_1)

{
  byte bVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  short sVar4;
  int iVar5;
  undefined1 auStack_20 [2];
  undefined2 local_1e;
  short local_1a;
  undefined2 local_16;
  
  bVar1 = *(byte *)(param_1 + 4);
  if (bVar1 == 1) {
    *(undefined1 *)(param_1 + 1) = 1;
    func_0x0004190c(param_1);
    if (*(byte *)(param_1 + 5) < 7) {
                    /* WARNING: Could not emulate address calculation at 0x08019a60 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)((uint)*(byte *)(param_1 + 5) * 4 + -0x7fef6ce8))();
      return;
    }
    sVar4 = *(short *)(param_1 + 0x62) - _DAT_1f800240;
    *(short *)(param_1 + 0x32) = sVar4;
    *(undefined2 *)(param_1 + 0x2e) = _DAT_800e7eae;
    _DAT_800e7eb2 = *(short *)(param_1 + 0x8a) + sVar4 + *(short *)(param_1 + 0x60);
    *(undefined2 *)(param_1 + 0x36) = _DAT_800e7eb6;
    *(undefined2 *)(param_1 + 0x56) = _DAT_800e7ed6;
    _DAT_1f8000de = *(undefined2 *)(param_1 + 0x2e);
    _DAT_1f8000e2 = *(short *)(param_1 + 0x32) + -200;
    _DAT_1f8000e6 = *(undefined2 *)(param_1 + 0x36);
    func_0x000518fc(param_1);
    if (DAT_800e7fc9 != '\x04') {
      if (_DAT_800e7ec4 == 0) {
        func_0x00041768(param_1,0,5);
      }
      else {
        func_0x00041768(param_1,2,5);
        if (0x17ff < _DAT_800e7ec4) {
          return;
        }
        if ((_DAT_1f80017c & 7) != 0) {
          return;
        }
        local_1e = (undefined2)
                   ((*(int *)(*(int *)(param_1 + 0xe8) + 0x2c) +
                    *(int *)(*(int *)(param_1 + 0xf8) + 0x2c)) / 2);
        local_1a = *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x84);
        local_16 = (undefined2)
                   ((*(int *)(*(int *)(param_1 + 0xe8) + 0x34) +
                    *(int *)(*(int *)(param_1 + 0xf8) + 0x34)) / 2);
        func_0x0003116c(0x35,auStack_20,0xffffffa6);
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    func_0x00041768(param_1,4,5);
    if (_DAT_800e7ec4 != 0) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    iVar5 = func_0x000519e0(param_1,0xf,_DAT_800ecfa0,0x8011cb3c);
    if (iVar5 == 0) {
      *(undefined1 *)(param_1 + 0xb) = 0xf;
      *(undefined2 *)(param_1 + 0x60) = 0xff9c;
      uVar3 = _DAT_800ecfa4;
      *(undefined4 *)(param_1 + 0x7c) = 0x8001b4dc;
      *(undefined4 *)(param_1 + 0x3c) = uVar3;
      func_0x00041718(param_1,0,0);
      uVar2 = _DAT_800e7eae;
      *(undefined2 *)(param_1 + 0x32) = 0xf9e0;
      *(undefined2 *)(param_1 + 0x62) = 0xf9e0;
      *(undefined2 *)(param_1 + 0x2e) = uVar2;
      *(undefined2 *)(param_1 + 0x36) = _DAT_800e7eb6;
      uVar2 = _DAT_800e7ed6;
      _DAT_800e7eb2 =
           *(short *)(param_1 + 0x8a) + *(short *)(param_1 + 0x32) + *(short *)(param_1 + 0x60);
      *(undefined2 *)(param_1 + 0x4a) = 0;
      *(undefined2 *)(param_1 + 0x56) = uVar2;
      *(char *)(param_1 + 4) = *(char *)(param_1 + 4) + '\x01';
      iVar5 = func_0x0003315c(param_1);
      if (iVar5 != 0) {
        *(undefined4 *)(iVar5 + 0x1c) = 0x80112d80;
      }
      *(undefined2 *)(param_1 + 0x84) = 0x5a;
      *(undefined1 *)(param_1 + 0xbf) = 0;
      if (DAT_800bf871 == '\x05') {
        *(undefined1 *)(param_1 + 5) = 3;
        *(undefined2 *)(param_1 + 0x40) = 0x5a;
        halt_baddata();
      }
    }
  }
  else if (bVar1 != 2) {
    if (bVar1 != 3) {
      halt_baddata();
    }
    func_0x0007a624(param_1);
  }
  return;
}

