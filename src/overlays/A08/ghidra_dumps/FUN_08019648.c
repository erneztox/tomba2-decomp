// FUN_08019648

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x080197b4) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_08019648(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  undefined2 uVar3;
  int iVar4;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    param_1[0x14a] = param_1[0x147];
    func_0x00076d68(param_1);
    func_0x00056b48(param_1,1);
    func_0x00055d5c(param_1);
    func_0x0010fb44(param_1,0);
    if ((*(ushort *)(param_1 + 0x6a) & 0x10) != 0) {
      param_1[5] = 0x2b;
      param_1[6] = 0;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    sVar2 = *(short *)(param_1 + 0x40);
    *(short *)(param_1 + 0x40) = sVar2 + -1;
    if (sVar2 == 1) {
      param_1[6] = param_1[6] + '\x01';
    }
    func_0x000551c4(param_1);
    if (((int)*(short *)(param_1 + 0x40) % 7 & 0xffffU) == 0) {
      func_0x00074590(0x33,0,0);
    }
    *(undefined2 *)(param_1 + 0x16c) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    iVar4 = func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
    uVar3 = _DAT_1f8001a8;
    if ((iVar4 != 0) && (_DAT_1f8001a4 + -500 <= (int)_DAT_1f80019e)) {
      _DAT_1f80019e = _DAT_1f8001a4;
      *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
      *(undefined2 *)(param_1 + 0x16c) = uVar3;
      func_0x00049674(param_1);
      *(undefined2 *)(param_1 + 0x142) = _DAT_1f8001a2;
      halt_baddata();
    }
  }
  else if (bVar1 < 2) {
    if (bVar1 != 0) {
      halt_baddata();
    }
    DAT_800bf80e = 0;
    func_0x00053d90(param_1);
    uVar3 = 0x1c;
    if (DAT_1f800137 == '\x01') {
      uVar3 = 0xe;
    }
    *(undefined2 *)(param_1 + 0x40) = uVar3;
    param_1[0x146] = 0;
    param_1[0x145] = 0;
    param_1[0x147] = DAT_800bf81f >> 4;
    param_1[6] = param_1[6] + '\x01';
    func_0x00054198(param_1);
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    func_0x00054d14(param_1,0xdb,0);
    uVar3 = 0xf000;
    if (param_1[0x147] == '\0') {
      uVar3 = 0x1000;
    }
    *(undefined2 *)(param_1 + 0x44) = uVar3;
    param_1[7] = 3;
    func_0x000551c4(param_1);
    param_1[0x181] = 1;
    *(undefined2 *)(param_1 + 0x16c) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    iVar4 = func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
    uVar3 = _DAT_1f8001a8;
    if ((iVar4 != 0) && (_DAT_1f8001a4 + -500 <= (int)_DAT_1f80019e)) {
      _DAT_1f80019e = _DAT_1f8001a4;
      *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
      *(undefined2 *)(param_1 + 0x16c) = uVar3;
      func_0x00049674(param_1);
      *(undefined2 *)(param_1 + 0x142) = _DAT_1f8001a2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    if (bVar1 != 2) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(undefined2 *)(param_1 + 0x16c) = 0;
    *(undefined2 *)(param_1 + 0x6a) = 0;
    iVar4 = func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
    uVar3 = _DAT_1f8001a8;
    if ((iVar4 != 0) && (_DAT_1f8001a4 + -500 <= (int)_DAT_1f80019e)) {
      _DAT_1f80019e = _DAT_1f8001a4;
      *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
      *(undefined2 *)(param_1 + 0x16c) = uVar3;
      func_0x00049674(param_1);
      *(undefined2 *)(param_1 + 0x142) = _DAT_1f8001a2;
    }
    *param_1 = 3;
    *(undefined2 *)(param_1 + 0x172) = 0x1e;
    param_1[5] = 0x1d;
    param_1[6] = 1;
    func_0x00054198(param_1);
    func_0x00054d14(param_1,0xdd,6);
    DAT_800bf80e = 1;
    func_0x000551c4(param_1);
  }
  return;
}

