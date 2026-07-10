// FUN_8007aa38

undefined4 FUN_8007aa38(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (*(byte *)(param_1 + 10) == param_4) {
    uVar2 = param_2 & 0xff;
    uVar1 = 0;
    switch(param_2 >> 8 & 0x7f) {
    case 0:
      uVar1 = FUN_80079c3c(param_1,uVar2);
      break;
    case 1:
      uVar1 = FUN_80079ddc(param_1,uVar2);
      break;
    case 2:
      uVar1 = FUN_80079f90(param_1,uVar2);
      break;
    case 3:
      uVar1 = FUN_8007a12c(param_1,uVar2);
      break;
    case 4:
      uVar1 = FUN_8007a2c8(param_1,uVar2);
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

