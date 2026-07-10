// FUN_00001924

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00001924(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 2) == '\0') {
    _DAT_801006f0 = 0;
    _DAT_801006f2 = 0;
    _DAT_801006f4 = 0;
    _DAT_801006f6 = 0;
    _DAT_801006f8 = 0;
    *(undefined4 *)(param_1 + 0x48) = 0;
    *(undefined4 *)(param_1 + 0x44) = 0;
    _DAT_80100702 = 0;
    _DAT_80100704 = 0;
    _DAT_80100706 = 0;
    _DAT_80100708 = 0;
    _DAT_8010070a = 0;
    _DAT_801006c4 = 0;
    *(undefined1 *)(param_1 + 3) = 0;
    *(char *)(param_1 + 2) = *(char *)(param_1 + 2) + '\x01';
    _DAT_1f8000d0 = CONCAT22(_DAT_800e7eae,_DAT_1f8000d0);
    _DAT_1f8000d4 = CONCAT22(_DAT_800e7eb2 + -0x118,_DAT_1f8000d4);
    _DAT_1f8000d8 = CONCAT22(_DAT_800e7eb6,_DAT_1f8000d8);
    *(undefined2 *)(param_1 + 0x4a) = 0xc00;
    *(undefined2 *)(param_1 + 0x46) = 0;
    func_0x0018ab78(param_1,0x80100690);
    _DAT_801006fa = _DAT_801006f6;
    _DAT_801006fc = _DAT_801006f8;
    *(undefined2 *)(param_1 + 0x68) = 0x1e;
  }
  else if (*(char *)(param_1 + 2) == '\x01') {
    func_0x0018ac84(param_1,0x80100690);
    _DAT_801006f2 = _DAT_801006f2 + 0x103f;
    iVar1 = func_0x00083e80((int)_DAT_801006f2);
    _DAT_1f8000d4 = _DAT_1f8000d4 + iVar1 * 0x20;
    if (_DAT_801006f0 != 0) {
      _DAT_801006f4 = _DAT_801006f4 + 0x107f;
      iVar2 = func_0x00083e80((int)_DAT_801006f4);
      _DAT_801006c4 = iVar2 << 7;
      iVar1 = _DAT_801006c4;
      _DAT_801006c6 = (undefined2)((uint)(iVar2 << 7) >> 0x10);
      _DAT_1f8000f4 = _DAT_801006c6;
      _DAT_801006c4 = iVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_801006f4 = 0;
    _DAT_1f8000f4 = 0;
    if (7 < (uint)(int)_DAT_80100704) {
      iVar1 = func_0x00083e80((int)_DAT_801006fc);
      iVar4 = (int)_DAT_801006f0;
      iVar2 = func_0x00083f50((int)_DAT_801006fc);
      iVar5 = iVar2 * _DAT_801006f0 >> 0xc;
      iVar2 = func_0x00083f50((int)_DAT_801006fa);
      iVar3 = func_0x00083e80((int)_DAT_801006fa);
      _DAT_1f8000d4 = _DAT_1f8000d4 + (iVar1 * iVar4 >> 4);
      _DAT_1f8000d8 = _DAT_1f8000d8 + (iVar2 * iVar5 >> 4);
      _DAT_1f8000d0 = _DAT_1f8000d0 - (iVar3 * iVar5 >> 4);
      _DAT_1f8000f2 = *(undefined2 *)(param_1 + 0x4a);
      _DAT_1f8000f0 = *(undefined2 *)(param_1 + 0x46);
      func_0x00051794(0x1f8000f8);
      func_0x000851f0(&DAT_1f8000f0,0x1f8000f8);
      _DAT_1f8000c0 = -_DAT_1f8000d2;
      _DAT_1f8000c2 = -_DAT_1f8000d6;
      _DAT_1f8000c4 = -_DAT_1f8000da;
      func_0x00084470(0x1f8000f8,&DAT_1f8000c0,0x1f80010c);
      iVar1 = -(int)_DAT_1f8000ee;
      _DAT_1f8000ea = _DAT_1f800106;
      _DAT_1f8000e8 = _DAT_1f800104;
      _DAT_1f8000ec = _DAT_1f800108;
      _DAT_1f800114 = _DAT_1f800114 - _DAT_80100706;
      _DAT_1f800080 = _DAT_1f800104 * iVar1 >> 0xc;
      iVar2 = _DAT_1f800080;
      _DAT_1f800084 = _DAT_1f800106 * iVar1 >> 0xc;
      iVar3 = _DAT_1f800084;
      _DAT_1f8000de = _DAT_1f8000d2 + _DAT_1f800080;
      _DAT_1f800088 = _DAT_1f800108 * iVar1 >> 0xc;
      iVar1 = _DAT_1f800088;
      _DAT_1f8000e2 = _DAT_1f8000d6 + _DAT_1f800084;
      _DAT_1f8000e6 = _DAT_1f8000da + _DAT_1f800088;
      _DAT_1f800080 = iVar2;
      _DAT_1f800084 = iVar3;
      _DAT_1f800088 = iVar1;
      return;
    }
                    /* WARNING: Could not emulate address calculation at 0x00001aac */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(_DAT_80100704 * 4 + -0x7fe75f8c))();
    return;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

