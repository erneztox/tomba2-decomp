// FUN_80118194

/* WARNING: Removing unreachable block (ram,0x801182c8) */
/* WARNING: Removing unreachable block (ram,0x801182e0) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_80118194(int param_1)

{
  short sVar1;
  short sVar2;
  int in_v0;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int unaff_s1;
  
  if (in_v0 == 0) {
    uVar3 = (uint)(_DAT_1f800160 < 0x20d0);
    iVar5 = 0xd;
    if (uVar3 == 0) {
      uVar3 = (uint)(_DAT_1f800160 < 11000);
      if (uVar3 == 0) goto LAB_80118288;
      iVar5 = 9;
    }
    *(undefined2 *)(unaff_s1 + 0x84) = *(undefined2 *)(uVar3 + 4);
    *(undefined2 *)(unaff_s1 + 0x86) = *(undefined2 *)(iVar5 + 8);
    *(short *)(unaff_s1 + 0x2e) =
         (short)(((int)*(short *)(iVar5 + 2) + (int)*(short *)(iVar5 + 6)) / 2);
    *(undefined2 *)(unaff_s1 + 0x32) = *(undefined2 *)((uint)*(byte *)(unaff_s1 + 3) * 10 + iVar5);
    iVar5 = (uint)*(byte *)(unaff_s1 + 3) * 10 + iVar5;
    sVar1 = *(short *)(iVar5 + 4);
    sVar2 = *(short *)(iVar5 + 8);
    *(undefined2 *)(unaff_s1 + 0x4e) = *(undefined2 *)(unaff_s1 + 0x2e);
    *(short *)(unaff_s1 + 0x36) = (short)(((int)sVar1 + (int)sVar2) / 2);
    *(undefined2 *)(unaff_s1 + 0x50) = *(undefined2 *)(unaff_s1 + 0x32);
    *(undefined2 *)(unaff_s1 + 0x52) = *(undefined2 *)(unaff_s1 + 0x32);
    FUN_80129e8c();
    uVar4 = FUN_8012a2c4();
    return uVar4;
  }
LAB_80118288:
  iVar5 = *(int *)(param_1 + 0x10) + -1;
  *(int *)(param_1 + 0x10) = iVar5;
  if (iVar5 == 0) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)(param_1 + 3) = 0xff;
    *(undefined2 *)(param_1 + 8) = 0xffff;
    return 0;
  }
  return 0;
}

