// FUN_80110168

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_80110168(int param_1)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  short sVar4;
  int iVar5;
  undefined2 local_20;
  undefined2 local_1e;
  undefined2 local_1c;
  undefined2 local_18;
  undefined2 local_16;
  undefined2 local_14;
  
  bVar1 = *(byte *)(param_1 + 7);
  iVar5 = 0;
  if (bVar1 != 1) {
    if (1 < bVar1) {
      if (bVar1 != 2) {
        iVar5 = FUN_8011930c();
        return iVar5;
      }
      sVar4 = *(ushort *)(param_1 + 0x42) - 1;
      iVar3 = (uint)*(ushort *)(param_1 + 0x42) << 0x10;
      *(short *)(param_1 + 0x42) = sVar4;
      if (0 < iVar3) {
        if (0x27 < sVar4) {
          return 0;
        }
        local_18 = (undefined2)(*(short *)(*(int *)(param_1 + 0xc4) + 0x18) * 0x5f >> 4);
        local_16 = (undefined2)(*(short *)(*(int *)(param_1 + 0xc4) + 0x1e) * 0x5f >> 4);
        local_14 = (undefined2)(*(short *)(*(int *)(param_1 + 0xc4) + 0x24) * 0x5f >> 4);
        local_20 = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x2c);
        local_1e = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x30);
        local_1c = *(undefined2 *)(*(int *)(param_1 + 0xc4) + 0x34);
        func_0x80133cac(0,param_1,&local_20,&local_18);
        return 0;
      }
      iVar5 = 1;
      goto LAB_80119308;
    }
    if (bVar1 != 0) {
      iVar5 = FUN_8011930c();
      return iVar5;
    }
    if (*(char *)(param_1 + 0x46) != '\t') {
      *(undefined1 *)(param_1 + 0x46) = 9;
      *(int *)(*(int *)(param_1 + 0xc4) + 0x40) = _DAT_800ecfc4 + *(int *)(_DAT_800ecfc4 + 8);
      func_0x80077cfc(param_1,0x80139b24,9,10);
    }
    *(undefined2 *)(param_1 + 0x42) = 0x2d;
    *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
  }
  uVar2 = *(ushort *)(param_1 + 0x42);
  *(ushort *)(param_1 + 0x42) = uVar2 - 1;
  if (0 < (int)((uint)uVar2 << 0x10)) {
    return 0;
  }
  *(undefined2 *)(param_1 + 0x42) = 0x2d;
  if (*(char *)(param_1 + 0x46) != '\f') {
    *(undefined1 *)(param_1 + 0x46) = 0xc;
    *(int *)(*(int *)(param_1 + 0xc4) + 0x40) = _DAT_800ecfc4 + *(int *)(_DAT_800ecfc4 + 8);
    func_0x80077cfc(param_1,0x80139b24,0xc,7);
  }
  iVar3 = *(byte *)(param_1 + 7) + 1;
  *(char *)(param_1 + 7) = (char)iVar3;
LAB_80119308:
  if (iVar3 == 0) {
    uVar2 = *(short *)(iVar5 + 0x40) - 1;
    *(ushort *)(iVar5 + 0x40) = uVar2;
    if (uVar2 != 0) {
      return (uint)uVar2 << 0x10;
    }
  }
  func_0x80074590(0x1b,0,0);
  func_0x800315d4(iVar5 + 0x2c);
  *(undefined1 *)(iVar5 + 4) = 3;
  return 3;
}

