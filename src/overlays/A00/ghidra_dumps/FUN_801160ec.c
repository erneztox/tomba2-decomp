// FUN_801160ec

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801160ec(int param_1,undefined2 *param_2,int param_3,int param_4)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  undefined2 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 in_t0;
  
  func_0x80076d68();
  bVar1 = *(byte *)(param_1 + 6);
  uVar3 = (ushort)(bVar1 < 2);
  if (bVar1 == 1) {
    sVar2 = FUN_80121518(param_1);
    if (sVar2 == 0) {
      return;
    }
    *(undefined2 *)(param_1 + 0x4a) = 0xff80;
    *(undefined2 *)(param_1 + 0x50) = 0xfff0;
    *(undefined2 *)(param_1 + 0x48) = 0;
    *(undefined2 *)(param_1 + 0x4c) = 0;
    *(undefined2 *)(param_1 + 0x44) = 0xc00;
    uVar3 = *(ushort *)(param_1 + 0x66) & 0xfff;
    *(ushort *)(param_1 + 0x66) = uVar3;
    *(ushort *)(param_1 + 0x56) = uVar3;
    func_0x80077c40(param_1,0x8014e1a4,4);
    FUN_801284ac();
    param_2 = (undefined2 *)(param_1 + 0x60);
    param_3 = (int)*(short *)(param_1 + 0x72);
    iVar7 = (int)*(short *)(param_1 + 0x7c);
    param_4 = (uint)*(ushort *)(param_1 + 0x74) + (uint)*(ushort *)(param_1 + 0x7a);
    *(short *)(param_1 + 0x74) = (short)param_4;
    if (param_3 <= iVar7) goto LAB_8011f26c;
    uVar3 = (*(short *)(param_1 + 0x72) - *(short *)(param_1 + 0x7c)) * 6;
  }
  else {
    iVar7 = param_1;
    if (bVar1 < 2) {
      if (bVar1 == 0) {
        *(undefined1 *)(param_1 + 0x2a) = 0x11;
        func_0x80048750();
        sVar2 = FUN_8011fd94(param_1,1);
        iVar5 = (int)_DAT_1f8001a0;
        param_3 = 1;
        *(short *)(param_1 + 0x66) = sVar2;
        iVar5 = func_0x80077768(iVar5,(int)sVar2);
        if (iVar5 != 0) {
          *(short *)(param_1 + 0x66) = _DAT_1f8001a0;
          return;
        }
        *(ushort *)(param_1 + 0x66) = _DAT_1f8001a0 + 0x800U & 0xfff;
        param_2 = (undefined2 *)&DAT_00000004;
        uVar3 = FUN_801214ac();
        *(ushort *)(param_1 + 0x50) = uVar3;
        *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
      }
    }
    else {
      uVar3 = 3;
      if (bVar1 == 2) {
        sVar2 = *(short *)(param_1 + 0x4a) - *(short *)(param_1 + 0x50);
        *(short *)(param_1 + 0x4a) = sVar2;
        if (0x100 < (ushort)(sVar2 + 0x80U)) {
          *(short *)(param_1 + 0x50) = -*(short *)(param_1 + 0x50);
        }
        param_2 = (undefined2 *)&DAT_00000004;
        FUN_80120498();
        if (DAT_800bf9dd < 0xe) {
          return;
        }
        *(undefined2 *)(param_1 + 0x40) = 0x5a;
        uVar3 = *(byte *)(param_1 + 6) + 1;
        *(char *)(param_1 + 6) = (char)uVar3;
      }
      else {
        iVar7 = 1;
        if (bVar1 == 3) {
          sVar2 = *(short *)(param_1 + 0x40);
          *(short *)(param_1 + 0x40) = sVar2 + -1;
          if (sVar2 == 1) {
            *(undefined1 *)(param_1 + 5) = 3;
            *(undefined1 *)(param_1 + 6) = 0;
            *(undefined1 *)(param_1 + 7) = 1;
            *(undefined1 *)(*(int *)(param_1 + 0x10) + 3) = 1;
            *(undefined4 *)(*(int *)(param_1 + 0x10) + 0x10) = 0x546;
          }
          return;
        }
      }
    }
  }
  param_2[10] = (short)param_4 - uVar3;
LAB_8011f26c:
  uVar6 = (uint)(ushort)param_2[10];
  if ((short)param_2[10] < 0) {
    param_2[10] = (short)(uVar6 + 100);
    iVar5 = (uVar6 + 100) * 0x10000;
    if (0 < iVar5) {
      param_2[10] = 0;
      iVar7 = (iVar7 << 0x10) >> 0xe;
      if (uVar6 != iVar5 >> 0x10) {
        iVar5 = iVar7 + -4;
        if ((*(ushort *)(param_3 + 0x60) & 2) == 0) {
          iVar5 = iVar7 + -5;
        }
        iVar7 = iVar5 * 0x10000 >> 0x10;
        iVar5 = 1;
        *(undefined1 *)(*(int *)(param_3 + iVar7 * 4 + 0xc0) + 0x3e) = 1;
        *(undefined1 *)(*(int *)(param_3 + (iVar7 + 1) * 4 + 0xc0) + 0x3e) = 1;
        iVar7 = *(int *)(param_3 + param_4 * 4 + 0xc0);
        *(byte *)(iVar7 + 0x3e) = *(byte *)(iVar7 + 0x3e) | 2;
        uVar3 = *(ushort *)(param_3 + 0x7a) & 3;
        if (uVar3 == 2) {
          uVar4 = 4;
        }
        else {
          uVar4 = 8;
          if (uVar3 != 3) goto LAB_801312a0;
        }
        *(undefined2 *)(param_3 + 0x72) = uVar4;
        if ((*(ushort *)(param_3 + 0x7a) & 4) != 0) {
          *(short *)(param_3 + 0x72) = *(short *)(param_3 + 0x72) + 2;
        }
        return;
      }
      iVar5 = iVar7 + -2;
      *(short *)(param_1 + 0x60) = (short)iVar7;
      *(undefined2 *)(param_1 + 0x62) = 0xfab0;
      *(undefined2 *)(param_1 + 100) = 0xfb96;
      *(undefined2 *)(param_1 + 0x66) = 0x1e0;
      *(undefined2 *)(param_1 + 0x68) = 0xf878;
      *(undefined2 *)(param_1 + 0x50) = 0x980;
      *(undefined4 *)(param_1 + 0x2c) = 0x24c30000;
      *(undefined4 *)(param_1 + 0x34) = 0x14f10000;
      param_3 = 0;
      *(undefined1 *)(param_1 + 0x5e) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(int *)(param_1 + 0x30) = (int)*(short *)(param_1 + 0x60) << 0x10;
      if (*(char *)(param_1 + 8) != '\0') {
        in_t0 = 0xffffffff;
        param_4 = -2;
        param_2 = (undefined2 *)&DAT_8014aa58;
        do {
          *(short *)(*(int *)(iVar5 + 0xc0) + 6) = (short)param_3 + -1;
          **(undefined2 **)(iVar5 + 0xc0) = 0;
          *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 2) = *param_2;
LAB_801312a0:
          *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 4) = param_2[1];
          *(undefined4 *)(*(int *)(iVar5 + 0xc0) + 8) = 0;
          *(undefined4 *)(*(int *)(iVar5 + 0xc0) + 0xc) = 0;
          *(short *)(*(int *)(iVar5 + 0xc0) + 0x14) = (short)in_t0;
          *(short *)(*(int *)(iVar5 + 0xc0) + 0x10) = (short)param_4;
          *(undefined2 *)(*(int *)(iVar5 + 0xc0) + 0x16) = 0;
          param_2 = param_2 + 2;
          *(char *)(*(int *)(iVar5 + 0xc0) + 0x3e) = (char)param_3;
          *(undefined1 *)(*(int *)(iVar5 + 0xc0) + 0x3f) = 0;
          param_3 = param_3 + 1;
          iVar5 = iVar5 + 4;
        } while (param_3 < (int)(uint)*(byte *)(param_1 + 8));
      }
      if (*(char *)(param_1 + 3) == '\0') {
        FUN_8013a2dc();
        return;
      }
      sVar2 = *(short *)(param_1 + 0x62);
      do {
        *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
        func_0x800517f8(param_1);
        FUN_80139c2c(param_1);
      } while ((int)*(short *)(param_1 + 0x32) < (int)sVar2);
      *(int *)(param_1 + 0x30) = (int)sVar2 << 0x10;
      return;
    }
  }
  else {
    param_2[10] = (short)(uVar6 - 100);
    if ((int)((uVar6 - 100) * 0x10000) < 0) {
      param_2[10] = 0;
    }
  }
  uVar4 = 0xc400;
  if (((short)param_2[10] < -0x3c00) || (uVar4 = 0x3c00, 0x3c00 < (short)param_2[10])) {
    param_2[10] = uVar4;
  }
  param_2[9] = param_2[9] + (short)(char)((ushort)param_2[10] >> 8);
  iVar5 = 0;
  *param_2 = param_2[3];
  param_2[1] = param_2[4] + param_2[0xe];
  iVar7 = ((short)param_2[9] * 5 >> 4) + 0x19;
  if (*(char *)(param_1 + 8) != '\0') {
    iVar8 = param_1;
    do {
      *(short *)(*(int *)(iVar8 + 0xc0) + 0xc) =
           (short)(iVar7 * (iVar5 + 2) >> 4) - (short)(iVar7 >> 5);
      iVar5 = iVar5 + 1;
      iVar8 = iVar8 + 4;
    } while (iVar5 < (int)(uint)*(byte *)(param_1 + 8));
  }
  return;
}

