// FUN_80118fb8

void FUN_80118fb8(undefined1 *param_1)

{
  byte bVar1;
  short sVar2;
  int iVar4;
  int iVar3;
  
  bVar1 = param_1[6];
  if (bVar1 == 1) {
    iVar4 = *(int *)(param_1 + 0x10);
    iVar3 = *(short *)(iVar4 + 0x36) + -0x10;
    sVar2 = (short)iVar3;
    if (iVar3 * 0x10000 >> 0x10 < 0x41) {
      *(undefined1 *)(iVar4 + 4) = 3;
      sVar2 = 0x40;
      *(undefined4 *)(param_1 + 0x10) = 0;
      param_1[0xbf] = 1;
      param_1[0x5e] = 0;
      param_1[6] = param_1[6] + '\x01';
    }
    *(short *)(param_1 + 0x72) = (short)((0x40 - sVar2) / 2);
    *(short *)(param_1 + 0x6a) = sVar2;
    *(int *)(iVar4 + 0x34) = sVar2 * 0x10000 + 0x100;
    FUN_801208b4();
    FUN_80122114();
    return;
  }
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      FUN_80122114();
      return;
    }
    *param_1 = 3;
    if (*(int *)(param_1 + 0x10) == 0) {
      param_1[5] = 0;
      FUN_80122114();
      return;
    }
    func_0x8003116c(0x24,param_1 + 0x2c,0xffffffce);
    param_1[0x5e] = 2;
    func_0x8004130c(param_1,0);
    param_1[6] = param_1[6] + '\x01';
    func_0x80074590(0x93,0,0);
    func_0x80051b04(*(undefined4 *)(param_1 + 0xc0),0xc,0x2d);
    *(undefined2 *)(param_1 + 0xe) = 0;
    if ((param_1[3] == '\0') || (param_1[3] == '\x03')) {
      *(undefined2 *)(param_1 + 0xe) = 0;
      param_1[3] = 1;
      FUN_80122114();
      return;
    }
  }
  else if (bVar1 == 2) {
    FUN_801208b4(param_1);
    if (param_1[3] == '\x02') {
      param_1[6] = param_1[6] + '\x01';
      FUN_80122114();
      return;
    }
  }
  else {
    if (bVar1 != 3) {
      FUN_80122114();
      return;
    }
    FUN_801208b4(param_1);
    param_1[0x2b] = 0;
    *param_1 = 1;
    param_1[4] = 1;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
  }
  return;
}

