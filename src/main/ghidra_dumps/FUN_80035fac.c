
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80035fac(undefined4 param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((&DAT_800a2be8)[param_2 * 0xc] == '\0') {
    uVar1 = FUN_800349a4();
    return uVar1;
  }
  if ((&DAT_800a2be8)[param_2 * 0xc] != '\x01') {
    return 4;
  }
  switch(param_2) {
  case 0x58:
    uVar1 = FUN_80035088(param_1,param_2,param_3);
    break;
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
    if (param_3 != 1) {
      iVar2 = FUN_80035738(param_1,param_2,param_3);
      if (iVar2 == 0) {
        return 0;
      }
      uVar1 = FUN_8003511c(param_1,param_2,param_3);
      return uVar1;
    }
    iVar2 = FUN_80035738(param_1,param_2,1);
    if (iVar2 != 0) {
      iVar2 = FUN_8003511c(param_1,param_2,1);
LAB_800361d0:
      if (iVar2 != 0) {
        return 1;
      }
    }
    goto LAB_80036184;
  case 0x5d:
  case 0x5e:
    if (param_3 == 1) {
      return DAT_800bf87e < DAT_800bf87f ^ 1;
    }
    if (DAT_800bf87f <= DAT_800bf87e) {
      return 4;
    }
    FUN_8004d650(param_2,1);
    uVar3 = 4;
LAB_8003617c:
    FUN_8004dc84(param_2,uVar3);
    goto LAB_80036184;
  case 0x5f:
  case 0x60:
  case 0x98:
  case 0xa6:
  case 0xa7:
    uVar1 = FUN_80035218(param_1,param_2,param_3);
    break;
  case 0x61:
    uVar1 = FUN_80034be0(param_1,param_2,param_3);
    break;
  default:
    uVar1 = FUN_80035738(param_1,param_2,param_3);
    break;
  case 0x66:
  case 0x67:
  case 0x68:
    if (param_3 != 1) {
      iVar2 = FUN_80035738(param_1,param_2,param_3);
      if (iVar2 == 0) {
        return 0;
      }
      goto switchD_80036030_caseD_69;
    }
    iVar2 = FUN_80035738(param_1,param_2,1);
    if (iVar2 != 0) {
      iVar2 = FUN_80034ce0(param_1,param_2,1);
      goto LAB_800361d0;
    }
    goto LAB_80036184;
  case 0x69:
  case 0x6a:
  case 0x6b:
  case 0x6c:
  case 0x6d:
  case 0x6e:
switchD_80036030_caseD_69:
    uVar1 = FUN_80034ce0(param_1,param_2,param_3);
    break;
  case 0x6f:
  case 0x70:
  case 0x71:
  case 0x72:
  case 0x73:
  case 0x74:
    if ((((DAT_800bf881 & 4) != 0) || ((_DAT_800bf89e & 0x200) != 0)) || (DAT_800bf873 != '\0')) {
      if (param_3 == 1) {
        return 1;
      }
      return 4;
    }
    if (param_3 != 1) {
      uVar3 = 2;
      goto LAB_8003617c;
    }
LAB_80036184:
    uVar1 = 0;
  }
  return uVar1;
}

