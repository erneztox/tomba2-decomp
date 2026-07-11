// FUN_80114328

undefined4 FUN_80114328(int param_1)

{
  ushort uVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 unaff_retaddr;
  undefined1 auStack_40 [24];
  undefined1 auStack_28 [16];
  
  puVar10 = auStack_28;
  iVar8 = *(int *)(param_1 + 0x10);
  if (iVar8 == 0) {
    *(undefined2 *)(param_1 + 0x74) = 0;
  }
  else {
    uVar1 = 0;
    if (*(char *)(iVar8 + 0x2b) != '\0') {
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined2 *)(param_1 + 0x74) = 0;
      puVar10 = auStack_28;
      goto LAB_8011d524;
    }
  }
  sVar2 = *(short *)(param_1 + 0x74);
  if (sVar2 == 1) {
    if (900 < (int)(((uint)*(ushort *)(param_1 + 0x32) - (*(ushort *)(iVar8 + 0x32) - 0x46)) *
                   0x10000) >> 0x10) {
      return 0;
    }
    *(undefined2 *)(param_1 + 0x74) = 0;
    uVar4 = FUN_8011d518();
    return uVar4;
  }
  if (1 < sVar2) {
    uVar1 = 0;
    puVar10 = auStack_28;
    if (sVar2 != 2) goto LAB_8011d524;
    iVar5 = (int)(((uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar8 + 0x2e)) * 0x10000)
            >> 0x10;
    iVar5 = iVar5 * iVar5;
    iVar6 = (int)(((uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar8 + 0x36)) * 0x10000)
            >> 0x10;
    if (640000 < iVar5 + iVar6 * iVar6) {
      return 0;
    }
    *(undefined2 *)(param_1 + 0x74) = 0;
LAB_8011457c:
    uVar1 = 0;
    param_1 = iVar5;
    puVar10 = auStack_28;
    goto LAB_8011d524;
  }
  uVar1 = 0;
  if (sVar2 != 0) goto LAB_8011d524;
  unaff_retaddr = 0x801143b4;
  iVar5 = param_1;
  iVar8 = FUN_8011dd38();
  if (iVar8 == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x10) = iVar8;
  uVar7 = (uint)*(ushort *)(param_1 + 0x32) - (*(ushort *)(iVar8 + 0x32) - 0x46);
  if ((int)*(short *)(param_1 + 0x6e) < (int)(uVar7 & 0xffff)) {
LAB_801144ec:
    uVar1 = 0xffff;
    *(undefined2 *)(param_1 + 0x74) = 0xffff;
  }
  else {
    iVar6 = (uint)*(ushort *)(param_1 + 0x2e) - (uint)*(ushort *)(iVar8 + 0x2e);
    iVar5 = (uint)*(ushort *)(param_1 + 0x36) - (uint)*(ushort *)(iVar8 + 0x36);
    if (*(char *)(iVar8 + 0x46) != '\b') {
      if ((int)(uVar7 * 0x10000) >> 0x10 < 0x2a9) {
        iVar9 = iVar5 * 0x10000 >> 0x10;
        iVar3 = iVar6 * 0x10000 >> 0x10;
        sVar2 = func_0x80085690(iVar9,iVar3);
        iVar5 = (int)*(short *)(iVar8 + 0x56);
        unaff_retaddr = 0x801144ac;
        iVar6 = func_0x80077768(iVar5,(int)-sVar2,1);
        if (iVar6 != 0) {
          uVar1 = 0;
          if (iVar3 * iVar3 + iVar9 * iVar9 < 0x9c401) goto LAB_8011457c;
          *(undefined2 *)(param_1 + 0x74) = 2;
          goto LAB_8011d520;
        }
      }
      goto LAB_801144ec;
    }
    iVar6 = iVar6 * 0x10000 >> 0x10;
    iVar3 = iVar5 * 0x10000 >> 0x10;
    if (40000 < iVar6 * iVar6 + iVar3 * iVar3) goto LAB_801144ec;
    if ((int)(uVar7 * 0x10000) >> 0x10 < 0x385) {
      return 1;
    }
    uVar1 = *(short *)(param_1 + 0x74) + 1;
    *(ushort *)(param_1 + 0x74) = uVar1;
  }
LAB_8011d520:
  param_1 = iVar5;
  puVar10 = auStack_40;
LAB_8011d524:
  *(int *)(puVar10 + 0x10) = iVar8;
  *(undefined4 *)(puVar10 + 0x14) = unaff_retaddr;
  if ((uVar1 & 4) != 0) {
    func_0x80073328();
  }
  uVar4 = func_0x800735f4(param_1,0x67);
  return uVar4;
}

