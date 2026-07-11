/**
 * @brief Entity main variant 2: complex entity controller (453L)
 * @note Original: func_8001DD00 at 0x8001DD00
 */
// Entity_Main2


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
#include "common.h"

uint FUN_8001dd00(char *param_1,char *param_2,int param_3,uint param_4)

{
  short sVar1;
  short sVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  uint uVar6;
  char *puVar7;
  uint uVar8;
  undefined2 local_6e;
  short local_6a;
  undefined2 local_66;
  undefined2 local_5e;
  short local_5a;
  undefined2 local_56;
  undefined2 local_4e;
  short local_4a;
  undefined2 local_46;
  undefined2 local_3e;
  short local_3a;
  undefined2 local_36;
  undefined2 local_2e;
  short local_2a;
  undefined2 local_26;
  char auStack_70 [16];
  char auStack_60 [16];
  char auStack_50 [16];
  char auStack_40 [16];
  char auStack_30 [24];
  
  uVar8 = 0;
  switch(*param_1) {
  case 1:
    FUN_80074590(10,0,0);
    uVar8 = 2;
    if ((param_4 & 0x90) == 0) {
      if ((param_4 & 2) != 0) {
        param_1[0x2b] = 1;
        if ((param_4 & 1) == 0) {
          *param_2 = 2;
          param_2[4] = 2;
          param_2[5] = 2;
        }
        else {
          *param_2 = 3;
          param_2[4] = 2;
          param_2[5] = 0;
        }
        param_2[6] = 0;
        param_2[0x2b] = (char)(*(ushort *)(param_1 + 0x68) >> 4);
        puVar7 = param_1 + 0x2c;
        FUN_8003116c((byte)param_1[2] + 0xc,puVar7,0xffffffb0);
        uVar6 = 1;
        goto LAB_8001e67c;
      }
      param_2[0x2b] = (char)(*(ushort *)(param_1 + 0x68) >> 4);
      if ((param_4 & 1) == 0) {
        if (param_1[0x5e] != '\0') {
          *param_2 = 2;
          param_2[4] = 2;
          uVar5 = 7;
          goto LAB_8001de18;
        }
      }
      else if (param_1[0x5e] == '\0') {
        *param_2 = 3;
        param_2[4] = 2;
        uVar5 = 4;
LAB_8001de18:
        param_2[5] = uVar5;
        param_2[6] = 0;
      }
      puVar7 = param_1 + 0x2c;
      FUN_800313a0(0x16,puVar7,0xffffffb0,param_1 + 0x54);
      FUN_8003116c((byte)param_1[2] + 0xc,puVar7,0xffffffb0);
      uVar6 = 1;
      goto LAB_8001e67c;
    }
    uVar6 = 2;
    puVar7 = param_1 + 0x2c;
    goto LAB_8001e67c;
  case 2:
    FUN_80074590(0xb,0,0);
    uVar8 = 8;
    if ((param_4 & 0x10) == 0) {
      param_2[0x2b] = (char)(*(ushort *)(param_1 + 0x56) >> 4);
      if (((param_4 & 1) == 0) && (param_1[0x5e] != '\0')) {
        *param_2 = 2;
        param_2[4] = 2;
        param_2[5] = 2;
      }
      else {
        *param_2 = 3;
        param_2[4] = 2;
        param_2[5] = 0;
      }
      param_2[6] = 0;
      uVar6 = 1;
      puVar7 = param_1 + 0x2c;
    }
    else {
      uVar6 = 2;
      puVar7 = param_1 + 0x2c;
    }
    break;
  case 3:
    FUN_80074590(0xc,0,0);
    uVar8 = 0x20;
    if ((param_4 & 0x60) == 0) {
      if ((param_4 & 1) == 0) {
        if (param_1[0x5e] == '\0') {
          *param_1 = 2;
          FUN_80074590(0xd,0,0);
        }
        else {
          param_1[0x2b] = 1;
        }
        uVar4 = *(ushort *)(param_1 + 0x56);
        *param_2 = 2;
        param_2[4] = 2;
        param_2[5] = 7;
        param_2[6] = 0;
        param_2[0x2b] = (char)(uVar4 >> 4);
        if ((_DAT_800e7fee != 0) && (DAT_1f800137 == '\0')) {
          if ((param_4 & 0x100) == 0) {
            sVar1 = *(short *)(param_3 + 0x2c);
            sVar2 = *(short *)(param_3 + 0x30);
            sVar3 = *(short *)(param_3 + 0x34);
            _DAT_1f800208 = (undefined1 *)(param_3 & 0x7fffffff);
            _DAT_1f800280 = param_2;
          }
          else {
            sVar1 = *(short *)(param_2 + 0x2e);
            sVar2 = *(short *)(param_2 + 0x32);
            sVar3 = *(short *)(param_2 + 0x36);
            _DAT_1f800208 = param_2;
          }
          *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x68);
          DAT_800e7fc6 = 4;
          DAT_1f80027b = 1;
          param_1[0x29] = 1;
          *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x2e) - sVar1;
          *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x32) - sVar2;
          *(short *)(param_1 + 100) = *(short *)(param_1 + 0x36) - sVar3;
          _DAT_1f800200 = *(undefined2 *)(param_1 + 0x2e);
          _DAT_1f800202 = *(undefined2 *)(param_1 + 0x32);
          _DAT_1f800204 = *(undefined2 *)(param_1 + 0x36);
          DAT_1f80023a = (param_4 & 0x1000) == 0;
          FUN_80074590(0xc,0,0);
        }
        uVar6 = 2;
        puVar7 = param_1 + 0x2c;
      }
      else {
        if (param_1[0x5e] == '\x01') {
          param_1[0x2b] = 1;
        }
        else {
          *param_1 = 2;
          FUN_80074590(0xd,0,0);
        }
        uVar4 = *(ushort *)(param_1 + 0x56);
        *param_2 = 3;
        param_2[4] = 2;
        param_2[5] = 4;
        param_2[6] = 0;
        param_2[0x2b] = (char)(uVar4 >> 4);
        if ((_DAT_800e7fee != 0) && (DAT_1f800137 == '\0')) {
          if ((param_4 & 0x100) == 0) {
            sVar1 = *(short *)(param_3 + 0x2c);
            sVar2 = *(short *)(param_3 + 0x30);
            sVar3 = *(short *)(param_3 + 0x34);
            _DAT_1f800208 = (undefined1 *)(param_3 & 0x7fffffff);
            _DAT_1f800280 = param_2;
          }
          else {
            sVar1 = *(short *)(param_2 + 0x2e);
            sVar2 = *(short *)(param_2 + 0x32);
            sVar3 = *(short *)(param_2 + 0x36);
            _DAT_1f800208 = param_2;
          }
          *(undefined2 *)(param_1 + 0x78) = *(undefined2 *)(param_1 + 0x68);
          DAT_800e7fc6 = 4;
          DAT_1f80027b = 1;
          param_1[0x29] = 1;
          *(short *)(param_1 + 0x60) = *(short *)(param_1 + 0x2e) - sVar1;
          *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x32) - sVar2;
          *(short *)(param_1 + 100) = *(short *)(param_1 + 0x36) - sVar3;
          _DAT_1f800200 = *(undefined2 *)(param_1 + 0x2e);
          _DAT_1f800202 = *(undefined2 *)(param_1 + 0x32);
          _DAT_1f800204 = *(undefined2 *)(param_1 + 0x36);
          DAT_1f80023a = (param_4 & 0x1000) == 0;
          FUN_80074590(0xc,0,0);
        }
        uVar6 = 2;
        puVar7 = param_1 + 0x2c;
      }
    }
    else {
      uVar6 = 1;
      puVar7 = param_1 + 0x2c;
      uVar4 = *(ushort *)(param_1 + 0x56);
      *param_2 = 2;
      param_2[4] = 2;
      param_2[5] = 2;
      param_2[6] = 0;
      param_2[0x2b] = (char)(uVar4 >> 4);
    }
    break;
  case 4:
    FUN_80074590(0x2e,0,0);
    uVar8 = 0x40;
    if ((param_4 & 0xbe) == 0) {
      param_2[0x2b] = (char)(*(ushort *)(param_1 + 0x68) >> 4);
      if (((param_4 & 1) == 0) && (param_1[0x5e] != '\0')) {
        *param_2 = 2;
        param_2[4] = 2;
        param_2[5] = 2;
      }
      else {
        *param_2 = 3;
        param_2[4] = 2;
        param_2[5] = 0;
      }
      param_2[6] = 0;
      uVar6 = 0x16;
    }
    else {
      uVar6 = 0x16;
    }
    goto LAB_8001e59c;
  case 5:
    FUN_80074590(0x2c,0,0);
    FUN_80074590(0x2d,0,0);
    *param_1 = 2;
    if ((param_4 & 0xbc) == 0) {
      param_2[0x2b] = (char)(*(ushort *)(param_1 + 0x68) >> 4);
      if (((param_4 & 1) == 0) && (param_1[0x5e] != '\0')) {
        uVar5 = 7;
        *param_2 = 2;
      }
      else {
        *param_2 = 3;
        uVar5 = 4;
      }
      param_2[4] = 2;
      param_2[5] = uVar5;
      param_2[6] = 0;
    }
    puVar7 = param_1 + 0x2c;
    FUN_800313a0(0x17,puVar7,0xffffffb0,param_1 + 0x54);
    FUN_8003116c(0x18,puVar7,0xffffffb0);
    FUN_80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),puVar7,0x400,0x15);
    FUN_80074590(0xc,0,0);
    return 0x42;
  case 6:
    FUN_80074590(0x2c,0,0);
    uVar8 = 0x42;
    if ((param_4 & 0xbc) == 0) {
      param_2[0x2b] = (char)(*(ushort *)(param_1 + 0x68) >> 4);
      if ((param_4 & 1) == 0) {
        if (param_1[0x5e] == '\0') {
          *param_1 = 2;
          FUN_80074590(0x2d,0,0);
        }
        else {
          param_1[0x2b] = 1;
        }
        *param_2 = 2;
        param_2[4] = 2;
        uVar5 = 7;
      }
      else {
        if (param_1[0x5e] == '\x01') {
          param_1[0x2b] = 1;
        }
        else {
          *param_1 = 2;
          FUN_80074590(0x2d,0,0);
          FUN_80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x400,0x15);
          FUN_80074590(0xc,0,0);
        }
        *param_2 = 3;
        param_2[4] = 2;
        uVar5 = 4;
      }
      param_2[5] = uVar5;
      param_2[6] = 0;
    }
    else if (param_1[0x5e] == '\x01') {
      param_1[0x2b] = 1;
    }
    else {
      *param_1 = 2;
      FUN_80074590(0x2d,0,0);
      FUN_80027144(*(undefined4 *)(*(int *)(param_1 + 0xc0) + 0x40),param_1 + 0x2c,0x400,0x15);
      FUN_80074590(0xc,0,0);
    }
    FUN_8003116c(0x18,param_1 + 0x2c,0xffffffb0);
    uVar6 = 0x17;
LAB_8001e59c:
    FUN_800313a0(uVar6,param_1 + 0x2c,0xffffffb0,param_1 + 0x54);
    return uVar8;
  case 7:
    FUN_80074590(0x31,0,0);
    uVar8 = 0x80;
    if ((param_4 & 0x7e) == 0) {
      param_1[0x2b] = 1;
      param_2[0x2b] = (char)(*(ushort *)(param_1 + 0x68) >> 4);
      if (((param_4 & 1) == 0) && (param_1[0x5e] != '\0')) {
        uVar5 = 2;
        *param_2 = 2;
        param_2[4] = 2;
      }
      else {
        *param_2 = 3;
        param_2[4] = 2;
        uVar5 = 6;
      }
      param_2[5] = uVar5;
      param_2[6] = 0;
      local_6e = *(undefined2 *)(param_1 + 0x2e);
      local_6a = *(short *)(param_1 + 0x32);
      uVar6 = 1;
      local_66 = *(undefined2 *)(param_1 + 0x36);
      puVar7 = auStack_70;
    }
    else {
      local_6e = *(undefined2 *)(param_1 + 0x2e);
      local_6a = *(short *)(param_1 + 0x32);
      uVar6 = 2;
      local_66 = *(undefined2 *)(param_1 + 0x36);
      puVar7 = param_1 + 0x2c;
    }
    local_6a = local_6a + 0x5a;
    break;
  case 8:
    FUN_80074590(0x31,0,0);
    if ((param_4 & 0x7a) == 0) {
      param_1[0x2b] = 1;
      param_2[0x2b] = (char)(*(ushort *)(param_1 + 0x68) >> 4);
      if (((param_4 & 1) == 0) && (param_1[0x5e] != '\0')) {
        *param_2 = 2;
        param_2[4] = 2;
        uVar5 = 8;
      }
      else {
        *param_2 = 3;
        param_2[4] = 2;
        uVar5 = 5;
      }
      param_2[5] = uVar5;
      param_2[6] = 0;
      local_4e = *(undefined2 *)(param_1 + 0x2e);
      uVar8 = 1;
      puVar7 = auStack_50;
      local_4a = *(short *)(param_1 + 0x32) + 0x5a;
      local_46 = *(undefined2 *)(param_1 + 0x36);
    }
    else {
      local_5e = *(undefined2 *)(param_1 + 0x2e);
      uVar8 = 2;
      puVar7 = auStack_60;
      local_5a = *(short *)(param_1 + 0x32) + 0x5a;
      local_56 = *(undefined2 *)(param_1 + 0x36);
    }
    goto LAB_8001e818;
  case 9:
    FUN_80074590(0x31,0,0);
    if ((param_4 & 0x7a) == 0) {
      param_2[0x2b] = (char)(*(ushort *)(param_1 + 0x68) >> 4);
      if ((param_4 & 1) == 0) {
        *param_2 = 2;
        param_2[4] = 2;
        uVar5 = 8;
      }
      else {
        *param_2 = 3;
        param_2[4] = 2;
        uVar5 = 5;
      }
      param_2[5] = uVar5;
      param_2[6] = 0;
      local_2e = *(undefined2 *)(param_1 + 0x2e);
      uVar8 = 1;
      puVar7 = auStack_30;
      local_2a = *(short *)(param_1 + 0x32) + 0x5a;
      local_26 = *(undefined2 *)(param_1 + 0x36);
    }
    else {
      local_3e = *(undefined2 *)(param_1 + 0x2e);
      uVar8 = 2;
      puVar7 = auStack_40;
      local_3a = *(short *)(param_1 + 0x32) + 0x5a;
      local_36 = *(undefined2 *)(param_1 + 0x36);
    }
LAB_8001e818:
    FUN_80031470(uVar8,puVar7,param_1[0x5e],param_1 + 0x68);
    FUN_8003116c((byte)param_1[2] + 0xc,puVar7,0xffffffb0);
    return 0x84;
  case 10:
    FUN_80074590(0xd,0,0);
    uVar6 = 2;
    if ((param_4 & 0xfe) == 0) {
      param_2[0x2b] = (char)(*(ushort *)(param_1 + 0x56) >> 4);
      if (((param_4 & 1) == 0) && (param_1[0x5e] != '\0')) {
        *param_2 = 2;
        param_2[4] = 2;
        param_2[5] = 2;
      }
      else {
        *param_2 = 3;
        param_2[4] = 2;
        param_2[5] = 0;
      }
      param_2[6] = 0;
      uVar6 = 1;
      puVar7 = param_1 + 0x2c;
      uVar5 = 0;
    }
    else {
      puVar7 = param_1 + 0x2c;
      uVar5 = 0;
    }
    goto LAB_8001e67c;
  case 0xb:
    uVar8 = 0x100;
    FUN_80074590(0xd,0,0);
    if ((param_4 & 0x800) != 0) {
      uVar4 = *(ushort *)(param_1 + 0x56);
      *param_2 = 3;
      param_2[4] = 2;
      param_2[5] = 10;
      param_2[6] = 0;
      param_2[0x2b] = (char)(uVar4 >> 4);
      FUN_80031470(1,param_1 + 0x2c,0,param_1 + 0x68);
      return 0x100;
    }
    param_2[0x2b] = 10;
    uVar6 = 2;
    puVar7 = param_1 + 0x2c;
    uVar5 = 0;
    goto LAB_8001e67c;
  default:
    goto switchD_8001dd00_default;
  }
  uVar5 = param_1[0x5e];
LAB_8001e67c:
  FUN_80031470(uVar6,puVar7,uVar5,param_1 + 0x68);
switchD_8001dd00_default:
  return uVar8;
}
