// FUN_80108dd8

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_80108dd8(int param_1)

{
  byte bVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  undefined2 uVar5;
  int iVar6;
  uint uVar7;
  
  bVar1 = *(byte *)(param_1 + 5);
  uVar7 = *(uint *)(param_1 + 0x14);
  if (bVar1 == 1) {
    iVar6 = func_0x8004b528(param_1,uVar7);
    if (iVar6 == 1) {
      *(char *)(param_1 + 5) = *(char *)(param_1 + 5) + '\x01';
      switchD_80113a38::default(uVar7);
      FUN_80111e8c(param_1);
      return;
    }
  }
  else {
    if (bVar1 < 2) {
      if (bVar1 != 0) {
        FUN_80111e8c(param_1);
        return;
      }
      if (DAT_800e7e85 != '\x12') {
        return;
      }
      *(undefined1 *)(param_1 + 5) = 1;
      DAT_1f800137 = 2;
      sVar2 = func_0x800782b0(&DAT_800e7eac,(int)*(short *)(uVar7 + 0x2e),
                              (int)*(short *)(uVar7 + 0x36));
      iVar6 = (int)_DAT_800e7fc0;
      DAT_800e7fc7 = func_0x80077768((int)sVar2,iVar6,0);
      uVar5 = (undefined2)iVar6;
      func_0x80054198(&DAT_800e7e80);
      func_0x80055284(&DAT_800e7e80);
      uVar4 = (uint)_DAT_800e7ed6;
      *(ushort *)(param_1 + 0x56) = _DAT_800e7ed6;
      if (uVar4 == uVar7) {
        DAT_00000005 = 0;
        func_0x8004190c(0);
        return;
      }
      *(undefined2 *)(uVar7 + 0x4a) = uVar5;
      func_0x8007778c();
      if (*(short *)(uVar7 + 0x60) == 0) {
        if (*(char *)(uVar7 + 1) == '\0') {
          *(short *)(uVar7 + 0x60) = *(short *)(uVar7 + 0x60) + 1;
          *(undefined2 *)(uVar7 + 0x62) = 0x5a;
          FUN_80123f10();
          return;
        }
      }
      else {
        if (*(short *)(uVar7 + 0x60) != 0) {
          FUN_80123f10();
          return;
        }
        if (*(char *)(uVar7 + 1) != '\0') {
          *(undefined2 *)(uVar7 + 0x60) = 0;
          FUN_80123f10();
          return;
        }
        uVar3 = *(short *)(uVar7 + 0x62) - 1;
        *(ushort *)(uVar7 + 0x62) = uVar3;
        if ((int)((uint)uVar3 << 0x10) < 0) {
          DAT_800bf9d4 = 0;
          *(undefined1 *)(uVar7 + 4) = 3;
          FUN_80123f10();
          return;
        }
      }
      return;
    }
    if (bVar1 != 2) {
      FUN_80111e8c();
      return;
    }
    iVar6 = func_0x8004b528(param_1,uVar7);
    if (iVar6 == 2) {
      DAT_800bf809 = 0;
      DAT_1f800137 = 0;
      *(undefined1 *)(param_1 + 4) = 3;
    }
  }
  func_0x8004bd64(param_1,0,_DAT_800e7f5c,_DAT_800e7f50,0);
  *(undefined1 *)(param_1 + 1) = 1;
  func_0x80077efc();
  return;
}

