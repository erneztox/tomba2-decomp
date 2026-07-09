// FUN_8011c630

/* WARNING: Removing unreachable block (ram,0x801256c0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8011c630(int param_1,undefined4 param_2,short param_3,int param_4)

{
  ushort uVar1;
  short sVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  char cVar6;
  uint unaff_s0;
  uint uVar7;
  undefined8 uVar8;
  
  cVar6 = (char)((uint)param_2 >> 0x18);
  FUN_80126138();
  uVar3 = FUN_80110ee4(param_1);
  *(char *)(param_1 + 0x29) = (char)uVar3;
  if (*(char *)(param_1 + 0x5e) == '\x03') {
    *(undefined2 *)(*(int *)(param_1 + 0xc0) + 2) = 0;
    iVar5 = *(int *)(*(int *)(param_1 + 0x10) + (*(byte *)(param_1 + 0x5f) + 2) * 4 + 0xc0);
    *(byte *)(iVar5 + 0x3e) = *(byte *)(iVar5 + 0x3e) | 0x40;
    *(undefined1 *)(param_1 + 5) = 2;
    _DAT_0000001e = 0x8012e478;
    uVar4 = func_0x8009a450();
    return uVar4;
  }
  if (*(char *)(param_1 + 0x2b) != '\0') {
    uVar8 = FUN_801260cc(param_1);
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_1 + 7) = 0;
    goto LAB_801257ec;
  }
  if (*(char *)(param_1 + 6) == '\0') {
    uVar8 = FUN_80126040(param_1);
    iVar5 = (int)((ulonglong)uVar8 >> 0x20);
    if ((int)uVar8 == 0) goto LAB_8011c7dc;
    uVar3 = (uint)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc4) + 8);
    iVar5 = func_0x80083e80();
    *(short *)(param_1 + 0x4a) = (short)(iVar5 >> 4);
    *(char *)(param_1 + 6) = *(char *)(param_1 + 6) + '\x01';
LAB_80125778:
    uVar1 = *(short *)(uVar3 + 0x40) - 1;
    *(ushort *)(uVar3 + 0x40) = uVar1;
    if ((*(char *)(uVar3 + 1) == '\0') || ((int)((uint)uVar1 << 0x10) < 1)) {
      if (*(char *)(uVar3 + 0x5e) == '\x02') {
        *(undefined1 *)(*(int *)(uVar3 + 0x10) + 0x5e) = 0;
      }
      *(undefined1 *)(uVar3 + 4) = 3;
      uVar4 = FUN_8012e7dc();
      return uVar4;
    }
    iVar5 = (int)*(short *)(uVar3 + 0x44);
    param_4 = (int)*(short *)(uVar3 + 0x48);
    unaff_s0 = uVar3;
  }
  else {
    if (*(char *)(param_1 + 6) != '\x01') goto LAB_80125778;
    iVar5 = 1;
    if ((uVar3 & 0xff) != 0) {
      uVar7 = (uint)*(short *)(*(int *)(*(int *)(param_1 + 0x10) + 0xc4) + 8);
      uVar3 = uVar7;
      uVar8 = func_0x80083e80();
      iVar5 = (int)((ulonglong)uVar8 >> 0x20);
      unaff_s0 = (uint)((int)uVar7 < 0x800);
      *(short *)(param_1 + 0x4a) = (short)((int)uVar8 >> 4);
      if (unaff_s0 == 0) {
        sVar2 = *(short *)(param_1 + 0x44) + -0x100;
        *(short *)(param_1 + 0x44) = sVar2;
        if (sVar2 < -0x1000) {
          *(undefined2 *)(param_1 + 0x44) = 0xf000;
        }
      }
      else {
        sVar2 = *(short *)(param_1 + 0x44) + 0x100;
        *(short *)(param_1 + 0x44) = sVar2;
        if (0x1000 < sVar2) {
          *(undefined2 *)(param_1 + 0x44) = 0x1000;
          uVar4 = FUN_80125754();
          return uVar4;
        }
      }
      if (0 < *(short *)(param_1 + 0x44)) {
        *(undefined1 *)(param_1 + 0x5f) = 0;
        goto LAB_80125778;
      }
      if (*(short *)(param_1 + 0x44) < 0) {
        *(undefined1 *)(param_1 + 0x5f) = 1;
      }
    }
LAB_8011c7dc:
    if (*(ushort *)(param_1 + 0x54) - 0x400 < 0x801) {
      iVar5 = func_0x80083f50((int)(short)*(ushort *)(param_1 + 0x54));
      *(short *)(*(int *)(param_1 + 0xc0) + 2) = (short)((uint)(iVar5 * 5) >> 9);
      iVar5 = *(int *)(param_1 + 0xc0);
      if (*(short *)(iVar5 + 2) < 0) {
        *(short *)(iVar5 + 2) = -*(short *)(iVar5 + 2);
      }
      uVar4 = 0;
      if (*(short *)(param_1 + 0x60) != 0) {
        uVar4 = func_0x8006cba8(param_1 + 0x2c);
      }
      return uVar4;
    }
    param_4 = *(int *)(param_1 + 0xc0);
    *(undefined2 *)(param_4 + 2) = 0;
  }
  param_4 = iVar5 * param_4;
  param_3 = *(short *)(unaff_s0 + 0x4e);
  uVar8 = CONCAT44(iVar5,(int)*(short *)(unaff_s0 + 0x4c));
  cVar6 = (char)((ushort)*(undefined2 *)(unaff_s0 + 0x4a) >> 8);
LAB_801257ec:
  *(short *)(unaff_s0 + 0x32) = *(short *)(unaff_s0 + 0x32) + (short)cVar6;
  *(short *)(unaff_s0 + 0x54) = *(short *)(unaff_s0 + 0x54) + param_3;
  *(int *)(unaff_s0 + 0x2c) = *(int *)(unaff_s0 + 0x2c) + param_4;
  *(int *)(unaff_s0 + 0x34) =
       *(int *)(unaff_s0 + 0x34) + (int)((ulonglong)uVar8 >> 0x20) * (int)uVar8;
  sVar2 = FUN_8012e87c();
  uVar4 = 0;
  if (sVar2 != 0) {
    uVar4 = FUN_8012e7ec(unaff_s0);
  }
  return uVar4;
}

