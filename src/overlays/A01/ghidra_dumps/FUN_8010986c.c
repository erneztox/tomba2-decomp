// FUN_8010986c

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_8010986c(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  int extraout_v1;
  int iVar4;
  
  iVar2 = func_0x80072ddc(0,0,5,3);
  if (iVar2 == 0) {
    return;
  }
  DAT_800bf80a = 1;
  DAT_800bf80b = (undefined1)param_1;
  iVar3 = param_1;
  func_0x8004d650();
  *(undefined4 *)(iVar2 + 0x1c) = 0x80112100;
  if (param_1 == 0x7c) {
    iVar4 = -0x7ff40000;
    *(undefined1 *)(iVar2 + 3) = 0x83;
  }
  else {
    iVar4 = extraout_v1;
    if (param_1 == 0x7d) {
      *(undefined1 *)(iVar2 + 3) = 0x84;
      DAT_800bf9ff = 4;
      return;
    }
  }
  *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0x3a) = *(undefined2 *)(iVar4 * 6 + iVar3 + 2);
  *(undefined2 *)(*(int *)(iVar2 + 0xc0) + 0x3c) =
       *(undefined2 *)(*(short *)(iVar2 + 0xe) * 6 + iVar3 + 4);
  if ((*(short *)(iVar2 + 0xe) == 0) &&
     (sVar1 = *(short *)(iVar2 + 0x40), *(short *)(iVar2 + 0x40) = sVar1 + -1, sVar1 == 1)) {
    *(char *)(iVar2 + 6) = *(char *)(iVar2 + 6) + '\x01';
    FUN_8011b8d8();
    return;
  }
  iVar3 = func_0x800778e4(iVar2,(int)(((uint)_DAT_1f800162 - (uint)*(ushort *)(iVar2 + 0x32)) *
                                     0x10000) >> 0x10);
  if (iVar3 != 0) {
    func_0x80051844(iVar2);
  }
  return;
}

