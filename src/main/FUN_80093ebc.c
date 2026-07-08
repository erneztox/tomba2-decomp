
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80093ebc(short param_1,short param_2,short param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = 0;
  iVar3 = 0;
  if ('\0' < DAT_80105cec) {
    do {
      if (((((DAT_800ac3f4 & 1 << (uVar2 & 0x1f)) == 0) &&
           (iVar1 = (uVar2 & 0xff) * 0x38,
           (int)*(short *)(iVar1 + -0x7fefab2a) == (param_4 & 0xffff))) &&
          (*(short *)(iVar1 + -0x7fefab24) == param_3)) &&
         ((*(short *)(iVar1 + -0x7fefab28) == param_1 &&
          (*(short *)(iVar1 + -0x7fefab20) == param_2)))) {
        if (*(short *)(iVar1 + -0x7fefab38) == 0xff) {
          iVar3 = iVar3 + 1;
          FUN_80094b10();
        }
        else {
          _DAT_80105d10 = (ushort)uVar2 & 0xff;
          FUN_80094b50(0);
          iVar3 = iVar3 + 1;
        }
      }
      uVar2 = uVar2 + 1;
    } while ((int)(uVar2 & 0xff) < (int)DAT_80105cec);
  }
  return iVar3;
}

