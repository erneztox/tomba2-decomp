
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80035088(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  if (((DAT_800bf881 & 4) == 0) && ((_DAT_800bf89e & 0x200) == 0)) {
    uVar1 = 0;
    if (param_3 != 1) {
      if (DAT_800bfe55 == '\0') {
        DAT_800bfe55 = '\x01';
        FUN_8004d6d4(param_2);
        uVar1 = 0;
      }
      else {
        DAT_800bfe55 = '\0';
        FUN_8004d6f4();
        uVar1 = 0;
      }
    }
  }
  else {
    uVar1 = 1;
    if (param_3 != 1) {
      uVar1 = 4;
    }
  }
  return uVar1;
}

