// FUN_8011a244

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_8011a244(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined2 uVar4;
  undefined2 in_t0;
  int iVar5;
  int unaff_s2;
  int unaff_s5;
  
  if (*(char *)(param_1 + 7) == '\0') {
    uVar1 = 0;
    if (0x18 < DAT_1f800207) {
      uVar4 = 0xc02c;
      iVar2 = func_0x800519e0(param_1,0x12,_DAT_800ecfcc);
      uVar1 = 1;
      if (iVar2 == 0) {
        *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + '\x01';
        uVar3 = 0xff;
        if (DAT_800bf8f6 == -1) {
          iVar2 = 0xff;
          for (; unaff_s2 < (int)(uVar3 - 2); unaff_s2 = unaff_s2 + 1) {
            iVar5 = *(int *)(param_1 + 0xc0);
            *(undefined2 *)(iVar5 + 2) = in_t0;
            *(undefined2 *)(iVar5 + 0x12) = uVar4;
            *(undefined2 *)(iVar5 + 0x10) = 4;
            *(undefined2 *)(iVar5 + 0x16) = 0;
            *(undefined2 *)(iVar5 + 0x14) = 0xe4ec;
            *(undefined2 *)(iVar5 + 8) = *(undefined2 *)(iVar2 + 0x18);
            param_1 = param_1 + 4;
            *(undefined2 *)(iVar5 + 10) = *(undefined2 *)(iVar2 + 0x1a);
            *(undefined2 *)(iVar5 + 0xc) = *(undefined2 *)(iVar2 + 0x1c);
            uVar3 = (uint)*(byte *)(unaff_s5 + 8);
            iVar2 = iVar2 + 0x10;
          }
          *(undefined2 *)(unaff_s5 + 0x40) = 2;
          *(undefined2 *)(unaff_s5 + 0x42) = 0;
          *(undefined1 *)(unaff_s5 + 0x2b) = 0;
          *(undefined2 *)(unaff_s5 + 0x60) = 0;
          *(undefined2 *)(unaff_s5 + 0x62) = 0x1f;
          uVar1 = FUN_8012c6ac();
          return uVar1;
        }
        func_0x80077c40(param_1,&DAT_8014e4ec,0xf);
        uVar1 = FUN_801232c8();
        return uVar1;
      }
    }
  }
  else {
    if (*(char *)(param_1 + 7) != '\x01') {
      uVar1 = FUN_801232c8();
      return uVar1;
    }
    uVar1 = 1;
    if (DAT_1f800207 < 0x19) {
      func_0x8007addc(param_1);
      uVar1 = 0;
      *(char *)(param_1 + 7) = *(char *)(param_1 + 7) + -1;
    }
  }
  return uVar1;
}

