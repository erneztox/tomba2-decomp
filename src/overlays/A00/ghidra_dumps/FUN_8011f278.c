// FUN_8011f278

void FUN_8011f278(int param_1,undefined2 *param_2,int param_3,int param_4)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  ushort uVar4;
  int in_v1;
  int iVar5;
  int iVar6;
  undefined2 in_t0;
  int unaff_s0;
  
  param_2[10] = (short)(in_v1 + 100);
  iVar3 = (in_v1 + 100) * 0x10000;
  if (iVar3 < 1) {
    uVar2 = 0xc400;
    if (((short)param_2[10] < -0x3c00) || (uVar2 = 0x3c00, 0x3c00 < (short)param_2[10])) {
      param_2[10] = uVar2;
    }
    param_2[9] = param_2[9] + (short)(char)((ushort)param_2[10] >> 8);
    iVar5 = 0;
    *param_2 = param_2[3];
    param_2[1] = param_2[4] + param_2[0xe];
    iVar3 = ((short)param_2[9] * 5 >> 4) + 0x19;
    if (*(char *)(unaff_s0 + 8) != '\0') {
      iVar6 = unaff_s0;
      do {
        *(short *)(*(int *)(iVar6 + 0xc0) + 0xc) =
             (short)(iVar3 * (iVar5 + 2) >> 4) - (short)(iVar3 >> 5);
        iVar5 = iVar5 + 1;
        iVar6 = iVar6 + 4;
      } while (iVar5 < (int)(uint)*(byte *)(unaff_s0 + 8));
    }
    return;
  }
  param_2[10] = 0;
  iVar5 = (param_1 << 0x10) >> 0xe;
  if (in_v1 != iVar3 >> 0x10) {
    iVar3 = iVar5 + -4;
    if ((*(ushort *)(param_3 + 0x60) & 2) == 0) {
      iVar3 = iVar5 + -5;
    }
    iVar5 = iVar3 * 0x10000 >> 0x10;
    iVar3 = 1;
    *(undefined1 *)(*(int *)(param_3 + iVar5 * 4 + 0xc0) + 0x3e) = 1;
    *(undefined1 *)(*(int *)(param_3 + (iVar5 + 1) * 4 + 0xc0) + 0x3e) = 1;
    iVar5 = *(int *)(param_3 + param_4 * 4 + 0xc0);
    *(byte *)(iVar5 + 0x3e) = *(byte *)(iVar5 + 0x3e) | 2;
    uVar4 = *(ushort *)(param_3 + 0x7a) & 3;
    if (uVar4 == 2) {
      uVar2 = 4;
    }
    else {
      uVar2 = 8;
      if (uVar4 != 3) {
        while( true ) {
          *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 4) = param_2[1];
          *(undefined4 *)(*(int *)(iVar3 + 0xc0) + 8) = 0;
          *(undefined4 *)(*(int *)(iVar3 + 0xc0) + 0xc) = 0;
          *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0x14) = in_t0;
          *(short *)(*(int *)(iVar3 + 0xc0) + 0x10) = (short)param_4;
          *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 0x16) = 0;
          param_2 = param_2 + 2;
          *(char *)(*(int *)(iVar3 + 0xc0) + 0x3e) = (char)param_3;
          *(undefined1 *)(*(int *)(iVar3 + 0xc0) + 0x3f) = 0;
          param_3 = param_3 + 1;
          iVar3 = iVar3 + 4;
          if ((int)(uint)*(byte *)(unaff_s0 + 8) <= param_3) break;
LAB_80131278:
          *(short *)(*(int *)(iVar3 + 0xc0) + 6) = (short)param_3 + -1;
          **(undefined2 **)(iVar3 + 0xc0) = 0;
          *(undefined2 *)(*(int *)(iVar3 + 0xc0) + 2) = *param_2;
        }
        goto LAB_80131318;
      }
    }
    *(undefined2 *)(param_3 + 0x72) = uVar2;
    if ((*(ushort *)(param_3 + 0x7a) & 4) != 0) {
      *(short *)(param_3 + 0x72) = *(short *)(param_3 + 0x72) + 2;
    }
    return;
  }
  iVar3 = iVar5 + -2;
  *(short *)(unaff_s0 + 0x60) = (short)iVar5;
  *(undefined2 *)(unaff_s0 + 0x62) = 0xfab0;
  *(undefined2 *)(unaff_s0 + 100) = 0xfb96;
  *(undefined2 *)(unaff_s0 + 0x66) = 0x1e0;
  *(undefined2 *)(unaff_s0 + 0x68) = 0xf878;
  *(undefined2 *)(unaff_s0 + 0x50) = 0x980;
  *(undefined4 *)(unaff_s0 + 0x2c) = 0x24c30000;
  *(undefined4 *)(unaff_s0 + 0x34) = 0x14f10000;
  param_3 = 0;
  *(undefined1 *)(unaff_s0 + 0x5e) = 0;
  *(undefined2 *)(unaff_s0 + 0x54) = 0;
  *(undefined2 *)(unaff_s0 + 0x56) = 0;
  *(undefined2 *)(unaff_s0 + 0x58) = 0;
  *(int *)(unaff_s0 + 0x30) = (int)*(short *)(unaff_s0 + 0x60) << 0x10;
  if (*(char *)(unaff_s0 + 8) != '\0') {
    in_t0 = 0xffff;
    param_4 = -2;
    param_2 = (undefined2 *)&DAT_8014aa58;
    goto LAB_80131278;
  }
LAB_80131318:
  if (*(char *)(unaff_s0 + 3) != '\0') {
    sVar1 = *(short *)(unaff_s0 + 0x62);
    do {
      *(int *)(unaff_s0 + 0x30) = *(int *)(unaff_s0 + 0x30) + *(short *)(unaff_s0 + 0x50) * 0x100;
      func_0x800517f8();
      FUN_80139c2c();
    } while ((int)*(short *)(unaff_s0 + 0x32) < (int)sVar1);
    *(int *)(unaff_s0 + 0x30) = (int)sVar1 << 0x10;
    return;
  }
  FUN_8013a2dc();
  return;
}

