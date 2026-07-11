// FUN_0803b558

void FUN_0803b558(int param_1)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  
  bVar1 = *(byte *)(param_1 + 3);
  *(byte *)(param_1 + 3) = bVar1 & 0x1f;
  if ((bVar1 & 0x1f) != 0) {
    iVar4 = *(int *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 4) = 0;
    *(short *)(param_1 + 0x2e) = *(short *)(iVar4 + 0x2e) + *(short *)(param_1 + 0x60);
    *(short *)(param_1 + 0x32) = *(short *)(iVar4 + 0x32) + *(short *)(param_1 + 0x62);
    *(short *)(param_1 + 0x36) = *(short *)(iVar4 + 0x36) + *(short *)(param_1 + 100);
    uVar2 = *(undefined1 *)(iVar4 + 0x2a);
    *(undefined2 *)(param_1 + 0x58) = 0;
    uVar3 = *(byte *)(param_1 + 3) - 4;
    *(undefined1 *)(param_1 + 0x2a) = uVar2;
    if (uVar3 < 0x17) {
                    /* WARNING: Could not emulate address calculation at 0x0803b5e8 */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(uVar3 * 4 + -0x7fef5f4c))();
      return;
    }
    *(undefined1 *)(param_1 + 4) = 3;
  }
  return;
}

