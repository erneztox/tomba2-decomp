
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80049a60(undefined1 *param_1,int param_2)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  byte bVar4;
  int iVar5;
  
  switch(param_1[5]) {
  case 0:
    *(undefined2 *)(param_1 + 0x4a) = 0xd000;
    *(undefined2 *)(param_1 + 0x50) = 0x200;
    param_1[5] = param_1[5] + '\x01';
    if (param_2 == 0) {
      param_1[0x18] = 0;
    }
    else {
      param_1[0x18] = 0xff;
      param_1[0x19] = 0xff;
      param_1[0x1a] = 0xff;
    }
    break;
  case 1:
    sVar2 = *(short *)(param_1 + 0x4a);
    uVar3 = *(ushort *)(param_1 + 0x4a);
    *(short *)(param_1 + 0x4a) = (short)((uint)uVar3 + (uint)*(ushort *)(param_1 + 0x50));
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + sVar2 * 0x100;
    iVar5 = (int)(((uint)uVar3 + (uint)*(ushort *)(param_1 + 0x50)) * 0x10000) >> 0x10;
    if (iVar5 < 0) {
      if (-0x1800 < iVar5) {
        *param_1 = 1;
      }
      FUN_8004766c(param_1);
      iVar5 = FUN_800493e8(param_1,0,(int)-*(short *)(param_1 + 0x84));
      if (iVar5 != 0) {
        *param_1 = 1;
        *(undefined2 *)(param_1 + 0x4a) = 0;
        param_1[5] = param_1[5] + '\x01';
      }
      break;
    }
    cVar1 = param_1[5];
    goto LAB_80049bc8;
  case 2:
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    if (*(short *)(param_1 + 0x4a) < 0x3000) {
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    }
    if (param_1[0x29] == '\0') {
      if ((param_1[0x28] & 0x80) == 0) {
        FUN_8004766c(param_1);
        iVar5 = FUN_80049250(param_1,0,
                             (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                   (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
        if (iVar5 != 1) {
          if (iVar5 != 2) break;
          if ((((int)_DAT_1f8001a6 & 0x8000U) != 0) && (DAT_800bf870 != '\b')) {
            if ((DAT_800bf870 != '\x01') || (param_1[2] == '\0')) {
              param_1[5] = 6;
            }
            break;
          }
        }
LAB_80049d18:
        param_1[5] = 5;
      }
      else {
        if (DAT_800e7feb == '\b') {
          if (((DAT_800bf816 != '\x01') || ((ushort)DAT_800bf817 != *(ushort *)(param_1 + 0x6a))) ||
             ((int)*(short *)(param_1 + 0x32) +
              ((int)*(short *)(param_1 + 0x86) - (int)*(short *)(param_1 + 0x84)) <
              (int)_DAT_800bf812)) break;
          *(short *)(param_1 + 0x32) =
               _DAT_800bf812 - (*(short *)(param_1 + 0x86) - *(short *)(param_1 + 0x84));
          goto LAB_80049d18;
        }
        FUN_8004766c(param_1);
        iVar5 = FUN_80049250(param_1,0,
                             (int)(((uint)*(ushort *)(param_1 + 0x86) -
                                   (uint)*(ushort *)(param_1 + 0x84)) * 0x10000) >> 0x10);
        if (iVar5 == 0) break;
        param_1[5] = 5;
      }
      *(undefined2 *)(param_1 + 0x4a) = 0;
      break;
    }
    cVar1 = param_1[5];
    *(undefined2 *)(param_1 + 0x4a) = 0;
LAB_80049bc8:
    param_1[5] = cVar1 + '\x01';
    break;
  case 3:
    if ((((param_1[0x28] & 0x80) == 0) ||
        ((DAT_800bf816 != '\0' && ((ushort)DAT_800bf817 == *(ushort *)(param_1 + 0x6a))))) &&
       (param_1[0x29] == '\0')) {
      *(undefined2 *)(param_1 + 0x4a) = 0x2000;
      param_1[5] = param_1[5] + -1;
    }
    break;
  case 6:
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x4a) * 0x100;
    if (*(short *)(param_1 + 0x4a) < 0x3000) {
      *(short *)(param_1 + 0x4a) = *(short *)(param_1 + 0x4a) + *(short *)(param_1 + 0x50);
    }
    iVar5 = FUN_80077acc(param_1,(int)*(short *)(param_1 + 0x2e),(int)*(short *)(param_1 + 0x32),
                         (int)*(short *)(param_1 + 0x36));
    if (iVar5 == 0) {
      param_1[4] = 3;
    }
  }
  if (param_2 == 0) {
    if ((_DAT_1f80017c & 0x1f) == 0) {
      bVar4 = param_1[0xd] | 0x20;
    }
    else {
      bVar4 = param_1[0xd] & 0xdf;
    }
  }
  else if ((_DAT_1f80017c & 0x1f) == 0) {
    bVar4 = param_1[0xd] | 2;
  }
  else {
    bVar4 = param_1[0xd] & 0xfd;
  }
  param_1[0xd] = bVar4;
  return;
}

