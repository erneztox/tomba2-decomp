
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80071260(int param_1)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 6) == '\0') {
    FUN_80077cfc(param_1,&PTR_DAT_8001b860,0,8);
    *(undefined2 *)(param_1 + 100) = 0x400;
    sVar2 = *(short *)(param_1 + 0x2e) - _DAT_1f800160;
    *(short *)(param_1 + 0x50) = *(short *)(param_1 + 0x32) - _DAT_1f800162;
    *(short *)(param_1 + 0x4e) = sVar2;
    *(short *)(param_1 + 0x52) = *(short *)(param_1 + 0x36) - _DAT_1f800164;
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
    uVar3 = 0;
  }
  else {
    uVar3 = 0;
    if (*(char *)(param_1 + 6) == '\x01') {
      uVar1 = *(short *)(param_1 + 100) - 0x40;
      *(ushort *)(param_1 + 100) = uVar1;
      if ((int)((uint)uVar1 << 0x10) < 0) {
        *(undefined2 *)(param_1 + 100) = 0;
      }
      sVar2 = FUN_80083e80((int)*(short *)(param_1 + 100));
      iVar5 = (int)sVar2;
      iVar4 = iVar5 * *(short *)(param_1 + 0x4e);
      if (iVar4 < 0) {
        iVar4 = iVar4 + 0xfff;
      }
      iVar6 = iVar5 * *(short *)(param_1 + 0x50);
      *(short *)(param_1 + 0x2e) = _DAT_1f800160 + (short)(iVar4 >> 0xc);
      if (iVar6 < 0) {
        iVar6 = iVar6 + 0xfff;
      }
      iVar5 = iVar5 * *(short *)(param_1 + 0x52);
      *(short *)(param_1 + 0x32) = _DAT_1f800162 + (short)(iVar6 >> 0xc);
      if (iVar5 < 0) {
        iVar5 = iVar5 + 0xfff;
      }
      *(short *)(param_1 + 0x36) = _DAT_1f800164 + (short)(iVar5 >> 0xc);
      sVar2 = *(short *)(param_1 + 100) * 3;
      *(short *)(param_1 + 0xbc) = sVar2;
      *(short *)(param_1 + 0xba) = sVar2;
      *(short *)(param_1 + 0xb8) = sVar2;
      uVar3 = 0;
      if (sVar2 == 0) {
        *(undefined1 *)(param_1 + 5) = 0;
        uVar3 = 1;
      }
    }
  }
  return uVar3;
}

