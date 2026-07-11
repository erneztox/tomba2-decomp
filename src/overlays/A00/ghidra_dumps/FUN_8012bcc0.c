// FUN_8012bcc0

void FUN_8012bcc0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  
  iVar4 = (int)*(short *)(param_1 + 0x36);
  if (iVar4 < 0x1130) {
    uVar2 = 0xff;
LAB_80134d64:
    *(undefined1 *)(param_3 + 5) = uVar2;
    *(undefined1 *)(param_3 + 4) = uVar2;
    func_0x8002b278();
    FUN_8013dd24();
    return;
  }
  sVar3 = 0;
  if (*(int *)(*(int *)(param_2 + 0xc4) + 0x34) <= iVar4) {
    iVar5 = *(byte *)(param_2 + 8) - 1;
    if ((*(int *)(*(int *)(param_2 + iVar5 * 4 + 0xc0) + 0x34) <= iVar4) && (iVar4 < 0x1644)) {
      uVar2 = (undefined1)iVar5;
      goto LAB_80134d64;
    }
    iVar4 = 1;
    iVar5 = *(byte *)(param_2 + 8) - 1;
    sVar3 = -1;
    if (1 < iVar5) {
      param_3 = (int)*(short *)(param_1 + 0x36);
      iVar6 = 8;
      iVar1 = param_2;
      do {
        if ((*(int *)(*(int *)(iVar1 + 0xc4) + 0x34) <= param_3) &&
           (param_3 < *(int *)(*(int *)(param_2 + iVar6 + 0xc0) + 0x34))) {
          *(undefined1 *)(param_3 + 6) = 1;
          uVar2 = 1;
          goto LAB_80134d64;
        }
        iVar6 = iVar6 + 4;
        iVar4 = iVar4 + 1;
        iVar1 = iVar1 + 4;
        sVar3 = -1;
      } while (iVar4 < iVar5);
    }
  }
  if ((-1 < sVar3) &&
     (iVar4 = *(int *)(param_2 + sVar3 * 4 + 0xc0),
     -1 < (int)*(short *)(param_1 + 0x32) -
          (*(int *)(iVar4 + 0x30) +
          ((int)*(short *)(iVar4 + 0x22) *
           ((int)*(short *)(param_1 + 0x36) - *(int *)(iVar4 + 0x34)) >> 0xc)))) {
    *(undefined1 *)(param_1 + 0x2b) = 2;
    *(undefined1 *)(param_2 + 0x29) = 2;
    func_0x80031470(2,param_1 + 0x2c,*(undefined1 *)(param_1 + 0x5e),param_1 + 0x68);
    DAT_1f800182 = 0;
  }
  return;
}

