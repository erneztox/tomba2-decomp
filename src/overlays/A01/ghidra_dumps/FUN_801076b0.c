// FUN_801076b0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801076b0(uint param_1,int param_2)

{
  bool bVar1;
  short sVar2;
  short extraout_var;
  short extraout_var_00;
  uint uVar3;
  int iVar4;
  int unaff_s1;
  int unaff_s2;
  
  if (*(char *)(param_2 + 0x47) != '\x02') {
    func_0x8001f650(param_1,param_2,*(undefined4 *)(param_2 + 0xc0));
    return;
  }
  uVar3 = FUN_8010c008(param_1,param_2,*(undefined4 *)(param_2 + 0xc0));
  if (uVar3 != param_1) {
    if (DAT_800e7fe4 == '\x01') {
      if (*(byte *)(unaff_s1 + 3) == 3) {
        bVar1 = true;
        if (0x382 < _DAT_1f800160 - 0x42cd) {
          DAT_00000007 = 0;
          goto LAB_8011969c;
        }
      }
      else {
        if (*(byte *)(unaff_s1 + 3) != param_1) {
LAB_8011969c:
          FUN_801208b4();
          FUN_801226ac();
          return;
        }
        bVar1 = true;
        if (0x1a8f < _DAT_1f800164) goto LAB_801106f8;
      }
    }
    else {
LAB_801106f8:
      bVar1 = false;
    }
    if (bVar1) {
      sVar2 = *(short *)(unaff_s2 + 0x12) + 1;
      *(short *)(unaff_s2 + 0x12) = sVar2;
      if (sVar2 < 0x3d) goto LAB_80110750;
      iVar4 = func_0x8009a450();
      if (iVar4 < 0xa000) {
        *(undefined1 *)(unaff_s1 + 5) = 4;
        *(undefined1 *)(unaff_s1 + 6) = 0;
      }
    }
  }
  *(undefined2 *)(unaff_s2 + 0x12) = 0;
LAB_80110750:
  iVar4 = func_0x80083f50((int)*(short *)(unaff_s2 + 0x10));
  *(short *)(unaff_s1 + 0x32) = *(short *)(unaff_s1 + 0x32) + (short)(iVar4 >> 9);
  iVar4 = func_0x8009a450();
  iVar4 = (uint)*(ushort *)(unaff_s2 + 0x10) + (iVar4 >> 0xb);
  *(short *)(unaff_s2 + 0x10) = (short)iVar4;
  func_0x80083f50(iVar4 * 0x10000 >> 0x10);
  *(short *)(unaff_s1 + 0x2e) = *(short *)(unaff_s2 + 0x14) + extraout_var;
  func_0x80083e80((int)*(short *)(unaff_s2 + 0x10));
  *(short *)(unaff_s1 + 0x36) = *(short *)(unaff_s2 + 0x16) + extraout_var_00;
  return;
}

