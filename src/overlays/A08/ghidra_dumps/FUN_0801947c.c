// FUN_0801947c

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0801947c(undefined1 *param_1)

{
  undefined2 uVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  uint uVar5;
  
  bVar2 = param_1[6];
  if (bVar2 != 1) {
    if (1 < bVar2) {
      if (bVar2 != 2) {
        halt_baddata();
      }
      DAT_800bf80e = 0;
      *param_1 = 3;
      *(undefined2 *)(param_1 + 0x172) = 0x1e;
      param_1[4] = 1;
      param_1[5] = 0x1d;
      param_1[6] = 1;
      func_0x00055d5c(param_1);
      param_1[0x180] = 6;
      goto LAB_080195b4;
    }
    if (bVar2 != 0) {
      halt_baddata();
    }
    param_1[0x181] = 1;
    func_0x00054d14(param_1,0xdd,6);
    *(undefined2 *)(param_1 + 0x50) = 0;
    *(undefined2 *)(param_1 + 0x4a) = 0;
    param_1[6] = param_1[6] + '\x01';
    bVar2 = func_0x00055e28(param_1,0);
    param_1[0x147] = bVar2 & 1;
    func_0x00054198(param_1);
    if (param_1[0x147] != '\0') {
      _DAT_1f800192 = *(short *)(param_1 + 0x140) - 0x800U & 0xfff;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    _DAT_1f800192 = *(ushort *)(param_1 + 0x140);
  }
  uVar5 = (uint)_DAT_1f800192;
  sVar3 = func_0x000776f8(uVar5 & 0xfff,(int)*(short *)(param_1 + 0x56),0x100);
  *(short *)(param_1 + 0x56) = sVar3;
  if ((int)sVar3 == (uVar5 & 0xfff)) {
    param_1[6] = param_1[6] + '\x01';
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
LAB_080195b4:
  func_0x00076d68(param_1);
  func_0x0010fb44(param_1,0);
  *(undefined2 *)(param_1 + 0x16c) = 0;
  *(undefined2 *)(param_1 + 0x6a) = 0;
  iVar4 = func_0x0012de84(param_1,(int)*(short *)(param_1 + 0x32));
  uVar1 = _DAT_1f8001a8;
  if ((iVar4 != 0) && (_DAT_1f8001a4 + -500 <= (int)_DAT_1f80019e)) {
    _DAT_1f80019e = _DAT_1f8001a4;
    *(undefined2 *)(param_1 + 0x6a) = _DAT_1f8001a6;
    *(undefined2 *)(param_1 + 0x16c) = uVar1;
    func_0x00049674(param_1);
    *(undefined2 *)(param_1 + 0x142) = _DAT_1f8001a2;
  }
  return;
}

