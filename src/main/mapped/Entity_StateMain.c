/**
 * @brief Entity main state: entity[0x145] flags, primary dispatch
 * @note Original: func_80054E80 at 0x80054E80
 */
// Entity_StateMain



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80054e80(int param_1,int param_2)

{
  uint uVar1;
  undefined *puVar2;
  short sVar3;
  undefined2 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  if ((((*(char *)(param_1 + 0x145) == '\0') && (*(char *)(param_1 + 0x60) != '\0')) &&
      (*(byte *)(param_1 + 0x5f) != 0)) &&
     (((*(byte *)(param_1 + 0x14a) & 2) == 0 &&
      ((*(byte *)(param_1 + 0x5f) & 1) == *(byte *)(param_1 + 0x147))))) {
    sVar3 = *(short *)(param_1 + 0x44);
    if (*(short *)(param_1 + 0x44) < 0) {
      sVar3 = -sVar3;
    }
    if (sVar3 < 0xd01) {
      FUN_80054d14(param_1,0xc6,4);
      if ((_DAT_1f80017c & 0xf) != 0) {
        return;
      }
      FUN_80074590(0x3b,0,0);
      return;
    }
  }
  if ((*(byte *)(param_1 + 0x149) & 4) != 0) {
    if (*(char *)(param_1 + 0x46) == 'n') {
      return;
    }
    FUN_80074590(0x1c,0,0);
    *(undefined1 *)(param_1 + 0x46) = 0x6e;
    FUN_80054790(param_1,0x6e);
    FUN_80077cfc(param_1,&PTR_DAT_80017fe8,0x6e,(int)*(short *)(param_1 + 0x96));
    return;
  }
  if (((*(byte *)(param_1 + 0x14a) & 2) == 0) || ((*(ushort *)(param_1 + 0x6a) & 0xf00) != 0x500)) {
    sVar3 = *(short *)(param_1 + 0x44);
    if (*(short *)(param_1 + 0x44) < 0) {
      sVar3 = -sVar3;
    }
    uVar7 = 0x10;
    if (*(char *)(param_1 + 0x165) == '\0') {
      iVar6 = 0;
      if ((0xc0f < sVar3) && (iVar6 = 4, sVar3 < 0x1110)) {
        iVar6 = 2;
      }
      uVar7 = (uint)(byte)(&DAT_800a454c)[(uint)(*(byte *)(param_1 + 0x6d) >> 1) + iVar6];
    }
  }
  else {
    uVar7 = 2;
    if (*(char *)(param_1 + 0x165) != '\0') {
      uVar7 = 0x11;
    }
  }
  uVar1 = (uint)*(byte *)(param_1 + 0x46);
  if (uVar1 == uVar7) {
    return;
  }
  if (uVar1 == 0x6e) {
    switch(uVar7) {
    case 4:
    case 6:
    case 8:
    case 10:
    case 0xc:
    case 0xe:
    case 0x10:
      uVar7 = uVar7 - 1;
    }
    FUN_80077c40(param_1,&PTR_DAT_80017fe8,uVar7);
    *(char *)(param_1 + 0x46) = (char)uVar7;
  }
  else {
    uVar5 = uVar7;
    if (param_2 == 0) {
      if (uVar1 != 0x10) {
        if (uVar7 == 0x10) {
          uVar1 = 1;
          uVar4 = 2;
        }
        else {
          if ((*(ushort *)(param_1 + 0xe) & 0x7f) != 1) {
            return;
          }
          FUN_80076d68(param_1);
          uVar4 = 5;
          uVar1 = *(ushort *)(*(int *)(param_1 + 0x38) + 2) + 1 & 3;
        }
        puVar2 = (&PTR_DAT_80017fe8)[uVar7];
        *(undefined **)(param_1 + 0x38) = puVar2 + uVar1 * 8;
        FUN_80077e3c(param_1,puVar2 + uVar1 * 8,uVar4);
        *(char *)(param_1 + 0x46) = (char)uVar7;
        goto LAB_800551a4;
      }
      if (uVar7 == 0x10) {
        iVar6 = 2;
        uVar5 = 0x10;
      }
      else {
        if ((*(ushort *)(*(int *)(param_1 + 0x38) + 6) & 0x4000) == 0) {
          return;
        }
        iVar6 = 4;
      }
    }
    else {
      iVar6 = (int)(short)param_2;
    }
    FUN_80077cfc(param_1,&PTR_DAT_80017fe8,uVar5,iVar6);
    *(char *)(param_1 + 0x46) = (char)uVar7;
  }
LAB_800551a4:
  FUN_80054790(param_1,uVar7);
  return;
}
