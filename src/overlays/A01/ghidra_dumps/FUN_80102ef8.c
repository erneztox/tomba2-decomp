// FUN_80102ef8

/* WARNING: Removing unreachable block (ram,0x8010c010) */
/* WARNING: Removing unreachable block (ram,0x8010c020) */
/* WARNING: Removing unreachable block (ram,0x8010c028) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_80102ef8(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int unaff_s2;
  int unaff_s3;
  
  iVar3 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(param_2 + 0x2e)) * 0x10000)
          >> 0x10;
  iVar4 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(param_2 + 0x36)) * 0x10000)
          >> 0x10;
  uVar5 = func_0x80084080(iVar3 * iVar3 + iVar4 * iVar4);
  if ((int)*(short *)(param_1 + 0x80) + (int)*(short *)(param_2 + 0x80) < (int)(uVar5 & 0xffff)) {
    return 0xffffffff;
  }
  iVar3 = (uint)*(ushort *)(param_1 + 0x32) - (uint)*(ushort *)(param_2 + 0x32);
  iVar4 = (uint)*(ushort *)(param_2 + 0x84) + (uint)*(ushort *)(param_1 + 0x84);
  if ((int)(iVar3 + iVar4 & 0xffffU) <=
      (int)*(short *)(param_1 + 0x86) + (int)*(short *)(param_2 + 0x86)) {
    iVar7 = (uint)*(ushort *)(param_2 + 0x86) - (uint)*(ushort *)(param_2 + 0x84);
    if (iVar3 * 0x10000 < 0) {
      *(int *)(param_1 + 0x18) = -iVar4;
      *(int *)(param_1 + 0x1c) = iVar7;
      func_0x80084660();
      func_0x80084690(param_1);
      *(undefined1 *)(unaff_s3 + 7) = 0x2d;
      *(undefined2 *)(unaff_s3 + 0x16) = 0xf;
      *(undefined2 *)(unaff_s3 + 0xe) = 0x3e3f;
      *(undefined2 *)(unaff_s3 + 0xc) = 0xd000;
      *(undefined2 *)(unaff_s3 + 0x14) = 0xd018;
      *(undefined2 *)(unaff_s3 + 0x1c) = 0xd800;
      *(undefined2 *)(unaff_s3 + 0x24) = 0xd818;
      if ((*(char *)(unaff_s2 + 6) == '\0') && (0x46e6 < _DAT_1f800160)) {
        sVar2 = func_0x80076d68();
        FUN_8011d9e4(param_2,iVar3 + 1);
        if (*(short *)(param_2 + (iVar3 + 1) * 2 + 0x60) == 2) {
          uVar1 = *(ushort *)(*(int *)(param_2 + 0x38) + 4);
          iVar3 = param_2 + iVar3 * 2;
          if ((int)((uint)uVar1 << 0x10) >> 0x14 != (int)*(short *)(iVar3 + 0x60)) {
            func_0x80051b04(*(undefined4 *)(param_2 + 200),0x15);
            *(short *)(iVar3 + 0x60) = (short)uVar1 >> 4;
          }
          return (int)sVar2;
        }
        *(undefined2 *)(param_2 + iVar3 * 2 + 0x60) = 0;
        uVar5 = FUN_8011dfc4();
        return uVar5;
      }
      uVar5 = (uint)*(ushort *)(unaff_s2 + 0x2e);
      goto LAB_8010bff4;
    }
    iVar3 = (int)((iVar7 + ((uint)*(ushort *)(param_1 + 0x86) - (uint)*(ushort *)(param_1 + 0x84)))
                 * 0x10000) >> 0x10;
    if (0 < iVar3) {
      DAT_1f800253 = 4;
      *(int *)(param_1 + 0x30) = (*(short *)(param_2 + 0x32) + iVar3) * 0x10000;
      if (*(char *)(param_1 + 0x145) != '\x01') {
        return 3;
      }
      if (-1 < *(short *)(param_1 + 0x4a)) {
        return 3;
      }
      *(undefined2 *)(param_1 + 0x4a) = 0;
      return 3;
    }
    if ((*(byte *)(param_1 + 0x145) & 1) == 0) {
      *(undefined1 *)(param_2 + 0x29) = 1;
      *(int *)(param_1 + 0x30) = (*(short *)(param_2 + 0x32) + iVar3) * 0x10000;
      func_0x80022c78();
      uVar5 = 2;
      goto LAB_8010bff4;
    }
  }
  uVar5 = 0xffffffff;
LAB_8010bff4:
  iVar4 = ((int)((uVar5 - 0x46e6) * 0x10000) >> 0x10) / 0x18;
  iVar3 = 0;
  uVar6 = 0xc;
  uVar5 = 0;
  if (0 < iVar4) {
    do {
      func_0x8003b320();
      iVar3 = iVar3 + 1;
      uVar6 = uVar5 - 0x18;
      uVar5 = uVar6 & 0xffff;
    } while (iVar3 * 0x10000 >> 0x10 < iVar4);
  }
  return uVar6;
}

