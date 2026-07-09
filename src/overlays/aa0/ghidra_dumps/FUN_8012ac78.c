// FUN_8012ac78

void FUN_8012ac78(undefined1 *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  ushort in_v1;
  uint uVar4;
  undefined6 uVar5;
  
  bVar1 = param_1[4];
  uVar4 = (uint)bVar1;
  uVar2 = (uint)(uVar4 < 2);
  if (uVar4 != 1) {
    if (uVar2 == 0) {
      if (3 < uVar4) {
        return;
      }
      FUN_80133d4c();
      return;
    }
    if (uVar4 == 0) {
      iVar3 = func_0x80051b70(param_1,0xc,0x14);
      if (iVar3 != 0) {
        return;
      }
      param_1[0x2a] = 0x22;
      *(undefined2 *)(param_1 + 0x80) = 0x1e;
      *(undefined2 *)(param_1 + 0x82) = 0x3c;
      *(undefined2 *)(param_1 + 0x84) = 0x32;
      param_1[4] = 1;
      *param_1 = 1;
      param_1[0x29] = 0;
      param_1[0x46] = 0;
      *(undefined2 *)(param_1 + 0x86) = 100;
      func_0x8004766c(param_1);
      *(undefined2 *)(param_1 + 0x42) = 0;
      in_v1 = *(ushort *)((uint)(byte)param_1[3] * 2 + -0x7feb591c);
      uVar2 = 0xffffff38;
      *(undefined2 *)(param_1 + 0x60) = 0xff38;
      *(ushort *)(param_1 + 0x32) = in_v1;
    }
    goto LAB_80133d54;
  }
  FUN_801337e4(param_1);
  in_v1 = (ushort)DAT_800e7eaa;
  uVar2 = 0x22;
  if (DAT_800e7eaa < 0x1c) {
LAB_8012ad84:
    *(ushort *)(param_1 + 0x62) = (ushort)bVar1;
  }
  else {
    if (DAT_800e7eaa == 0x22) {
      param_1[1] = bVar1;
      func_0x80077ebc(param_1);
    }
    else {
      uVar5 = func_0x800778e4(param_1,(int)*(short *)(param_1 + 0x60));
      in_v1 = (ushort)((uint6)uVar5 >> 0x20);
      uVar2 = 0;
      if ((int)uVar5 == 0) goto LAB_8012ad84;
    }
    func_0x8004766c(param_1);
    uVar5 = func_0x800517f8(param_1);
    in_v1 = (ushort)((uint6)uVar5 >> 0x20);
    uVar2 = (uint)uVar5;
  }
LAB_80133d54:
  if (uVar2 == 0) {
    *(ushort *)(param_4 + 6) = in_v1 - 3;
    FUN_8013cd60();
    return;
  }
  DAT_800bf9e0 = 0x11;
  *(undefined1 *)(uVar4 + 5) = 9;
  *(undefined1 *)(param_4 + 4) = 0x78;
  FUN_8013cd60();
  return;
}

