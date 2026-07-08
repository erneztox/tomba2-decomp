
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_800574e0(int param_1,uint param_2)

{
  byte bVar1;
  char cVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  short sVar6;
  int local_20;
  undefined4 local_1c;
  int local_18;
  
  bVar1 = *(byte *)(param_1 + 7);
  uVar3 = *(ushort *)(param_1 + 0x17e);
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (3 < bVar1) {
        return;
      }
      if ((uVar3 & 0x20) != 0) {
        FUN_80056f3c(param_1);
      }
      if (((((param_2 & 0x10) == 0) && (DAT_800bf848 == 0)) && (*(char *)(param_1 + 0x61) == '\0'))
         && (((uVar3 & 0x40) != 0 || (*(char *)(param_1 + 0x179) == '\x01')))) {
        iVar5 = FUN_800572ec(param_1,param_2);
        if (iVar5 != 0) {
          return;
        }
      }
      else {
        FUN_800541f4(param_1,0);
        if (*(char *)(param_1 + 0x29) != '\0') goto LAB_8005797c;
        if ((uVar3 & 0x60) != 0) {
          if (param_2 != 8) {
            uVar4 = FUN_800776f8(0,(int)*(short *)(param_1 + 0x58),0x40);
            *(undefined2 *)(param_1 + 0x58) = uVar4;
          }
          if ((uVar3 & 0x20) != 0) {
            if ((*(byte *)(param_1 + 0x14a) & 8) != 0) {
              *(char *)(param_1 + 0x178) = *(char *)(param_1 + 0x178) + '\x01';
            }
            cVar2 = *(char *)(param_1 + 0x178) + '\x01';
            *(char *)(param_1 + 0x178) = cVar2;
            if (cVar2 == -1) {
              *(undefined1 *)(param_1 + 0x178) = 0xff;
            }
          }
        }
        sVar6 = 0x360;
        if (((param_2 & 1) == 0) && (*(char *)(param_1 + 0x46) == -0x1b)) {
          sVar6 = 0x500;
        }
        sVar6 = *(short *)(param_1 + 0x4a) + sVar6;
        *(short *)(param_1 + 0x4a) = sVar6;
        if (0x3e00 < sVar6) {
          *(undefined2 *)(param_1 + 0x4a) = 0x3e00;
        }
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
        if (param_2 == 2) {
          if ((DAT_800bf848 != 0) && ((_DAT_800e7e68 & _DAT_1f800172) != 0)) {
            *(undefined1 *)(param_1 + 7) = 0;
            *(undefined1 *)(param_1 + 0x145) = 1;
            FUN_80074590(0x1d,0,0);
            return;
          }
          cVar2 = FUN_80049280(param_1,0,((int)*(short *)(param_1 + 0x62) << 0x11) >> 0x10);
          *(char *)(param_1 + 0x29) = cVar2;
          if (cVar2 != '\0') {
            return;
          }
        }
        else if (DAT_800bf848 == 0) {
          if (((-1 < *(short *)(param_1 + 0x4a)) && ((param_2 & 2) == 0)) &&
             (*(char *)(param_1 + 0x144) == '\0')) {
            *(undefined1 *)(param_1 + 0x144) = 1;
          }
        }
        else {
          if (*(char *)(param_1 + 0x144) == '\x01') {
            *(undefined1 *)(param_1 + 0x144) = 0;
          }
          if (((int)param_2 < 2) && ((_DAT_800e7e68 & _DAT_1f800172) != 0)) goto LAB_80057908;
        }
        FUN_8005444c(param_1);
      }
      if (*(char *)(param_1 + 0x29) == '\0') {
        return;
      }
LAB_8005797c:
      *(undefined1 *)(param_1 + 0x148) = 0;
      *(undefined2 *)(param_1 + 0x50) = 0;
      if (*(byte *)(param_1 + 0x144) < 2) {
        *(undefined1 *)(param_1 + 0x144) = 0;
      }
      *(undefined1 *)(param_1 + 0x145) = 0;
      local_1c = *(undefined4 *)(param_1 + 0x30);
      if (*(char *)(param_1 + 0x147) == '\0') {
        local_20 = *(short *)(param_1 + 0x48) * -0x2800;
        local_18 = *(short *)(param_1 + 0x4c) * -0x2800;
      }
      else {
        local_20 = *(short *)(param_1 + 0x48) * 0x2800;
        local_18 = *(short *)(param_1 + 0x4c) * 0x2800;
      }
      local_20 = *(int *)(param_1 + 0x2c) + local_20;
      local_18 = *(int *)(param_1 + 0x34) + local_18;
      FUN_800538e0(param_1,&local_20,0);
      FUN_8005314c(param_1);
      return;
    }
    if (bVar1 != 0) {
      return;
    }
    FUN_8005749c(param_1);
    if ((param_2 & 1) == 0) {
      FUN_80055f48(param_1,1);
      if (*(char *)(param_1 + 0x165) != '\0') {
        *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + -0x580;
      }
      if (*(char *)(param_1 + 0x78) == '\x06') {
        *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + -0x1000;
      }
    }
  }
  FUN_800541f4(param_1,0);
  FUN_800543c0(param_1);
  if (((((param_2 & 0x10) == 0) && (DAT_800bf848 == 0)) && (*(char *)(param_1 + 0x61) == '\0')) &&
     ((uVar3 & 0x60) != 0)) {
    FUN_8005706c(param_1,param_2);
  }
  else {
    sVar6 = 0x360;
    if (((param_2 & 1) == 0) && ((uVar3 & 0x180) != 0)) {
      sVar6 = 0x120;
    }
    uVar3 = *(short *)(param_1 + 0x4a) + sVar6;
    *(ushort *)(param_1 + 0x4a) = uVar3;
    if (-1 < (int)((uint)uVar3 << 0x10)) {
      *(undefined1 *)(param_1 + 0x145) = 2;
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
      if ((param_2 & 2) == 0) {
        *(undefined1 *)(param_1 + 0x144) = 1;
      }
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
  }
  if ((param_2 & 1) == 0) {
    FUN_80056e08(param_1);
  }
  if ((DAT_800bf848 & 3) == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x144) == '\x01') {
    *(undefined1 *)(param_1 + 0x144) = 0;
  }
  if ((1 < (int)param_2) || ((_DAT_800e7e68 & _DAT_1f800172) == 0)) {
    *(undefined1 *)(param_1 + 7) = 2;
    *(undefined1 *)(param_1 + 0x145) = 2;
    return;
  }
LAB_80057908:
  *(undefined1 *)(param_1 + 7) = 0;
  *(undefined1 *)(param_1 + 0x145) = 1;
  FUN_80054d14(param_1,0x14,4);
  FUN_80074590(0x1d,0,0);
  return;
}

