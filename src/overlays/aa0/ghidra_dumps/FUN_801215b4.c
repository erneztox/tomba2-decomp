// FUN_801215b4

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_801215b4(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  short sStack00000012;
  short sStack00000016;
  short sStack0000001a;
  
  if ((param_2 != 0) || ((_DAT_1f80017c & 0x1f) == 0)) {
    sStack00000012 = *(undefined2 *)(param_1 + 0x2e);
    sStack00000016 = *(short *)(param_1 + 0x32) + *(short *)(*(int *)(param_1 + 0xc0) + 2);
    sStack0000001a = *(undefined2 *)(param_1 + 0x36);
    uVar3 = *(undefined4 *)(param_1 + 0xc0);
    iVar1 = func_0x8003116c((int)_DAT_8014a244,&stack0x00000010,0xffffff9c);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x10) = uVar3;
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    }
  }
  if ((param_2 == 0) && ((_DAT_1f80017c & 7) == 0)) {
    uVar2 = (_DAT_1f80017c & 0x18) >> 2;
    sStack00000012 = *(short *)(param_1 + 0x2e) + *(short *)(uVar2 * 2 + -0x7feb5db8);
    sStack00000016 = *(short *)(param_1 + 0x32) + *(short *)(*(int *)(param_1 + 0xc0) + 2) + 100;
    sStack0000001a = *(short *)(param_1 + 0x36) + *(short *)((uVar2 + 1) * 2 + -0x7feb5db8);
    uVar3 = *(undefined4 *)(param_1 + 0xc0);
    iVar1 = func_0x8003116c((int)_DAT_8014a242,&stack0x00000010,0xffffff9c);
    if (iVar1 != 0) {
      *(undefined4 *)(iVar1 + 0x10) = uVar3;
      *(byte *)(iVar1 + 0x28) = *(byte *)(iVar1 + 0x28) | 0x80;
    }
  }
  return;
}

