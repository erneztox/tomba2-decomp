
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80035424(undefined4 param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  uVar2 = FUN_80035640(8);
  uVar3 = FUN_80035640(9);
  uVar2 = uVar2 | uVar3;
  if ((uVar2 != 0) && (param_3 != 1)) {
    if (param_2 == 0x62) {
      iVar4 = FUN_8004bd04(param_1,0,2);
      uVar1 = _DAT_1f800080;
      uVar5 = 0x62;
      if (iVar4 == 0) {
        return uVar2;
      }
      *(undefined4 *)(iVar4 + 0x1c) = 0x80111ecc;
      *(undefined4 *)(iVar4 + 0x14) = uVar1;
    }
    else {
      iVar4 = FUN_8004bd04(param_1,0,1);
      uVar1 = _DAT_1f800080;
      uVar5 = 0x61;
      if (iVar4 == 0) {
        return uVar2;
      }
      *(undefined4 *)(iVar4 + 0x1c) = 0x80111ecc;
      *(undefined4 *)(iVar4 + 0x14) = uVar1;
    }
    DAT_800bf809 = 1;
    FUN_8004d4f4(uVar5,1);
  }
  return uVar2;
}

