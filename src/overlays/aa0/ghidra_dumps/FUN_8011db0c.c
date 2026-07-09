// FUN_8011db0c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_8011db0c(undefined1 *param_1)

{
  ushort uVar1;
  undefined2 uVar2;
  undefined1 *puVar3;
  uint uVar4;
  int extraout_v1;
  int iVar5;
  undefined1 uVar6;
  
  if (param_1[0x47] == '\0') {
    uVar1 = *(ushort *)(param_1 + 0x44);
    *(ushort *)(0x76 - (int)(uint)uVar1) = uVar1;
    return (undefined1 *)(uint)uVar1;
  }
  iVar5 = (int)*(short *)(param_1 + 0x44);
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + iVar5 * *(short *)(param_1 + 0x48);
  *(int *)(param_1 + 0x34) = *(int *)(param_1 + 0x34) + iVar5 * *(short *)(param_1 + 0x4c);
  if (*(short *)(param_1 + 100) == 0) {
    *(short *)(param_1 + 0x32) = *(short *)(param_1 + 0x32) + 10;
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + iVar5 * *(short *)(param_1 + 0x4a);
    puVar3 = (undefined1 *)FUN_80126b7c();
    return puVar3;
  }
  if ((*(ushort *)(param_1 + 100) & 3) != 0) {
    *(short *)(param_1 + 0x32) =
         *(short *)(param_1 + 0x32) + (short)(char)((ushort)*(undefined2 *)(param_1 + 0x4a) >> 8);
  }
  func_0x8004766c(param_1);
  if (*(short *)(param_1 + 100) == 1) {
    return (undefined1 *)0x0;
  }
  uVar4 = func_0x80049250(param_1,0,0x1e);
  if ((uVar4 & 1) == 0) {
    if ((uVar4 & 2) != 0) {
      func_0x80049760(param_1);
      *(undefined2 *)(param_1 + 100) = 4;
    }
    puVar3 = (undefined1 *)FUN_80126bec();
    return puVar3;
  }
  puVar3 = param_1;
  func_0x80049674();
  *(undefined2 *)(param_1 + 100) = 0;
  uVar6 = (undefined1)uVar4;
  if (extraout_v1 < 0) {
    if (1 < extraout_v1) {
      if (extraout_v1 == 2) {
        if (param_1[0x29] == '\0') {
          return (undefined1 *)0x0;
        }
        if (puVar3[0x29] == '\0') {
          return (undefined1 *)0x0;
        }
        if (puVar3[0x17b] != '\0') {
          return (undefined1 *)0x3;
        }
        param_1[6] = 3;
        DAT_1f800137 = 2;
        puVar3 = (undefined1 *)func_0x80074590(0x17,0,0xf);
        return puVar3;
      }
      if (extraout_v1 == 3) {
        iVar5 = func_0x80072e60(param_1);
        if (iVar5 == 0) {
          return (undefined1 *)0x0;
        }
        param_1[6] = param_1[6] + '\x01';
        DAT_1f800236 = uVar6;
        DAT_800bf80f = 2;
        DAT_800bf839 = uVar6;
        _DAT_800bf83a = 0x813;
        return &DAT_800bf808;
      }
      goto LAB_80138c58;
    }
    if (extraout_v1 != 0) goto LAB_80138c58;
    if (DAT_800bf871 != '\n') {
      param_1[6] = 2;
      goto LAB_80138c58;
    }
    *param_1 = 2;
    puVar3 = param_1;
  }
  else {
    uVar1 = *(ushort *)(uVar4 + 0x78);
    if ((uVar1 & 1) == 0) {
      *(undefined2 *)(uVar4 + 0x48) = 0;
      *(undefined2 *)(uVar4 + 0x4e) = 0;
      *(undefined2 *)(uVar4 + 0x78) = 0;
      *(undefined1 *)(uVar4 + 5) = 0;
      *(undefined1 *)(uVar4 + 6) = 0;
      *(undefined1 *)(uVar4 + 0x5e) = 0;
      *(undefined2 *)(uVar4 + 0x76) = 0;
      return (undefined1 *)(uVar1 & 0x8000);
    }
    uVar2 = 0xf;
    if ((uVar1 & 0x8000) == 0) {
      uVar2 = 0x1e;
    }
    *(undefined2 *)(uVar4 + 0x40) = uVar2;
    *(char *)(uVar4 + 6) = *(char *)(uVar4 + 6) + '\x01';
  }
  puVar3[6] = uVar6;
  *(undefined2 *)(puVar3 + 0x50) = 0x400;
  func_0x80072efc();
LAB_80138c58:
  puVar3 = (undefined1 *)FUN_80141c00();
  return puVar3;
}

