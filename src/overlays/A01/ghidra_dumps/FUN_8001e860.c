// FUN_8001e860

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_8001e860(undefined1 *param_1,undefined1 *param_2,uint param_3,uint param_4)

{
  ushort uVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined1 auStack_28 [2];
  undefined2 local_26;
  short local_22;
  undefined2 local_1e;
  
  param_1[0x2b] = 2;
  uVar8 = 0;
  switch(param_1[2]) {
  case 0:
  case 10:
  case 0xb:
    FUN_80074590(0xe,0,0);
    uVar5 = 2;
    uVar6 = 0;
    break;
  case 1:
    uVar8 = 0x20;
    FUN_80074590(0xe,0,0);
    uVar5 = 2;
    uVar6 = param_1[0x5e];
    break;
  case 3:
    uVar8 = 0x20;
  case 2:
    FUN_80074590(0xe,0,0);
    uVar8 = uVar8 | 0x10;
    if ((param_4 & 0x400) == 0) {
      if (((((param_4 & 0x300) != 0) && (param_1[0x29] == '\0')) && (_DAT_800e7fee != 0)) &&
         (DAT_1f800137 == '\0')) {
        if ((param_4 & 0x100) == 0) {
          sVar2 = *(short *)(param_3 + 0x2c);
          sVar3 = *(short *)(param_3 + 0x30);
          sVar4 = *(short *)(param_3 + 0x34);
          _DAT_1f800208 = (undefined1 *)(param_3 & 0x7fffffff);
          _DAT_1f800280 = param_2;
        }
        else {
          sVar2 = *(short *)(param_2 + 0x2e);
          sVar3 = *(short *)(param_2 + 0x32);
          sVar4 = *(short *)(param_2 + 0x36);
          _DAT_1f800208 = param_2;
        }
        *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x68);
        DAT_800e7fc6 = 4;
        DAT_1f80027b = 1;
        param_1[0x29] = 1;
        *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x2e) - sVar2;
        *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x32) - sVar3;
        *(short *)(param_1 + 100) = *(short *)(param_1 + 0x36) - sVar4;
        _DAT_1f800200 = *(undefined2 *)(param_1 + 0x2e);
        _DAT_1f800202 = *(undefined2 *)(param_1 + 0x32);
        _DAT_1f800204 = *(undefined2 *)(param_1 + 0x36);
        DAT_1f80023a = (param_4 & 0x1000) == 0;
        FUN_80074590(0xc,0,0);
      }
      uVar5 = 2;
      uVar6 = param_1[0x5e];
    }
    else {
      uVar5 = 1;
      uVar1 = *(ushort *)(param_1 + 0x56);
      *param_2 = 2;
      param_2[4] = 2;
      param_2[5] = 2;
      param_2[6] = 0;
      param_2[0x2b] = (char)(uVar1 >> 4);
      uVar6 = param_1[0x5e];
    }
    break;
  case 4:
    uVar8 = 0x40;
    FUN_80074590(0x2f,0,0);
    uVar5 = 2;
    uVar6 = param_1[0x5e];
    break;
  case 5:
    uVar8 = 0x40;
    *param_1 = 2;
    FUN_80074590(0x2c,0,0);
    FUN_80074590(0x2d,0,0);
    FUN_80074590(0x2f,0,0);
    puVar7 = param_1 + 0x2c;
    FUN_80031470(2,puVar7,param_1[0x5e],param_1 + 0x68);
    FUN_8003116c(0x18,puVar7,0xffffffb0);
    FUN_80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),puVar7,0x400,0x15);
    uVar5 = 0xc;
    goto LAB_8001ebe0;
  case 6:
    FUN_80074590(0x2c,0,0);
    FUN_80074590(0x2f,0,0);
    FUN_80031470(2,param_1 + 0x2c,param_1[0x5e],param_1 + 0x68);
    uVar8 = 0x40;
    if (param_1[0x5e] != '\0') {
      param_1[0x2b] = 1;
      return 0x40;
    }
    *param_1 = 2;
    FUN_80074590(0x2d,0,0);
    FUN_80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x400,0x15);
    uVar5 = 0xc;
    goto LAB_8001ebe0;
  case 7:
  case 8:
  case 9:
    DAT_800e7ef9 = 2;
    local_26 = *(undefined2 *)(param_1 + 0x2e);
    uVar8 = 0x80;
    local_22 = *(short *)(param_1 + 0x32) + 0x5a;
    local_1e = *(undefined2 *)(param_1 + 0x36);
    FUN_80031470(2,auStack_28,param_1[0x5e],param_1 + 0x68);
    uVar5 = 0x32;
LAB_8001ebe0:
    FUN_80074590(uVar5,0,0);
  default:
    goto switchD_8001e8bc_default;
  }
  FUN_80031470(uVar5,param_1 + 0x2c,uVar6,param_1 + 0x68);
switchD_8001e8bc_default:
  return uVar8;
}

