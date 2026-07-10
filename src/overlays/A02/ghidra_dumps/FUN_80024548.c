// FUN_80024548

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80024548(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  short sVar5;
  undefined4 *puVar6;
  
  iVar3 = 0;
  if ((*(char *)(param_1 + 0x16b) == '\0') && (iVar3 = 0, DAT_1f800137 == '\0')) {
    if ((param_2 == 0) && (1 < *(byte *)(param_1 + 0x144))) {
      iVar3 = 0;
    }
    else {
      _DAT_1f800080 = 0;
      if (*(char *)(param_1 + 0x147) == '\0') {
        uVar2 = *(ushort *)(param_1 + 0x140);
      }
      else {
        uVar2 = *(short *)(param_1 + 0x140) - 0x800U & 0xfff;
      }
      *(ushort *)(param_1 + 0x56) = uVar2;
      if (*(short *)(param_1 + 0x17e) < 0) {
        _DAT_1f800088 = 0x14;
        sVar5 = *(short *)(param_1 + 0x66) + -10;
      }
      else {
        _DAT_1f800088 = 0x28;
        sVar5 = *(short *)(param_1 + 0x66) + -0x1e;
      }
      iVar3 = FUN_80083f50((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x14c) = *(short *)(param_1 + 0x2e) + (short)(iVar3 * sVar5 >> 0xc);
      iVar3 = FUN_80083e80((int)*(short *)(param_1 + 0x56));
      *(short *)(param_1 + 0x14e) = *(short *)(param_1 + 0x32) - *(short *)(param_1 + 0x68);
      *(short *)(param_1 + 0x150) = *(short *)(param_1 + 0x36) - (short)(iVar3 * sVar5 >> 0xc);
      if (DAT_800bf870 == 0) {
        puVar6 = _DAT_1f800158;
        cVar1 = DAT_1f80015e;
        if ((*(ushort *)(param_1 + 0x17e) & 0x200) == 0) {
          while (DAT_1f800182 = cVar1, DAT_1f800182 != '\0') {
            pbVar4 = (byte *)*puVar6;
            DAT_1f800182 = DAT_1f800182 + -1;
            puVar6 = puVar6 + 1;
            cVar1 = DAT_1f800182;
            if (((*pbVar4 & 4) != 0) && (pbVar4[2] == 2)) {
              func_0x80114320(param_1);
              cVar1 = DAT_1f800182;
            }
          }
        }
        if (_DAT_1f800080 != 0) {
          return _DAT_1f800080;
        }
      }
      iVar3 = (**(code **)(&DAT_8009d22c + (uint)DAT_800bf870 * 4))(param_1);
      if ((iVar3 == 0) && (iVar3 = FUN_80024448(param_1), iVar3 == 0)) {
        iVar3 = 0;
      }
    }
  }
  return iVar3;
}

