
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80071b44(int param_1,int param_2,char param_3)

{
  int iVar1;
  undefined2 uVar2;
  int iVar3;
  
  iVar3 = FUN_80072ddc(param_1,0x80,3,0xd);
  iVar1 = _DAT_800bf83c;
  if (iVar3 != 0) {
    *(code **)(iVar3 + 0x1c) = FUN_80072520;
    *(char *)(iVar3 + 3) = param_3;
    if (param_3 == '\x01') {
      _DAT_800bf874 = _DAT_800bf874 + param_2;
      *(undefined2 *)(iVar3 + 0x54) = *(undefined2 *)(param_1 + 0x2e);
      *(undefined2 *)(iVar3 + 0x56) = *(undefined2 *)(param_1 + 0x32);
      *(undefined2 *)(iVar3 + 0x58) = *(undefined2 *)(param_1 + 0x36);
    }
    uVar2 = FUN_80079634(param_2,iVar3 + 0x44);
    *(undefined2 *)(iVar3 + 0xe) = uVar2;
    uVar2 = 0x7c7e;
    if (4999 < param_2) {
      uVar2 = 0x7c3e;
    }
    *(undefined2 *)(iVar3 + 0x5c) = uVar2;
    FUN_80074590(0x11,0xf,0);
    iVar1 = iVar3;
    if (_DAT_800bf83c != 0) {
      *(undefined1 *)(_DAT_800bf83c + 4) = 3;
    }
  }
  _DAT_800bf83c = iVar1;
  return;
}

