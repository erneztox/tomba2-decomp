// FUN_8011f21c

void FUN_8011f21c(int param_1)

{
  short sVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  ushort uVar5;
  uint uVar6;
  int iVar7;
  undefined2 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 in_t0;
  
  FUN_801284ac();
  puVar8 = (undefined2 *)(param_1 + 0x60);
  iVar9 = (int)*(short *)(param_1 + 0x72);
  sVar1 = *(short *)(param_1 + 0x7c);
  iVar10 = (uint)*(ushort *)(param_1 + 0x74) + (uint)*(ushort *)(param_1 + 0x7a);
  *(short *)(param_1 + 0x74) = (short)iVar10;
  if (sVar1 < iVar9) {
    *(short *)(param_1 + 0x74) = (short)iVar10 + (*(short *)(param_1 + 0x72) - sVar1) * -6;
  }
  uVar6 = (uint)*(ushort *)(param_1 + 0x74);
  if (*(short *)(param_1 + 0x74) < 0) {
    *(short *)(param_1 + 0x74) = (short)(uVar6 + 100);
    iVar3 = (uVar6 + 100) * 0x10000;
    if (0 < iVar3) {
      *(undefined2 *)(param_1 + 0x74) = 0;
      iVar4 = ((int)sVar1 << 0x10) >> 0xe;
      if (uVar6 != iVar3 >> 0x10) {
        iVar3 = iVar4 + -4;
        if ((*(ushort *)(iVar9 + 0x60) & 2) == 0) {
          iVar3 = iVar4 + -5;
        }
        iVar3 = iVar3 * 0x10000 >> 0x10;
        iVar7 = 1;
        *(undefined1 *)(*(int *)(iVar9 + iVar3 * 4 + 0xc0) + 0x3e) = 1;
        *(undefined1 *)(*(int *)(iVar9 + (iVar3 + 1) * 4 + 0xc0) + 0x3e) = 1;
        iVar3 = *(int *)(iVar9 + iVar10 * 4 + 0xc0);
        *(byte *)(iVar3 + 0x3e) = *(byte *)(iVar3 + 0x3e) | 2;
        uVar5 = *(ushort *)(iVar9 + 0x7a) & 3;
        if (uVar5 == 2) {
          uVar2 = 4;
        }
        else {
          uVar2 = 8;
          if (uVar5 != 3) goto LAB_801312a0;
        }
        *(undefined2 *)(iVar9 + 0x72) = uVar2;
        if ((*(ushort *)(iVar9 + 0x7a) & 4) != 0) {
          *(short *)(iVar9 + 0x72) = *(short *)(iVar9 + 0x72) + 2;
        }
        return;
      }
      iVar7 = iVar4 + -2;
      *(short *)(param_1 + 0x60) = (short)iVar4;
      *(undefined2 *)(param_1 + 0x62) = 0xfab0;
      *(undefined2 *)(param_1 + 100) = 0xfb96;
      *(undefined2 *)(param_1 + 0x66) = 0x1e0;
      *(undefined2 *)(param_1 + 0x68) = 0xf878;
      *(undefined2 *)(param_1 + 0x50) = 0x980;
      *(undefined4 *)(param_1 + 0x2c) = 0x24c30000;
      *(undefined4 *)(param_1 + 0x34) = 0x14f10000;
      iVar9 = 0;
      *(undefined1 *)(param_1 + 0x5e) = 0;
      *(undefined2 *)(param_1 + 0x54) = 0;
      *(undefined2 *)(param_1 + 0x56) = 0;
      *(undefined2 *)(param_1 + 0x58) = 0;
      *(int *)(param_1 + 0x30) = (int)*(short *)(param_1 + 0x60) << 0x10;
      if (*(char *)(param_1 + 8) != '\0') {
        in_t0 = 0xffffffff;
        iVar10 = -2;
        puVar8 = (undefined2 *)&DAT_8014aa58;
        do {
          *(short *)(*(int *)(iVar7 + 0xc0) + 6) = (short)iVar9 + -1;
          **(undefined2 **)(iVar7 + 0xc0) = 0;
          *(undefined2 *)(*(int *)(iVar7 + 0xc0) + 2) = *puVar8;
LAB_801312a0:
          *(undefined2 *)(*(int *)(iVar7 + 0xc0) + 4) = puVar8[1];
          *(undefined4 *)(*(int *)(iVar7 + 0xc0) + 8) = 0;
          *(undefined4 *)(*(int *)(iVar7 + 0xc0) + 0xc) = 0;
          *(short *)(*(int *)(iVar7 + 0xc0) + 0x14) = (short)in_t0;
          *(short *)(*(int *)(iVar7 + 0xc0) + 0x10) = (short)iVar10;
          *(undefined2 *)(*(int *)(iVar7 + 0xc0) + 0x16) = 0;
          puVar8 = puVar8 + 2;
          *(char *)(*(int *)(iVar7 + 0xc0) + 0x3e) = (char)iVar9;
          *(undefined1 *)(*(int *)(iVar7 + 0xc0) + 0x3f) = 0;
          iVar9 = iVar9 + 1;
          iVar7 = iVar7 + 4;
        } while (iVar9 < (int)(uint)*(byte *)(param_1 + 8));
      }
      if (*(char *)(param_1 + 3) != '\0') {
        sVar1 = *(short *)(param_1 + 0x62);
        do {
          *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + *(short *)(param_1 + 0x50) * 0x100;
          func_0x800517f8(param_1);
          FUN_80139c2c(param_1);
        } while ((int)*(short *)(param_1 + 0x32) < (int)sVar1);
        *(int *)(param_1 + 0x30) = (int)sVar1 << 0x10;
        return;
      }
      FUN_8013a2dc();
      return;
    }
  }
  else {
    *(short *)(param_1 + 0x74) = (short)(uVar6 - 100);
    if ((int)((uVar6 - 100) * 0x10000) < 0) {
      *(undefined2 *)(param_1 + 0x74) = 0;
    }
  }
  uVar2 = 0xc400;
  if ((*(short *)(param_1 + 0x74) < -0x3c00) ||
     (uVar2 = 0x3c00, 0x3c00 < *(short *)(param_1 + 0x74))) {
    *(undefined2 *)(param_1 + 0x74) = uVar2;
  }
  *(short *)(param_1 + 0x72) =
       *(short *)(param_1 + 0x72) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x74) >> 8);
  iVar10 = 0;
  *puVar8 = *(undefined2 *)(param_1 + 0x66);
  *(short *)(param_1 + 0x62) = *(short *)(param_1 + 0x68) + *(short *)(param_1 + 0x7c);
  iVar9 = (*(short *)(param_1 + 0x72) * 5 >> 4) + 0x19;
  if (*(char *)(param_1 + 8) != '\0') {
    iVar3 = param_1;
    do {
      *(short *)(*(int *)(iVar3 + 0xc0) + 0xc) =
           (short)(iVar9 * (iVar10 + 2) >> 4) - (short)(iVar9 >> 5);
      iVar10 = iVar10 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar10 < (int)(uint)*(byte *)(param_1 + 8));
  }
  return;
}

