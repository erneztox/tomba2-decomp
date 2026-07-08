
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80092660(ushort param_1,short param_2,ushort param_3,char param_4,undefined2 param_5,
                undefined2 param_6,short param_7,short param_8)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 *puVar4;
  int iVar5;
  
  if (_DAT_80104c24 != 1) {
    _DAT_80104c24 = 1;
    if ((param_1 < 0x18) && (iVar3 = FUN_800962b0((int)param_2,(int)(short)param_3), iVar3 == 0)) {
      _DAT_80105d0c = 0x21;
      iVar3 = (int)param_7;
      iVar5 = (int)param_8;
      DAT_80105cfa = (undefined1)param_5;
      DAT_80105cfb = (undefined1)param_6;
      DAT_80105cfc = (char)param_7;
      if (iVar3 == iVar5) {
        DAT_80105cfd = '@';
      }
      else if (iVar5 < iVar3) {
        if (iVar3 == 0) {
          trap(0x1c00);
        }
        if ((iVar3 == -1) && (iVar5 << 6 == -0x80000000)) {
          trap(0x1800);
        }
        DAT_80105cfd = (char)((iVar5 << 6) / iVar3);
      }
      else {
        if (iVar5 == 0) {
          trap(0x1c00);
        }
        if ((iVar5 == -1) && (iVar3 << 6 == -0x80000000)) {
          trap(0x1800);
        }
        DAT_80105cfc = (char)param_8;
        DAT_80105cfd = '\x7f' - (char)((iVar3 << 6) / iVar5);
      }
      puVar4 = (undefined1 *)(((int)((uint)param_3 << 0x10) >> 0xc) + _DAT_80105cdc);
      DAT_80105d02 = puVar4[1];
      DAT_80105d03 = puVar4[4];
      DAT_80105cf8 = *puVar4;
      puVar4 = (undefined1 *)
               ((((int)param_4 + DAT_80105cff * 0x10) * 0x10000 >> 0xb) + _DAT_80105ce8);
      DAT_80105d07 = *puVar4;
      _DAT_80105d0e = *(short *)(puVar4 + 0x16);
      DAT_80105d05 = puVar4[2];
      DAT_80105d06 = puVar4[3];
      DAT_80105d08 = puVar4[4];
      DAT_80105d09 = puVar4[5];
      DAT_80105d0a = puVar4[1];
      DAT_80105d04 = param_4;
      if (_DAT_80105d0e != 0) {
        iVar3 = (short)param_1 * 0x38;
        _DAT_80105d10 = param_1;
        *(undefined2 *)(iVar3 + -0x7fefab28) = 0x21;
        *(short *)(iVar3 + -0x7fefab20) = param_2;
        cVar1 = DAT_80105cff;
        *(ushort *)(iVar3 + -0x7fefab24) = param_3;
        *(short *)(iVar3 + -0x7fefab26) = (short)cVar1;
        *(short *)(iVar3 + -0x7fefab38) = _DAT_80105d0e;
        cVar1 = DAT_80105d04;
        *(undefined2 *)(iVar3 + -0x7fefab2a) = param_5;
        (&DAT_801054e5)[iVar3] = 1;
        *(undefined2 *)(iVar3 + -0x7fefab36) = 0;
        *(short *)(iVar3 + -0x7fefab22) = (short)cVar1;
        *(short *)(iVar3 + -0x7fefab02) = (short)DAT_80105cfc;
        FUN_80092fd0();
        if (_DAT_80105d0e == 0xff) {
          FUN_800945a0(param_1 & 0xff);
        }
        else {
          uVar2 = FUN_8009440c(param_5,param_6);
          FUN_80094c10(1,uVar2);
        }
        _DAT_80104c24 = 0;
        return (int)(short)param_1;
      }
    }
    _DAT_80104c24 = 0;
  }
  return -1;
}

