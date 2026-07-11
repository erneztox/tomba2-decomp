// FUN_8013488c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8013488c(int param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte *pbVar4;
  int iVar5;
  int local_58;
  int local_54;
  int local_50;
  
  iVar5 = 0;
  pbVar4 = &DAT_8014bc8c;
  do {
    bVar3 = *pbVar4;
    pbVar1 = pbVar4 + 2;
    pbVar2 = pbVar4 + 1;
    iVar5 = iVar5 + 1;
    pbVar4 = pbVar4 + 4;
    local_58 = (int)((uint)bVar3 * 4 * (int)*(short *)(param_1 + 0x56) * 3) >> 8;
    local_50 = (int)((uint)*pbVar1 * 4 * (int)*(short *)(param_1 + 0x56) * 3) >> 8;
    local_54 = (int)((uint)*pbVar2 * 4 * (int)*(short *)(param_1 + 0x5a)) >> 7;
    func_0x80085480(param_1 + 0x48,0x1f800000);
    func_0x80084520(0x1f800000,&local_58);
    func_0x80084110(&DAT_1f8000f8,0x1f800000,0x1f800000);
    func_0x80084220(param_1 + 0x2c,&DAT_1f800014);
    _DAT_1f800014 = _DAT_1f800014 + _DAT_1f80010c;
    _DAT_1f800018 = _DAT_1f800018 + _DAT_1f800110;
    _DAT_1f80001c = _DAT_1f80001c + _DAT_1f800114;
    func_0x80084660(0x1f800000);
    func_0x80084690(0x1f800000);
    *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + 0x200;
    _DAT_1f800090 = (uint)*(byte *)(param_1 + 0x55) * -0x20 + 0x1000;
    func_0x80027768(*(undefined4 *)(param_1 + 0x50),0,(int)*(short *)(param_1 + 0x32),
                    *(undefined1 *)(param_1 + 7));
  } while (iVar5 < 8);
  return;
}

